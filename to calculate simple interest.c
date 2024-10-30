#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,r;
	float si;
	printf("\t enter value for p,n,&r:");
	scanf("%d%d%d",&p,&n,&r);
	si=(p*n*r)/100;
	printf("\t simple interest=rs.%f\n",si);
	getch();
}
