void main()
{
	int n[5],i,j,temp;
	clrscr();
	/*input code*/
	for(i=0;i<5;i++)
	{
		printf("\n enter data=");
		scanf("%d",&n[i]);
	}
	/* Bubble sort code*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<(5-1);j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	/*display code*/
	for(i=0;i<5;i++)
		printf("%3d",n[i]);
	getch();
}