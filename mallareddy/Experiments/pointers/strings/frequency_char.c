#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{

	char s[100];

	int i = 0;

	int  x;

	int k;
	int count[26] = {0};

	printf("Enter string\n:");
//	gets(s);
	scanf("%s",s);

	while(s[i] !='\0')

	{
//		printf("hjds");
		if(s[i] >= 'a' && s[i] <= 'z') {

			x = s[i] -'a';

			count[x]++;
		}
		

			if(s[i] >= 'A' && s[i] <= 'Z') {
				printf("nds\n");
			x = s[i] - 'A';

			count[x]++;
		}
		i++;
	}
for(k =0; k<26;k++) {

		if(count[k]!=0){

	printf("%c\n %d\n",k+'a',count[k]);
	}

}
return 0;
}
