/* definition of binary search data*/
int binarysearch(int arr[],int size,int data)
{
	int low=0;
	int up=size-1;
	int mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(data>arr[mid])
			low=mid+1;
		else if(data<arr[mid])
			up=mid-1;
		else
			return -1;
	}
	return 0;
}
/* main*/
#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int i,n[size],sdata,status=0;
	clrscr();
	/* input data*/
	for(i=0;i<size;i++)
	{
		printf("\n Input data=");
		scanf("%d",&n[i]);
	}
	printf("enter search data=");
	scanf("%d",&sdata);
	/* UDF*/
	status=binarysearch(n,size,sdata);
	if(status)
		printf("Data found");
	else
		printf("Data not found");
	getch();
}