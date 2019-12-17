#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
void *memcopy(void *, const void *, size_t);
int main(void)
{
	char *s;
	char *d;
	s = (char *)malloc(MAX*sizeof(char));
	fgets(s, MAX, stdin);
	d = (char *)malloc(MAX*sizeof(char));

	printf("dsfasdfas%s\n",(char *) memcopy(d,s,MAX));
	printf("kkkkkk==%s",d);

	return 0;
}

void *memcopy(void *d, const void *s, size_t n)
{
	printf("%d\n", n);
	int i = 0;
	char *s1 = s;
	printf("%s\n", s1);
	char *p = d;

	p = (char *)malloc(MAX*sizeof(char));


	while (n--) 
		*p++ = *s++;	
	return p;
}
