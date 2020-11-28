 void main()
 {
 long int num,rem,c=0;
  rem=0;
  clrscr();
  printf("\n Enter no=");
  scanf("%ld",&num);
  /*count digit code*/
  for(num;num!=0;num=num/10)
  {
	rem=num%10;
	c=c+1;
  }
  printf("\n Digit=%ld",c);
  getch();
 }