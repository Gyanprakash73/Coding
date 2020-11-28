 void main()
 {
 long int num,rev,rem;
 rev=rem=0;
 clrscr();
 printf("\n Enter no=");
 scanf("%ld",&num);
 /*data reverse code*/
 for(num;num!=0;num=num/10)
 {
	rem=num%10;
	rev=rev*10+rem;
 }
 printf("\n Reverse no=%d",rev);
 getch();
 }