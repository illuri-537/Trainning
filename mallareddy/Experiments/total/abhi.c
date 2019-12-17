#define Q7
#ifdef Q1
//Q1: C program to undersand c89 comment
/* hello */ 
/* hello */  

int main()
{
	
		return 0;
		}
#endif
#ifdef Q2
//Q2: C Program to understand the Character constant representation by escape sequence
#include<stdio.h>

int main()
{
	printf("%c\t%d\t%X\f",'\x41','\x41','\x41');

		return 0;
		}
#endif
#ifdef Q3
//Q3: C Program to check the identifier rules
#include<stdio.h>
int main()
{

//	int h*ello;
		int $hello = 15;
//			int x y;
			//	int $x = 2 , 3 , 4;
		//			int x/*hello*/y;
						return 0;
						}

#endif
#ifdef Q5
//Q5: C Program to understand Keywords
#include<stdio.h>

int main()
{
i	int do = 0; 
		return 0;
		}

		#endif
		#ifdef Q6
		//Q6: C Program to understand multicharacter constant
		#include<stdio.h>

		int main()
		{
			char  c = '\x41\x42\x43\x44';
				printf("c = %x\n",c);
					return 0;
					}

					#endif

#ifdef Q7
//Q7: C Program to understand wide character string literal
#include<stdio.h>
#include<stddef.h>
int main()
{
	wchar_t ch[] = L"Hello";
		printf("size of \"hello\" = %u\n",sizeof("hello"));
			printf("size of L\"hello\" = %u\n",sizeof(L"hello"));
				printf("size of ch = %u\n",sizeof(ch));

					return 0;
					}

					#endif
