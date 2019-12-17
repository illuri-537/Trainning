#include <stdio.h>

#if 0
/*
int main()
{
	printf("%d\n %d\n %d\n",x.i,x.j,x.k);
	return 0;
}*/
struct bitfield
{
	// int i:3;
	// int j:2;
   //  int k:7;
   int c:32;
   char  a;
//	char m:3;
//	char t:8;
}x;
//__attribute__aligned(x);


int main()
{
//	printf("%d\n",x.i);
	printf("%d", sizeof(x));
/*struct small
{
int i:17;
}x={5};*/
	return 0;
}

	

#endif

#if 0
#pragma pack(2)

struct size
{
	/*	int a;
	short b;
	short k;
	int d;
	char c;
	short m;*/
	char d;
	char *n;
//	double e;

}s;

int main(void)
{
	printf("%d\n",sizeof(s));
	return 0;
}
#endif

#if 0
struct my_unpacked_struct
{
		char c;
		int i;
};

struct __attribute__((aligned(1)),) my_packed_struct
{
		char c;
		int  i;
		struct my_unpacked_struct s;
};



int main(void)
{

	struct my_packed_struct k;
	printf("%d\n", sizeof(k));
	return 0;
}
#endif

#if 1
#pragma pack(1)
struct bitfields
{
	int a : 9;
//	char b :4;
//	double d : 65;
//	short c :2;
//	int d : 5;
//	int e : 13;
}s;

int main(void)
{
	printf("%d\n", sizeof(s));
	return 0;
}
#endif
