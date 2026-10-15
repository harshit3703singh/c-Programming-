#include <stdio.h>
#include <string.h>

char stack[50];
int top = -1;
char prefix[50];

int prio(char c) {
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    return 0;
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int main() {
    char infix[50];
    int i = 0, j = 0;
    
    printf("Enter infix: ");
    scanf("%s", infix);
    
    // STEP 1: Reverse infix
    printf("\nStep 1 - Reversed: ");
    for(int k = strlen(infix)-1; k>=0; k--) {
        printf("%c", infix[k]);
        prefix[j++] = infix[k];
    }
    prefix[j] = '\0';
    printf("\n");
    
    strcpy(infix, prefix);  // Copy reversed to infix
    j = 0;
    
    // STEP 2: Change ( to ) and ) to (
    printf("Step 2 - Swap (): ");
    for(i=0; i<strlen(infix); i++) {
        if(infix[i]=='(') {
            prefix[j++] = ')';
            printf(")");
        }
        else if(infix[i]==')') {
            prefix[j++] = '(';
            printf("(");
        }
        else {
            prefix[j++] = infix[i];
            printf("%c", infix[i]);
        }
    }
    prefix[j] = '\0';
    printf("\n");
    
    strcpy(infix, prefix);  // Copy to infix
    top = -1;
    
    // STEP 3: Convert to postfix (same as infix->postfix)
    printf("Step 3 - Processing: ");
    for(i=0; i<strlen(infix); i++) {
        char c = infix[i];
        
        if(c=='A' || c=='B' || c=='C' || c=='D') {
            prefix[j++] = c;
            printf("%c ", c);
        }
        else if(c=='(') {
            push(c);
            printf("( push");
        }
        else if(c==')') {
            while(peek() != '(') {
                prefix[j++] = pop();
                printf(" pop ");
            }
            pop();  // Remove (
            printf(" )");
        }
        else {  // Operator
            while(top>=0 && peek()!='(' && prio(peek())>=prio(c)) {
                prefix[j++] = pop();
                printf(" pop ");
            }
            push(c);
            printf(" push %c", c);
        }
    }
    
    // Empty stack
    while(top>=0) {
        prefix[j++] = pop();
        printf(" pop ");
    }
    prefix[j] = '\0';
    
    printf("\nStep 4 - Final postfix: %s\n", prefix);
    
    // STEP 4: Reverse to get prefix
    printf("\n**PREFIX = ");
    for(i=strlen(prefix)-1; i>=0; i--) {
        printf("%c", prefix[i]);
    }
    printf("**\n");
    
    return 0;
}