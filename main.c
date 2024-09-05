#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
int main()
{
	printf("%%d TESTS\n");
	/* 47: 	TEST(23, print(" %d ", INT_MIN)); */
	ft_printf(" %d ", INT_MIN);
	printf("\n");
	printf(" %d ", INT_MIN);
	printf("\n\n");
	/* 53: 	TEST(29, print(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX,
	 * LONG_MIN, ULONG_MAX, 0, -42)); */
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
			  ULONG_MAX, 0, -42);
	printf("\n");
	printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		   ULONG_MAX, 0, -42);
	printf("\n\n");

	printf("%%i TESTS\n");
	/* 47: 	TEST(23, print(" %i ", INT_MIN)); */
	ft_printf(" %i ", INT_MIN);
	printf("\n");
	printf(" %i ", INT_MIN);
	printf("\n\n");
	/* 53: 	TEST(29, print(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX,
	 * LONG_MIN, ULONG_MAX, 0, -42)); */
	ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
			  ULONG_MAX, 0, -42);
	printf("\n");
	printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		   ULONG_MAX, 0, -42);
	printf("\n\n");

	ft_printf("got: %u ", 0);
	printf("\n");
	printf("expected: %u ", 0);
	printf("\n\n");

	ft_printf("got: %u ", -1);
	printf("\n");
	printf("expected: %u ", -1);
	printf("\n\n");

	ft_printf("got: %u ", -2);
	printf("\n");
	printf("expected: %u ", -2);
	printf("\n\n");

	ft_printf("got: %u ", -9);
	printf("\n");
	printf("expected: %u ", -9);
	printf("\n\n");

	ft_printf(" %u ", -10);
	printf("\n");
	printf(" %u ", -10);
	printf("\n\n");

	ft_printf(" %u ", -11);
	printf("\n");
	printf(" %u ", -11);
	printf("\n\n");

	ft_printf(" %u ", -14);
	printf("\n");
	printf(" %u ", -14);
	printf("\n\n");

	ft_printf(" %u ", -15);
	printf("\n");
	printf(" %u ", -15);
	printf("\n\n");

	ft_printf(" %u ", -16);
	printf("\n");
	printf(" %u ", -16);
	printf("\n\n");

	ft_printf(" %u ", -99);
	printf("\n");
	printf(" %u ", -99);
	printf("\n\n");

	ft_printf(" %u ", -100);
	printf("\n");
	printf(" %u ", -100);
	printf("\n\n");

	ft_printf(" %u ", -101);
	printf("\n");
	printf(" %u ", -101);
	printf("\n\n");

	ft_printf(" %u ", INT_MIN);
	printf("\n");
	printf(" %u ", INT_MIN);
	printf("\n\n");

	ft_printf(" %u ", LONG_MAX);
	printf("\n");
	printf(" %u ", LONG_MAX);
	printf("\n\n");

	ft_printf(" %u ", UINT_MAX);
	printf("\n");
	printf(" %u ", UINT_MAX);
	printf("\n\n");

	ft_printf(" %u ", ULONG_MAX);
	printf("\n");
	printf(" %u ", ULONG_MAX);
	printf("\n\n");

	ft_printf(" %u ", 9223372036854775807LL);
	printf("\n");
	printf(" %u ", 9223372036854775807LL);
	printf("\n\n");

	/* Test case: 53 */
	ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
			  ULONG_MAX, 0, -42);
	printf("\n");
	printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		   ULONG_MAX, 0, -42);
	printf("\n\n");

	return 0;
}
