
/****************************************************
author: Riham Gamal Elaraby
Email: rehamelaraby2272@gmail.com
Task_1:Develop a simple calculator calculator that can
perform basic arithmetic operations such as
addition, subtraction, multiplication, and
division
Linked-in:https://www.linkedin.com/in/riham-el-araby-b0bba7159/
****************************************************/

#include <stdio.h>

char Operation;
double First_Argument;
double Second_Argument;

void Addition(double F, double S);
void Subtraction(double F, double S);
void Multiplication(double F, double S);
void Division(double F, double S);

int main() {
    char Answer;

    do {
        printf("Choose an operator\n");
        printf("+\n");
        printf("-\n");
        printf("*\n");
        printf("/\n");
        scanf(" %c", &Operation);

        printf("Enter two operands: \n");
        scanf("%lf %lf", &First_Argument, &Second_Argument);

        // Clear the input buffer if the operator is not '-'
        if (Operation != '-') {
            while (getchar() != '\n');
        }

        switch (Operation) {
            case '+':
                Addition(First_Argument, Second_Argument);
                break;
            case '-':
                Subtraction(First_Argument, Second_Argument);
                break;
            case '*':
                Multiplication(First_Argument, Second_Argument);
                break;
            case '/':
                Division(First_Argument, Second_Argument);
                break;
            default:
                printf("Error! Operator is not correct\n");
                // Clear the input buffer to prevent further issues
                while (getchar() != '\n');
        }

        printf("Do you want to do another calculation? (y/n): ");
        scanf(" %c", &Answer);
    } while (Answer == 'y' || Answer == 'Y');

    return 0;
}

void Addition(double F, double S) {
    printf("%.1lf + %.1lf = %.1lf\n", F, S, F + S);
}

void Subtraction(double F, double S) {
    printf("%.1lf - %.1lf = %.1lf\n", F, S, F - S);
}

void Multiplication(double F, double S) {
    printf("%.1lf * %.1lf = %.1lf\n", F, S, F * S);
}

void Division(double F, double S) {
    if (S != 0) {
        printf("%.1lf / %.1lf = %.1lf\n", F, S, F / S);
    } else {
        printf("Error! Division by zero.\n");
    }
}
