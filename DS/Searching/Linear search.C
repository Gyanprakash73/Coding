#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,sdata,status=0;
	clrscr();
	/*input data*/
	for(i=0;i<5;i++)
	{
		printf("\n Input array data=");
		scanf("%d",&arr[i]);
	}
	/*Display code*/
	for(i=0;i<5;i++)
		printf("%3d",arr[i]);
	/*Input search data*/
	printf("\n enter search data=");
	scanf("%d",&sdata);
	/*searching code*/
	for(i=0;i<5;i++)
	{
		if(arr[i]==sdata)
			status=1;
	}
	if(status==1)
		printf("\n Data found");
	else
		printf("\n Data not found");
	getch();
}