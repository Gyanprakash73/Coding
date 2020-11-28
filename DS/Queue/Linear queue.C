 #include<stdio.h>
 #include<conio.h>
 #define max 5
 int f=-1;
 int r=-1;
 int queue[max];

 /*Definition of Enqueue*/
 int enqueue(int queue[], int data, int r)
 {
	if(r==-1)
	{
		f=r=0;
		queue[r]=data;
	}
	else if(r==(max-1))
	{
		printf("\n Queue is full");
		sleep(2);
	}
	else
	{
		++r;
		queue[r]=data;
	}
	return r;
 }

 /* Definition of display*/
 void display()
 {
	int i;
	if((f==-1&&r==-1)||f>r)
	{
		printf("\n Queue is empty");
		sleep(2);
	}
	else
	{
		for(i=f;i<=r;i++)
			printf("%3d",queue[i]);
		getch();
	}
 }

 /*Definition of dequeue*/
 int dequeue(int queue[], int f)
 {
	int d;
	if(f==-1||f>r)
	{
		printf("\n Queue is empty");
		sleep(2);
	}
	else
	{
		d=queue[f];
		printf("\n Dequeue=%d",d);
		getch();
		++f;
	}
	return f;
 }

 /* Main*/
 void main()
 {
	int ch, data;
	clrscr();
	while(1)
	{
		clrscr();
		printf("\n 1.Enqueue");
		printf("\n 2.Dequeue");
		printf("\n 3.Display");
		printf("\n 0.Exit");
		printf("\n Enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter data=");
				scanf("%d",&data);
				r=enqueue(queue,data,r);
				break;
			case 2:
				f=dequeue(queue,f);
				break;
			case 3:
				display(queue);
				break;
			case 0:
				exit(0);
			default :
				printf("\n Invalid option");
			getch();
		}
	}
 }
