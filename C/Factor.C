 void main()
 {
  int s,num;
  clrscr();
  s=1;
  printf("\n Input no=");
  scanf("%d",&num);
  while(s<=num)
  {
	if(num%s==0)
		printf(" %d",s);
	s++;
  }
  getch();
 }