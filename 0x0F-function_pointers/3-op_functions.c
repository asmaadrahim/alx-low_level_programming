#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum
 * @a: No1
 * @b: No2
 *
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - minus
 * @a: No1
 * @b: No2
 *
 * Return: Result re
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: No1
 * @b: No2
 *
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: No1
 * @b: No2
 *
 * Return: Result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod
 * @a: No1
 * @b: No2
 *
 * Return: Result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
