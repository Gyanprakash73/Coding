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
	rev=rev*10+rem;
	num=num/10;
  }
  if(temp==rev)
	printf("\n Palindrome no");
  else
	printf("\n Not palindrome");
  getch();
}
