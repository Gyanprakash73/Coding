 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 #define DMA (struct node *)malloc(sizeof(struct node));
 struct node
 {
   int data;
   struct node *next;
 };
 struct node *creatnode()
 {
	return NULL;
 }

 /*Definition for insert_at_last*/
 struct node * insert_at_last(struct node *root, int data)
 {
   struct node *newnode, *temp, *prevnode;
   newnode=DMA;
   newnode->data=data;
   newnode->next=NULL;
   temp=root;
   if(root==NULL)
	root=newnode;
   else
   {
	while(temp)
	{
		prevnode=temp;
		temp=temp->next;
	}
	prevnode->next=newnode;
   }
   return root;
 }

 /*Definition for display*/
 void display (struct node *root)
 {
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("\n List is empty");
		sleep(2);
	}
	else
	{
		while(temp)
		{
			printf("%3d",temp->data);
			temp=temp->next;
		}
		getch();
	}
 }

 /*Definition for count*/
 void count (struct node *root)
 {
	struct node *temp;
	int c=0;
	temp=root;
	if(root==NULL)
	{
		printf("\n List is empty \n");
		printf("\n Total Node = %d",c);
		sleep(3);
	}
	else
	{
	  while(temp)
	  {
		c++;
		temp=temp->next;
	  }
	  printf("\n Total Node = %d",c);
	  getch();
	}
 }

 /*Definition for insert_at_first*/
 struct node *insert_at_first(struct node *root,int data)
 {
	struct node *newnode,*temp;
	newnode=DMA;
	newnode->data=data;
	newnode->next=NULL;
	temp=root;
	if(root==NULL)
		root=newnode;
	else
	{
		newnode->next=temp;
	}
	root=newnode;
	return root;
 }

 /*Definition for insert_at_position*/
 struct node *insert_at_position(struct node *root, int data, int pos)
 {
	struct node *newnode, *temp, *prevnode;

	int c=0;
	temp=root;
	newnode=DMA;
	newnode->data=data;
	newnode->next=NULL;
	if(root==NULL)
	{
		printf("\n Inserting not possible");
		sleep(3);
	}
	else
	{
		while(temp)
		{
			c++;
			if(c==pos)
			{
				newnode->next=temp;
				prevnode->next=newnode;
			}
			else
			{
				prevnode=temp;
				temp=temp->next;
			}
		}
	}
	return root;
 }

 /*Definition for delete_at_last*/
 struct node *delete_at_last(struct node *root)
 {
	struct node *temp,*prevnode;
	temp=root;
	if(root==NULL)
	{
		printf("\n deletion not possible");
		sleep(2);
	}
	else
	{
		while(temp->next!=NULL)
		{
			prevnode=temp;
			temp=temp->next;
		}
		prevnode->next=NULL;
		free(temp);
	}
	return root;
 }

 /*Definition for delete_at_first*/
 struct node *delete_at_first(struct node *root)
 {
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("\n deletion not possible");
		sleep(2);
	}
	else
	{
		root=temp->next;
		temp->next=NULL;
		free(temp);
	}
	return root;
 }

 /*Definition for delete_at_position*/
 struct node *delete_at_position(struct node *root, int pos)
 {
	struct node *temp, *prevnode, *prenode;
	int c=0;
	temp=root;
	if(root==NULL)
	{
		printf("\n deletion not possible");
		sleep(2);
	}
	else
	{
		while(temp)
		{
		  if(pos==1)
		  {
		    root=temp->next;
		    temp->next=NULL;
		    break;
		  }
		  else
		  {
			if(c==pos)
			{
				prenode->next=temp;
				prevnode->next=NULL;
				break;
			}
			else
			{
				prenode=prevnode;
				prevnode=temp;
				temp=temp->next;
				c++;
			}
		  }
		}
		free(prevnode);
	}
	return root;
 }

 /*Definition for search*/
 void search(struct node *root, int sdata)
 {
	struct node *temp;
	int c=0;
	temp=root;
	if(root==NULL)
	{
		printf("\n searching not possible");
		sleep(2);
	}
	else
	{
		while(temp)
		{
			if(sdata==temp->data)
			{
				c=1;
				break;
			}
			else
				temp=temp->next;
		}
		if(c==1)
			printf("\n Data found");
		else
			printf("\n Data not found");
		getch();
	}
 }

 /* main*/
 void main()
 {
   int ch,data,pos,sdata;
   struct node *root;
   root=creatnode();
   clrscr();
   while(1)
   {
	clrscr();
	printf("\n Linked List Menu");
	printf("\n 1.Insert_at_last");
	printf("\n 2.Insert_at_first");
	printf("\n 3.Insert_at_middle");
	printf("\n 4.Display");
	printf("\n 5.Count");
	printf("\n 6.Delete_at_last");
	printf("\n 7.Delete_at_first");
	printf("\n 8.Delete_at_middle");
	printf("\n 9.Search");
	printf("\n 0.Exit");
	printf("\n Enter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1:
		printf("\n Enter data=");
		scanf("%d",&data);
		root=insert_at_last(root,data);
		break;
	 case 2:
		printf("\n Enter data=");
		scanf("%d",&data);
		root=insert_at_first(root,data);
		break;
	 case 3:
		printf("\n Enter position=");
		scanf("%d",&pos);
		printf("\n Enter data=");
		scanf("%d",&data);
		root=insert_at_position(root,data,pos);
		break;
	 case 4:
		display(root);
		break;
	 case 5:
		count(root);
		break;
	 case 6:
		root=delete_at_last(root);
		break;
	 case 7:
		root=delete_at_first(root);
		break;
	 case 8:
		printf("\n Enter position=");
		scanf("%d",&pos);
		root=delete_at_position(root,pos);
		break;
	 case 9:
		printf("\n Enter search data=");
		scanf("%d",&sdata);
		search(root,sdata);
		break;
	 case 0:
		exit(0);
	 default :
		printf("\n Invalid choice");
	 getch();
       }
     }
     getch();
 }