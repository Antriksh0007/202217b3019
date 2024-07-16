#include <stdio.h>
#include <stdlib.h>

#define n 5

void main() {
    int queue[n];
    int ch = 1, front = 0, rear = 0, j = 1, i;

    printf("Queue using Array\n");
    printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");

    while (ch != 4) {
        printf("\nEnter the Choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == n) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter number %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;
            case 2:
                if (front == rear) {
                    printf("\nQueue is empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front++]);
                }
                break;
            case 3:
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("Queue is Empty\n");
                } else {
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;
            case 4:
                printf("\nExiting...\n");
                break;
            default:
                printf("Wrong Choice: please see the options\n");
          }
      }

    }
