#include <stdio.h>
int main()
{
	int x=20;	//int variable
	int *ptr;	//int pointer declaration
	
	ptr=&x;		//initializing pointer
	
	printf("Memory address of x: %p\n",ptr);
	printf("Value x: %d\n",*ptr);
	
	return 0;
}
