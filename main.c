#include "includes/ft_printf.h"


int	main(void)
{
	char	*ss;
	int		a;


	ss = "ssmigfer";
	a =ft_printf("yunn  %c %s %X %d %x %p %%", 'e', ss, 255, 12,19254,ss);

	int b =printf("\nyunn  %c %s %X %d %x %p %%", 'e', ss, 255,12, 19254,ss);
	printf("a  %d\n%d", a,b);
	return (0);
}
