#include <stddef.h>
/**
 * op_add - adds a and b
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: int a
 * @b: int b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int a
 * @b: int b
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: int a
 * @b: int b
 * Return: divsion of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulus of a and b
 * @a: int a
 * @b: int b
 * Return: a modulo b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
