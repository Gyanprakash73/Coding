 void main()
 {
 long int num,rem,s=0;
  rem=0;
  clrscr();
  printf("\n Enter no=");
  scanf("%ld",&num);
  /*count digit code*/
  for(num;num!=0;num=num/10)
  {
	rem=num%10;
	s=s+rem;
  }
  printf("\n Sum=%ld",s);
  getch();
 }