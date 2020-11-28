void main()
{
 int a,b,c;
 clrscr();
 printf("\n value of a=");
 scanf("%d",&a);
 printf("\n value of b=");
 scanf("%d",&b);
  printf("\n value of c=");
 scanf("%d",&c);
 if(a>b&&a>c)
	printf("\n Greatest no=%d",a);
 else if(b>c)
	printf("\n Greatest no=%d",b);
 else
	printf("\n Greatest no=%d",c);
  getch();
}
