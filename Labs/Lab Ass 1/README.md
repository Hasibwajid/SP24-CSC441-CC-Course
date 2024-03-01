Lexical Analyzer
Introduction

This C program serves as a simple Lexical Analyzer, breaking down a C program into various components such as keywords, identifiers, data types, arithmetic and logical operators, special characters, and counting the number of lines. It utilizes file handling and tokenization techniques to analyze the input C code.
Filename

LexicalAnalyzer.c
Files Created

Input File:
        input - Contains the C program to be analyzed.
Output Files:
        identifier - Stores identifiers and keywords.
        specialchar - Stores special characters.

Usage

Compile the Code:

bash
    
    gcc LexicalAnalyzer.c -o LexicalAnalyzer

Run the Executable:

bash

    ./LexicalAnalyzer

Enter C Program:
        Input your C code as prompted and press Ctrl + D to indicate the end of input.

Review Output:
        The program will display information about keywords, identifiers, data types, special characters, arithmetic and logical operators, and the total number of lines.

Example: 

![image](https://github.com/Hasibwajid/Compiler-construction-Course/assets/72168225/6f128ccf-52e6-49da-8618-ee682fdca56f)


Additional Notes

Ensure that you have GCC installed on your system.
    The program creates and uses three additional files (input, identifier, specialchar) during execution. Ensure appropriate permissions for file read and write operations.

Feel free to explore the generated output files to understand the lexical analysis breakdown of the input C code.
