#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
	printf("size of int\t:%u\n", (int) sizeof(int));
	printf("size of char\t:%u\n", (int) sizeof(char));
	printf("size of short\t:%u\n", (int) sizeof(short));
	printf("size of long\t:%u\n", (int) sizeof(long));

	printf("size of float\t:%u\n", (int) sizeof(float));
	printf("size of double\t:%u\n", (int) sizeof(double));

	printf("size of uint32_t\t:%u\n", (int) sizeof(uint32_t));
	printf("size of uint64_t\t:%u\n", (int) sizeof(uint64_t));

	printf("short\n");
	printf("short max\t:%i\n", SHRT_MAX);
	printf("short min\t:%i\n", SHRT_MIN);
	printf("short unsiged\t:%u\n", USHRT_MAX);

	printf("short decimal\t:%d\n", USHRT_MAX);
	printf("short hexadecimal:0x%x\n", USHRT_MAX);
	printf("short octal\t:o%o\n", USHRT_MAX);

	printf("long\n");
	printf("long max\t:%li\n", LONG_MAX);
	printf("long min\t:%li\n", LONG_MIN);
	printf("long unsiged\t:%lu\n", ULONG_MAX);

	printf("long decimal\t:%ld\n", ULONG_MAX);
	printf("long hexadecimal:0x%lx\n", ULONG_MAX);
	printf("long octal\t:o%lo\n", ULONG_MAX);

	printf("int\n");
	printf("int max\t:%i\n", INT_MAX);
	printf("int min\t:%i\n", INT_MIN);
	printf("int unsiged\t:%u\n", UINT_MAX);

	printf("int decimal\t:%d\n", UINT_MAX);
	printf("int hexadecimal:0x%x\n", UINT_MAX);
	printf("int octal\t:o%o\n", UINT_MAX);

	printf("float\t:%f\t%f\n", FLT_MIN, FLT_MAX);
	printf("double\t:%f\t%f\n", DBL_MIN, DBL_MAX);

	printf("float\t:%le\n", 1.0 / FLT_MAX);
	printf("double\t:%le\n", 1.0 / DBL_MAX);
}
