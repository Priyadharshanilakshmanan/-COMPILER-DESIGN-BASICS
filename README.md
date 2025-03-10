# -COMPILER-DESIGN-BASICS

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: PRIYADHARSHANI L

*INTERN ID*: CT08SXS

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

DESCRIBTION:

Description
This repository contains a simple lexical analyzer implemented in C. The program reads a given input string (simulating code written in C-like syntax) and identifies key elements, such as keywords, operators, and identifiers. The lexical analyzer classifies each token from the input and prints out its type, such as whether it's a keyword, operator, or identifier.

The program serves as an educational tool for understanding lexical analysis — the first step in a typical compiler or interpreter. It helps in breaking down the source code into smaller, meaningful components (tokens) that can be further processed in later stages of compilation or interpretation.

Key Features
Keyword Recognition: Identifies and prints keywords from a predefined list (e.g., int, float, if, return, etc.).
Operator Recognition: Identifies common operators (e.g., +, -, =, <, >, *, /).
Identifier Recognition: Identifies valid C identifiers (variables, function names, etc.) based on the rules of C syntax.
Basic Error Handling: Reports invalid tokens or unrecognized characters encountered during lexical analysis.
How It Works
The program processes a given input string (which simulates C-like code), iterates through each character, and extracts tokens. It then classifies each token into one of the following categories:

Keywords: Reserved words in C such as int, float, if, while, etc.
Operators: Symbols like +, -, =, <, >, etc.
Identifiers: Valid variable or function names that follow C rules (e.g., must start with a letter or underscore, followed by letters, digits, or underscores).
Errors: The program will detect invalid tokens (like an incorrectly formatted identifier) and print an error message.
Supported Tokens
Keywords: int, float, char, if, else, while, for, return, void, break, continue, switch, case
Operators: +, -, *, /, =, !, &, |, <, >, etc.
Identifiers: Any valid identifier following C rules (e.g., variables, functions).
Requirements
C Compiler: A C compiler such as GCC.
Operating System: Compatible with all major operating systems (Linux, macOS, Windows).

Sample Input
You can modify the sampleCode string in the main() function, or alternatively, update the program to read from a file. Here's an example of a C-like input string:

c
Copy
int main() {
    int a = 5;
    float b = 2.5;
    if (a > b) {
        return a + b;
    }
}
Sample Output
Given the sample input above, the output would look something like this:

yaml
Copy
Lexical Analysis Output:

Keyword: int
Keyword: main
Operator: (
Operator: )
Operator: {
Keyword: int
Identifier: a
Operator: =
Digit: 5
Operator: ;
Keyword: float
Identifier: b
Operator: =
Digit: 2
Operator: .
Digit: 5
Operator: ;
Keyword: if
Operator: (
Identifier: a
Operator: >
Identifier: b
Operator: )
Operator: {
Keyword: return
Identifier: a
Operator: +
Identifier: b
Operator: ;
Operator: }
Operator: }
Contributing
Contributions are welcome! If you'd like to improve this project, fix bugs, or add new features, please follow these steps:

Fork the repository.
Create a new branch for your changes.
Make the necessary changes and add tests if applicable.
Commit your changes and push them to your fork.
Open a pull request with a clear explanation of what changes you have made.
Please ensure that your code follows the existing code style and includes comments where necessary.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgements
This project is a simple demonstration of lexical analysis and serves as an educational tool for understanding the process of tokenizing code in a compiler or interpreter.

Additional Notes:
Replace your-username in the repository URL with your actual GitHub username.
Extensibility: The program can be extended to handle more complex tokens (e.g., numbers, string literals, comments), support more operators, or handle multi-character tokens.
Reading from Files: The program currently works with hardcoded input in main(). You can extend it to read input from a file for more flexibility.
