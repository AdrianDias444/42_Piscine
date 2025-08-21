#include <unistd.h>

void	alpha()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}

int	main(void)
{
	alpha();
}