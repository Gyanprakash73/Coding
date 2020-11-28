void main()
{
  long int num,rev,temp,rem;
  rem=rev=temp=0.0;
  clrscr();
  printf("\n Input no=");
  scanf("%ld",&num);
  temp=num;
  while(num>0)
  {
	rem=num%10;
	rev=rev+(rem*rem*rem);
	num=num/10;
  }
  printf("\n %ld",rev);
  if(temp==rev)
	printf("\n Armstrong no");
  else
	printf("\n Not armstrong no");
  getch();
}
