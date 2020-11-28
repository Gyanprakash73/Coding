 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  float num1,num2,result;
  char op;
  clrscr();

  printf("\n Enter num and operator=");
  scanf("%f%c%f",&num1,&op,&num2);

  switch(op)
  {
   case'+':
   result=num1+num2;
   printf("%f",result);break;

   case'-':
   result=num1-num2;
   printf("%f",result);break;

   case'*':
   result=num1*num2;
   printf("%f",result);break;

   case'/':
   result=num1/num2;
   printf("%f",result);break;

   case'%':
   result=num1*num2/100;
   printf("%f",result);break;

   default :
   printf("\n Operator is not valid");
  }
  getch();
 }