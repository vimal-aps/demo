#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
int top1 = -1;
int top2 = MAX_SIZE;

void main() {
    int n1, n2,i,sum_odd_position_stack1,sum_even_position_stack2;
    clrscr();
    printf("Enter the number of elements for stack 1: ");
    scanf("%d", &n1);
    printf("Enter the elements for stack 1: ");
    for (i = 0; i < n1; i++) {
	scanf("%d", &arr[++top1]);
    }

    printf("Enter the number of elements for stack 2: ");
    scanf("%d", &n2);
    printf("Enter the elements for stack 2: ");
    for (i = 0; i < n2; i++) {
	scanf("%d", &arr[--top2]);
    }


    sum_odd_position_stack1 = 0;
    for (i = 0; i <= top1; i += 2) {
	sum_odd_position_stack1 += arr[i];
    }
    sum_even_position_stack2 = 0;
    for (i = MAX_SIZE - 1; i >= top2; i -= 2) {
	sum_even_position_stack2 += arr[i];
    }

    printf("Sum of odd-positioned numbers in stack 1: %d\n", sum_odd_position_stack1);
    printf("Sum of even-positioned numbers in stack 2: %d\n", sum_even_position_stack2);

    getch();
}