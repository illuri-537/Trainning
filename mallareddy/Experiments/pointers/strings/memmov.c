#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
void *memmov(void *, const void *, size_t);
int main(void)
{
	char *s;
	char *d;
	s = (char *)malloc(30*sizeof(char));
	fgets(s, MAX, stdin);
	d = (char *)malloc(MAX*sizeof(char));

	printf("%s\n", memmov(d,s,6));
//	printf("kkkkkk==%s",d);

	return 0;
}

void *memmov(void *d, const void *s, size_t n)
{
	int i = 0;
//	char *s1 = (char *)s;
	char *temp = NULL;
	temp = (void *)malloc(30*sizeof(char));
	temp = (void *)s;
	printf("%s\n", temp);
//	s1 = (char *)malloc(MAX*sizeof(char));
	char *p = NULL;
	p = (void *)malloc(20*sizeof(void));


	while ( i < n) {
		*(p+i) = *(temp+i);
		
		i++;
	}
	
	return d;
}
