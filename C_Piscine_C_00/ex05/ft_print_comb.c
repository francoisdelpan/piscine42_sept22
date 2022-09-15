#include <unistd.h>

void	 ft_print_comb(void)
{
	char c1 = 48;
	char c2 = 48;
	char c3 = 48;

	while( c1 <= 55 )
	{
		while( c2 <= 57 )
		{
			while( c3 <= 57 )
			{
				if( c1 != c2 && c1 != c3 && c2 != c3 )
				{
					write( 1, &c1&c2&c3",", 4 );
				}
			}
		}
	}

}

int 	main(void)
{
	ft_print_comb();

	return (0);
}
