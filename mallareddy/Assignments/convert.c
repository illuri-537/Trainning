int convert(dec,base)
{
int rem;
rem=dec%base;
if(dec==0) 
return;
convert(dec/base,base);
if(rem<10)
printf("%d", rem);
else
printf("%c", rem-10+'A');
}

