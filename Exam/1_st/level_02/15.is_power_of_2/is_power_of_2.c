int	is_power_of_2(unsigned int n)
{
	int comp = 1;
	while (comp < n)
		comp = comp * 2;
	if(comp == n)
		return(1);
	return(0);
}