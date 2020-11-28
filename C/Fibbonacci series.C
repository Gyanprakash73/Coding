  void main()
  {
   int f,s,sum=0;
   clrscr();
   f=0;
   s=1;
   printf("%d  %d",f,s);
   /*code of fibbonacci series*/
   for(;sum<13;)
   {
	sum=f+s;
	printf("%3d",sum);
	f=s;
	s=sum;
   }
   getch();
  }
