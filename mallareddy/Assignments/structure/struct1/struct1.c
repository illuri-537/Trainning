//Find the size of the structure ,structure size should be as given frame fo\rmat

#include<stdio.h>

#pragma pack(1)

struct format
{
		unsigned int gfc:4;
		unsigned int vpi:4;
		unsigned int vpi1:4;
		unsigned int vci:4;
		unsigned int vci2:8;
		unsigned int vci3:4;
		unsigned int pti:3;
		unsigned int clp:1;
		unsigned int hec:8;


};
int main()
{
		printf("%d",sizeof(struct format));
		return 0;

}

