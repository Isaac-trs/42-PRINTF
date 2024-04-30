#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a = 0;
	ft_printf("isaac tripoli a %d jours avant de se faire bz\n", 2);
	ft_printf("isaac tripoli a %p jours avant de se faire bz\n", & a);
	ft_printf("isaac tripoli a %x jours avant de se faire bz\n", 163);
	ft_printf("isaac tripoli a %u jours avant de se faire bz\n", 455555555);
	ft_printf("isaac tripoli a %X jours avant de se faire bz\n", 163);
	ft_printf("isaac tripoli a %d jours avant de se faire bz\n", 2147483647);	
	ft_printf("isaac tripoli a %d jours avant de se faire bz\n", -2147483648);	
	ft_printf("isaac tripoli a %t jours avant de se faire bz\n", -2147483648);	

	printf("\n\n");

	printf("isaac tripoli a %d jours avant de se faire bz\n", 2);
	printf("isaac tripoli a %p jours avant de se faire bz\n", & a);
	printf("isaac tripoli a %x jours avant de se faire bz\n", 163);
	printf("isaac tripoli a %u jours avant de se faire bz\n", 455555555);
	printf("isaac tripoli a %X jours avant de se faire bz\n", 163);	
	printf("isaac tripoli a %d jours avant de se faire bz\n", 2147483647);	
	printf("isaac tripoli a %d jours avant de se faire bz\n", -2147483648);	
	printf("isaac tripoli a %t jours avant de se faire bz\n", -2147483648);	
	return 0;
}