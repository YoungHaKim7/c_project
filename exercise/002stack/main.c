// Stack Example

#include <stdio.h>
#include <stdlib.h>

int Stack[10];
int top=-1;

int push(int dat);
int pop(void);
int printstack(void);

int main(void) {
	int inval, innum;
	printf(" - Algorithm Stack - \n");
	printf("Made by POM(lovebeen04@gmail.com)\n");
	printf("=================================\n");
	printf("1. Push Value\n");
	printf("2. Pop Value\n");
	printf("3. Print Stack\n");
	printf("4. Exit\n");
	printf("=================================\n");
	printf("> Enter Number: ");
	scanf("%d", &inval);

	switch(inval) {
		case 1:
			system("clear");
			printf("> Enter Number: ");
			scanf("%d", &innum);
			push(innum);
			break;
		case 2:
			pop();
			break;
		case 3:
			printstack();
			break;
		case 4:
			printf("Bye ~ Bye~ \n");
			return 0;
		default:
			system("clear");
			printf(" Error\n");
			break;
	}

	return 0;
}

int push(int dat) {
	if(top >= 9) {
		system("clear");
		printf("Stack Overflow\n");
		getchar();
		system("clear");
		main();
	} else {
		top++;
		Stack[top] = dat;
		system("clear");
		printf("Push %d\n", dat);
		getchar();
		system("clear");
		main();
	}
}

int pop(void) {
	system("clear");
	if(top <= -1) {
		system("clear");
		printf("Stack Downflow\n");
		getchar();
		system("clear");
		main();
	} else {
		Stack[top] = 0;
		top--;
		main();
	}
}

int printstack(void) {
	int a;
	system("clear");
	printf("=================================\n");
	for(a=9; a>=0; a--) printf("%d\n", Stack[a]);
	printf("=================================\n");
	getchar();
	main();
}
