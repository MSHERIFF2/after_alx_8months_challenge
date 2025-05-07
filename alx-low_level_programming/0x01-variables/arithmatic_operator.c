#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that perfom arithmetic operator
 * Return: Always 0 (Success)
 */

int main(void)
{
	int op1 = 10;
	int op2 = 3;

	printf("operand1: %d operand2: %d\n", op1, op2);
	printf("Addition of op1 and op2: %d\n", op1 + op2);
	printf("Subtraction of op1 and op2: %d\n", op1 - op2);
	printf("Multiplication of op1 and op2: %d\n", op1 * op2);
	printf("Division of op1 and op2: %f\n", (float)op1 / op2);
	printf("Young Modulo: %d\n", op1 % op2);

	return (0);
}
