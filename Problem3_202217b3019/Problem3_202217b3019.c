#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE], top = -1;

void push(void);
void pop(void);
void display(void);

int main() {
    int choice;

    printf("\n Enter the size of STACK[MAX=100]: %d\n", MAX_SIZE);

    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");

    do {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n\t EXIT POINT\n");
                break;
            default:
                printf("\n\t Please Enter a Valid Choice (1/2/3/4)");
        }
    } while (choice != 4);

    return 0;
}

void push() {
    int x;

    if (top >= MAX_SIZE - 1) {
        printf("\n\t STACK is over flow");
    } else {
        printf("\n Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top <= -1) {
        printf("\n\t Stack is under flow");
    } else {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}

void display() {
    int i;

    if (top >= 0) {
        printf("\n The elements in STACK are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    } else {
        printf("\n The STACK is empty");
    }
}
