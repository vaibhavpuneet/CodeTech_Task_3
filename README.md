Name:Vaibhav puneet Company:CODETECH IT SOLUTION ID:CT04DF2936 Domain:C LANGUAGE Duration:5 JUNE 2025 TO 5 JULY 2025 Mentor:NEELA SANTHOSH KUMAR Internship Report: Compiler Design Basics in C Language Introduction During my internship, I worked on understanding compiler design basics and implemented a simple lexical analyzer in C language. This project helped me learn how source code is processed and analyzed before execution, and gave me a practical understanding of compiler stages.

Objective To understand compiler design fundamentals: Lexical Analysis, Syntax Analysis, Semantic Analysis, Optimization, Code Generation.

To implement a simple lexical analyzer in C.

To identify keywords, operators, and identifiers from an input file.

To strengthen logic-building, C programming, and file handling.

What is Compiler Design? Compiler design deals with creating a program (compiler) that translates high-level language code into machine code. It involves several phases:

Lexical Analysis (Token generation)

Syntax Analysis

Semantic Analysis

Intermediate Code Generation

Optimization

Target Code Generation

In this internship, we focused on Lexical Analysis (the first phase of the compiler).

Lexical Analyzer A Lexical Analyzer reads the source program and:

Breaks it into tokens (keywords, identifiers, operators, literals).

Removes whitespace and comments.

Passes tokens to the syntax analyzer.

Tools and Environment Language: C

Compiler: GCC

Platform: Windows/Linux

Editor: Code::Blocks / Visual Studio Code

Implementation Details 1️⃣ File Handling Read the source code from an input .txt file using fopen, fgetc.

Process character by character to identify tokens.

2️⃣ Identifying Tokens Keywords: int, float, if, else, etc.

Operators: +, -, *, /, =, etc.

Identifiers: Variable and function names starting with alphabets.

3️⃣ Logic Used arrays to store keywords for matching.

Used character checking (isalpha, isdigit, symbols) to identify token types.

Printed each identified token type and value.

Sample Output vbnet Copy Edit Token: KEYWORD -> int Token: IDENTIFIER -> a Token: OPERATOR -> = Token: NUMBER -> 5 Token: OPERATOR -> + Token: NUMBER -> 3 Token: SYMBOL -> ; Skills Learned ✅ Understanding compiler phases, especially lexical analysis. ✅ File handling and character processing in C. ✅ String manipulation and condition checking. ✅ Building practical C programs for system-level tasks. ✅ Debugging logical and runtime errors in low-level programs.

Challenges Faced Handling file reading correctly, including end-of-file conditions.

Differentiating between keywords and identifiers accurately.

Managing multi-character operators and symbols.

Ensuring efficient token recognition with minimum time complexity.

Conclusion This internship project strengthened my understanding of compiler internals and lexical analysis using C language. It prepared me for advanced compiler design, system programming, and placement-oriented coding by giving a clear picture of how source code is broken down and processed.
