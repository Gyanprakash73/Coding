void main()
{
 int i,j,n,c=0;
 clrscr();
 printf("\n Input no=");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			c=1;
	}
	if(c==0)
		printf("  %d",i);
	c=0;
 }
  getch();
}
