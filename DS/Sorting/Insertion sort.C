void main()
{
	int arr[10],i,j,k;
	clrscr();
	/*input code*/
	for(i=0;i<10;i++)
	{
		printf("\n enter data=");
		scanf("%d",&arr[i]);
	}
	/* Insertion sort code*/
	for(i=1;i<10;i++)
	{
		k=arr[i];
		for(j=i-1;j>0&&k<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=k;
	}
	/*display code*/
	for(i=0;i<10;i++)
		printf("%3d",arr[i]);
	getch();
}