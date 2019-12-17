int setbits(int x,int position,int y,int nbits)
{
	int mask;
	int temp1;
	mask=~(~0<<nbits)<<(position-nbits+1);
	mask=~mask;
	x=x&mask;
	temp1=x|y;
	return temp1;
}

