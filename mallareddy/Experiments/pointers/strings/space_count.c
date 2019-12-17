#include<stdio.h>

#include<string.h>
int main(void)
{

	char s[100];
	int count = 0;

	int i;

	printf("enter string:\n");

scanf("%[^\n]s",s);
//gets(s);
	printf("%s",s);

	for(i = 0;i<strlen(s);i++){
	printf("%c\n",s[i]);
		if(s[i]== ' ') {
				count++;

		}

	}
	printf("%d\n",count);
	return 0;
}
