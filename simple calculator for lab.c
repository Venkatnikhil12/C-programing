#include<stdio.h>
//#include<conio.h>
void main()
{
	int op1,op2;
	char cop;
	//clr scr();
	printf("enter the value arithm expresion \n");
	scanf("%d%c%d",&op1,&cop,&op2);
	switch(cop)
	{
		case'+':printf("result=%d",op1+op2);
		break;
		case'-':printf("result=%d",op1-op2);
		break;
		case'*':printf("result=%d",op1*op2);
		break;
		case'/':printf("result=%d",op1/op2);
		break;
		case'%':printf("result=%d",op1%op2);
		break;
		default:printf("invalid expression \n");
	}
	//getch();
}
