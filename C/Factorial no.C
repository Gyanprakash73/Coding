 void main()
 {
  int num,sum=1;
  clrscr();
  printf("\n Input no=");
  scanf("%d",&num);
  for(;num>=1;num--)
  {
	sum=sum*num;
  }
  printf("\n Factorial value=%d",sum);
  getch();
 }