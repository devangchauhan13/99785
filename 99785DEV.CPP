#include<stdio.h>
#include<conio.h>

main()
{
	int num,count=1;
	clrscr();
	printf("enter anumber\n");
	scanf("%d",&num);
	printf("\nmultiplication table for %d is:\n\n",num);
	while(count<=10)
	{
		printf("%d*%d=%d\n", num,count,(num*count));
		count++;
	}.
}
getch();