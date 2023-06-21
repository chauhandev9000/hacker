#include<stdio.h>

int main()

{
	int a,b;
	char op;

	printf("enter the value of a:\n");
	scanf("%d",&a);

	printf("enter the operator:(+, -, * , /, %)\n");
	scanf(" %c",&op);

	printf("enter the value of b:\n");
	scanf("%d",&b);

	switch(op)
	{
		case'+':
		printf("the addition of two numbers is%d\n",a+b);
		break ;

		case'-':
		printf("the subtraction of two numbers is%d\n",a-b);
		break ;

		case'*':
		printf("the multiply of two numbers is%d\n",a*b);
		break ;

		case'/':
		printf("the divide of two numbers is%d\n",a/b);
		break ;

		case'%':
		printf("the module of two numbers is%d\n",a%b);
		break ;

		default:
		printf("the option is wrong!\n");
	}
	return 0;
}
