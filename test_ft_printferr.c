#include "ft_printferr.c"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	/* int		printerr_nbr = 0; */
	/* int		printerr_nbr2 = 0; */
	/* void	*ptr = "azz"; */

	ft_printferr(  "abc" "def%c%s %d %i %x %X %d ", 'Z', "789", -42, +7777777, 777, 2147483647);
	printf(  "abc" "def%c%s %d %i %x %X ", 'Z', "789", -42, +7777777, 777, 2147483647);

/* ft_printferr("%x", LONG_MAX); */
/* printf("%x", LONG_MAX); */


	/* printerr_nbr = ft_printferr(  "abc" "def%c%s %d %i %x %X %p %a ", 'Z', "789", -42, +7777777, 777, 2147483647, ptr); */
	/* printf("\n%d\n", printerr_nbr); */
	/* printerr_nbr2 = printf(  "abc" "def%c%s %d %i %x %X %p %%   % ", 'Z', "789", -42, +7777777, 777, 2147483647, ptr); */
	/* printf("\n%d\n", printerr_nbr2); */
	return (0);
}
