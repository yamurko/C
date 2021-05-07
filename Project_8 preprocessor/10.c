/* Example using #error directive */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/*
* Calculate the number of milliseconds for the provided age in years
* Milliseconds = age in years * 365 days/year * 24 hours/day, 60 minutes/hour, 60
seconds/min, 1000 millisconds/sec
*/
#define MILLISECONDS(age) (age * 365 * 24 * 60 * 60)
int main()
{
	/* The age of in milliseconds */
	int age;

	printf("INT_MAX: %d\n", INT_MAX);
#if INT_MAX < MILLISECONDS(12)
#error Integer size cannot hold our age in milliseconds
#endif
	/* Calculate the number of milliseconds in 12000 years */
	age = MILLISECONDS(12);
	printf("Age is %d milliseconds old\n", age);
	system("pause");
}
