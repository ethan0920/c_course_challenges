/*
Program needs to print the byte size of all 
common data types in C.
*/
#include <stdio.h>

int main()
{
	printf("Size of int is %zd\n", sizeof(int)); // 4
	printf("Size of char is %zd\n", sizeof(char)); // 1
	printf("Size of long is %zd\n", sizeof(long)); // 8
	printf("Size of long long is %zd\n", sizeof(long long)); // 8
	printf("Size of double is %zd\n", sizeof(double)); // 8
	printf("Size of long double is %zd\n", sizeof(long double)); // 16
}
