#include<stdio.h>

/**
* main - Entry point
*Return: Always 0 (Success)
*/
void main() {
int num;
printf("Input a number :");
scanf("%d", &num);
if (num >= 0)
printf("%d is a positive number \n", num);
else
printf("%d is a negative number \n", num);
}
