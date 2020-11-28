/*Definition of merge sort*/
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
	int i,j,k;
	i=0;j=0;k=0;
	while((i<=n1-1)&&(j<=n2-1))
	{
		if(arr1[i]<arr2[j])
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}
	while(i<=n1-1)
		arr3[k++]=arr1[i++];
	while(j<=n2-1)
		arr3[k++]=arr2[j++];
}
/* main*/
#include<stdio.h>
#include<conio.h>
#define max 50
void main()
{
	int arr1[max],arr2[max],arr3[2*max],n1,n2,i;
	clrscr();
	/*input arry size*/
	printf("\n enter first array size=");
	scanf("%d",&n1);
	printf("\n enter second array size=");
	scanf("%d",&n2);

	/* input first array */
	printf("\n    Input first array");
	for(i=0;i<n1;i++)
	{
		printf("\n Input data of %d index=",i);
		scanf("%d",&arr1[i]);
	}

	/* input second array */
	printf("\n    Input second array");
	for(i=0;i<n2;i++)
	{
		printf("\n Input data of %d index=",i);
		scanf("%d",&arr2[i]);
	}
	/* UDF function*/
	merge(arr1,arr2,arr3,n1,n2);
	/*display code*/
	for(i=0;i<n1+n2;i++)
		printf("%3d",arr3[i]);
	getch();
}