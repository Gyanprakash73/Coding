 void main()
 {
  int a,b,x,p,q;
  clrscr();
  p=1;
  printf("\nA=");
  scanf("%d",&a);
  printf("B=");
  scanf("%d",&b);
  x=(a<b)?a:b;
  while(x>=1)
  {
    if((a%x==0)&&(b%x==0))
    break;
    x--;
  }
    p=a/x;
    q=b/x;
    printf("Ratio=%d:%d",p,q);
  getch();
 }