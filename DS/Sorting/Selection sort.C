void main()
{
	int arr[9],i,j,min,temp;
	clrscr();
	/*input code */
	for(i=0;i<9;i++)
	{
		printf("\n enter data=");
		scanf("%d",&arr[i]);
	}
	/*Selection sort code */
	for(i=0;i<(9-1);i++)
	{
		min=i;
		for(j=i+1;j<9;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		}
		if(i!=min)
		{	temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	/*display code */
	for(i=0;i<9;i++)
		printf("%3d",arr[i]);
	getch();
}