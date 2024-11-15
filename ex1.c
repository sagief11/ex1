/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    int num, position, temp;

    // Task 1 - What Bit
    printf("What bit:\n");
    // /*Scan two integers (representing number and a position)
    // Print the bit in this position. */
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    temp = (num >> position) & 1;
    printf("The bit in position %d of number  %d is: %d", position, num, temp);
    // Finish task 1

    // // Task 2 - Set bit
    printf("\nSet bit:\n");
    /*
    Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output
    */

    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    temp = num | (1 << position);
    printf("Number with bit %d set to 1: %d\n", position, num | (1 << position));
    printf("Number with bit %d set to 0: %d\n", position, num & ~(1 << position));
    // // Finish task 2

    // // Task 3 - Toggle Bit
    // // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number
    */
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    temp = num ^ (1 << position);
    printf("Number with bit %d toggled: %d", position, temp);
    // Finish task 3

    // // Task 4 - Even - Odd
    printf("\nEven - Odd:\n");
    /*
    Scan an integer
    If the number is even - print 1, else - print 0.
    */
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("%d\n", (num ^ 1) & 1);
    // Finish task 4

    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    /*
    Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */
    printf("Please enter the first number (octal):\n");
    scanf("%o", &temp);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &num);
    temp += num;
    printf("The sum in hexadecimal: %X\n", temp);
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", temp >> 3 & 1, temp >> 5 & 1, temp >> 7 & 1, temp >> 11 & 1);

    printf("Bye!\n");
    return 0;
}
