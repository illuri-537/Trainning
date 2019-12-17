int invert(int number,int position,int nbits)
{
int mask;
mask=~(~0<<nbits)<<(position-nbits+1);//masking the position bits
mask=number^mask;//XOR the number and masking bits
return mask;
}

