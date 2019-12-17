#include<stdio.h>
#if 0
//#pragma pack(1)
int main()
{
 struct  a
 {
 	int m;
//	#pragma pack(1)
	 struct b{
	 	short c;
		int n;
	}l;
}k;
#pragma pack(1)
printf("%d\n",sizeof k);
}
#endif
#if 1

int main()
{

char ch = 255;
printf("%d\n %d\n %d",1234,ch,ch-ch);
return 0;
}
#endif
