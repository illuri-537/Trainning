int bit_swap(int number,int s,int d)
{
	return (((number>>s)&1) == ((number>>d)&1)?number:((number^(1<<s)^(1<<d))));
}
