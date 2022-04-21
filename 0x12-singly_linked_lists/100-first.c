#include "lists.h"
#include "stdio.h"
/**
 * myStartupFun - a function that that prints the statement:
 * You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n before the main function is executed
 * @attribute: attribute
 */
void myStartupFun (void) __attribute__ ((constructor));
void myStartupFun (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
