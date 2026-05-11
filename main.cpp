// A Hello World Program
#include <iostream>
#include "various.h"



int main()
{
    //std::cout << "Hello, World!\n" << std::endl;
    int result = add(5, 4);
    control_struct(5, 4);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

/**
 * @brief Notes for Ch1.
 * 
 * Tokens:
 * Tokens are the minimals chunk of program that have meaning to the compiler - the smallest meaningful symbols of the language. Our
 * code displays all 6 kinds of tokens, use of operators is not present. 
 * 
 * _________________________________________________________________________________________________________________________
 * |                                |                                      |                                                |
 * |        Token Type              |       Description/Purpose            |                 Examples                       |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Keywords                |   Words with special meaning todo    |     int, double, for, auto                     |
 * |                                |    to the compiler.                  |                                                |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Identifiers             |   Names of things that are not       |     cout, std, x, myFunction                   |
 * |                                |   built into the language.           |                                                |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Literals                | Basic constant values whose value    |   "Hello World!", 24.3, 0, 'c'                 |
 * |                                | is specified directly in source code.|                                                |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Operators               |  Mathematical or logical operations. |    +, -, &&, %, <<                             |
 * |                                |                                      |                                                |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Punctuation/Separators  |   Punctuation defining the structure |     {}, (), , ;                                |
 * |                                |   of a program.                      |                                                |
 * |________________________________|______________________________________|________________________________________________|
 * |                                |                                      |                                                |
 * |        Whitespace              |  Spaces of various sorts; ignored by |     Spaces, tabs, newlines, comments           |
 * |                                |  the compiler.                       |                                                |
 * |________________________________|______________________________________|________________________________________________|
 * 
 * Line-by-line execution
 * 
 * 1. // indicates that everything following it until the end of the line is a comment. it is ignored by the compiler. Another way to
 *       write a comment is to put it between /* and * / (ignore whitespace) (e.g. x = 1 + /*sneaky comment here* /). A comment in 
 *       this form may span multiple lines. Comments exist to explain non-obvious things going on in the code. 
 * 
 *       USE THEM!: document your code well.
 * 
 * 
 * 2.   Lines beginning with # are preprocessor commands, which usually change what code is actually being compiled. 
 *      #include tells the preprocessor to dump the contents of another file, here the iostream file, which defines the 
 *      procedures for input/output.
 * 
 * 3.   int main(){...} defines the code that should execute when the program starts up. The curly braces represent grouping of 
 *      multiple commands into a block. 
 * 
 * 4.   cout << : This is the syntax for outputting some piece of text to the screen. 
 *      
 *      Namespaces: In C++, identifiers can be defined withing a context - sort of a directory of names - called a namespace. When 
 *      we want to access an identifier defined in a namespace, we tell the compiler to look for it in that namespace using the scope
 *      resolution operator (::). Here, we're telling the compiler to look for cout in the std namespace, in which many standard C++
 *      identifiers are defined. 
 * 
 *      Strings: A sequence of characters such as Hello, world is known as a string. A string that is specified explicitly in a 
 *      program is called a string literal.
 * 
 *      Escape Sequences: The "\n" indicates a newline character. It is an example of an escape sequence - a symbol used to represent
 *      a special character in a text literal. Here are all the C++ escape sequences which you can include in strings:
 * _________________________________________________________________________
 * |                                |                                      |
 * |        Escape Sequence         |       Represented Character          |
 * |________________________________|______________________________________| 
 * |                                |                                      |
 * |           "\a"                 |       System bell (beep sound)       |
 * |________________________________|______________________________________|
 * |                                |                                      |
 * |           "\b"                 |       Backspace                      |
 * |________________________________|______________________________________| 
 * |                                |                                      |
 * |           "\f"                 |       Formfeed (page break)          |
 * |________________________________|______________________________________|
 * |                                |                                      |
 * |           "\n"                 |       Newline (line break)           |
 * |________________________________|______________________________________| 
 * |                                |                                      |
 * |           "\r"                 |   "Carriage return" (return cursor)  |
 * |________________________________|______________________________________|
 * |                                |                                      |
 * |            "\t"                |       Tab                            |
 * |________________________________|______________________________________| 
 * |                                |                                      |
 * |             \\                 |       Backlash                       |
 * |________________________________|______________________________________|
 * |                                |                                      |
 * |             \'                 |       Single quote character         |
 * |________________________________|______________________________________| 
 * |                                |                                      |
 * |            \\"                 |       ouble quote character          |
 * |________________________________|______________________________________|
 * |                                |                                      |
 * |          \some integer x       |       The character represented by x |
 * |________________________________|______________________________________| 
 * 
 * 
 * 
 * 5. return 0 indicates that the program should tell the operating system it has completed successfully.
 * 
 * Note: Every statement ends with a semicolon (except preprocessor commands and blocks using {}. 
 * 
 * 
 *  Basic Language Features
 * 
 * Values and Statements
 *    - A statement is a unit of code that does something - a basic building block of a program.
 *    - An expression is a statement that has a value - for instance, a number, a string, the sum of two numbers, etc. 
 *      4 + 2, x - 1, and "Hello, World!"are all expressions.
 * 
 *  Note: Not every statement is an expression. It makes no sense to talk about the value of an #include statement, for instance.
 * 
 * 
 *  Operators
 *  We can perform arithmetic calculations with operators. Operators act on expressions to form a new expression. For example, 
 *  we could replace "Hello, world!" with (4 + 2) / 3, which would cause the program to print the number 2. In this case,
 *  the + operator acts on the expression 4 and 2 (its operands).   `
 * 
 *
 *  
 * 
 */