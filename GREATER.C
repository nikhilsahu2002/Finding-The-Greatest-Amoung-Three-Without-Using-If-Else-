#include<stdio.h>
#include<conio.h>
int i=0,a=0,b=0,c=0,j=0;
void num()
{
	i=(a>b?a:b);
	j=(i>c?i:c);

	printf("The Greatest Among Thum is %d",j);
}

void main()
{
clrscr();
printf("Ente The First Number:");
scanf("%d",&a);
printf("Ente The Second Number:");
scanf("%d",&b);
printf("Ente The Third Number:");
scanf("%d",&c);
num();
getch();
}
