#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_TOKEN_SIZE 100

// Define the list of C keywords
const char *keywords[] = {
    "int", "float", "char", "if", "else", "while", "for", "return", "void", "break", "continue", "switch", "case"
};
#define NUM_KEYWORDS (sizeof(keywords) / sizeof(keywords[0]))

// Function to check if a string is a keyword
int isKeyword(char *token) {
    for (int i = 0; i < NUM_KEYWORDS; i++) {
        if (strcmp(token, keywords[i]) == 0) {
            return 1;  // Token is a keyword
        }
    }
    return 0;  // Token is not a keyword
}

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '<' || c == '>' || c == '!' || c == '&' || c == '|');
}

// Function to check if a string is a valid identifier
int isIdentifier(char *token) {
    if (!isalpha(token[0]) && token[0] != '_') {
        return 0;  // Identifier must start with a letter or underscore
    }
    for (int i = 1; i < strlen(token); i++) {
        if (!isalnum(token[i]) && token[i] != '_') {
            return 0;  // Identifier can only contain letters, digits, and underscores
        }
    }
    return 1;
}

// Function to identify and categorize tokens
void analyzeLexical(const char *input) {
    char token[MAX_TOKEN_SIZE];
    int index = 0;
    int inString = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];

        // Skip whitespaces and handle line breaks
        if (isspace(c)) {
            if (index > 0) {
                token[index] = '\0';  // Null-terminate the token
                if (isKeyword(token)) {
                    printf("Keyword: %s\n", token);
                } else if (isIdentifier(token)) {
                    printf("Identifier: %s\n", token);
                } else {
                    printf("Invalid token: %s\n", token);
                }
                index = 0;  // Reset token index
            }
        } 
        // Handle string literals
        else if (c == '"') {
            inString = !inString;  // Toggle string literal flag
        }
        // Handle operators
        else if (isOperator(c)) {
            if (index > 0) {
                token[index] = '\0';
                if (isKeyword(token)) {
                    printf("Keyword: %s\n", token);
                } else if (isIdentifier(token)) {
                    printf("Identifier: %s\n", token);
                } else {
                    printf("Invalid token: %s\n", token);
                }
                index = 0;  // Reset token index
            }
            printf("Operator: %c\n", c);
        } 
        // Handle digits (for numbers)
        else if (isdigit(c)) {
            token[index++] = c;
        } 
        // Handle other characters
        else {
            token[index++] = c;
        }
    }
    
    // If there's a leftover token after the loop ends
    if (index > 0) {
        token[index] = '\0';  // Null-terminate the last token
        if (isKeyword(token)) {
            printf("Keyword: %s\n", token);
        } else if (isIdentifier(token)) {
            printf("Identifier: %s\n", token);
        } else {
            printf("Invalid token: %s\n", token);
        }
    }
}

int main() {
    // Sample input code for lexical analysis
    const char *sampleCode = 
        "int main() {\n"
        "   int a = 5;\n"
        "   float b = 2.5;\n"
        "   if (a > b) {\n"
        "       return a + b;\n"
        "   }\n"
        "}\n";

    printf("Lexical Analysis Output:\n\n");
    analyzeLexical(sampleCode);

    return 0;
}
