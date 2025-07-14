#include <stdio.h>
#include <string.h>
#include <ctype.h>

char keywords[][10] = {
    "int", "float", "if", "else", "while", "return", "char", "for", "do", "double"
};

int isKeyword(char *str) {
    for (int i = 0; i < sizeof(keywords)/sizeof(keywords[0]); i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
           ch == '=' || ch == '<' || ch == '>' || ch == '!';
}

void lexicalAnalyzer(FILE *fp) {
    char ch, buffer[100];
    int i = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalnum(ch)) {
            buffer[i++] = ch;
        } else if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (i > 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                i = 0;
            }
        } else if (isOperator(ch)) {
            if (i > 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                i = 0;
            }
            char next = fgetc(fp);
            if (next == '=')
                printf("Operator: %c%c\n", ch, next);
            else {
                printf("Operator: %c\n", ch);
                ungetc(next, fp);
            }
        } else {
            if (i > 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                i = 0;
            }
        }
    }

    if (i > 0) {
        buffer[i] = '\0';
        if (isKeyword(buffer))
            printf("Keyword: %s\n", buffer);
        else
            printf("Identifier: %s\n", buffer);
    }
}

int main() {
    FILE *fp;
    char filename[100];

    printf("Enter input filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    printf("\n--- Lexical Analysis Output ---\n");
    lexicalAnalyzer(fp);
    fclose(fp);

    return 0;
}