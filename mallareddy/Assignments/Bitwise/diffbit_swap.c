int diffbit_swap(int number,int number1,int s,int d)
{
	number=((number>>s)&1);
	number1=((number1>>d)&1);
	if(number==number1)
		{
			return number;
			return number1;
		}
	else
		{
			return number^(1<<s);
			return number1^(1<<d);
		}
}

