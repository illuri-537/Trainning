int rightrot(int x,int nbits)
{
	int rbit;//rbit=right most bit
	rbit=x>>nbits;
	x=x | rbit;
	return x;
}
