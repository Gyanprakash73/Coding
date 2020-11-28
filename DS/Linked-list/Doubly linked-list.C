 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 #define DMA (struct dnode *)malloc(sizeof(struct dnode));
 struct dnode
 {
   struct dnode *prev;
   int data;
   struct dnode *next;
 };
 struct dnode *creatnode()
 {
	return NULL;
 }

 /*Definition of insert_at_last*/
 struct dnode *insert_at_last(struct dnode *root, int data)
 {
	struct dnode *newnode, *temp, *prevnode;
	newnode=DMA;
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=data;
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
		newnode->prev=prevnode;
	}
	return root;
 }

 /*Definition of display*/
 void display (struct dnode *root)
 {
	struct dnode *temp;
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

 /*Definition of insret_at_first*/
 struct dnode *insert_at_first(struct dnode *root, int data)
 {
	struct dnode *newnode, *temp, *prevnode;
	newnode=DMA;
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=data;
	temp=root;
	if(root==NULL)
		root=newnode;
	else
	{
		root=newnode;
		newnode->next=temp;
		temp->prev=newnode;
	}
	return root;
 }

 /*Definition of insert_at_position*/
 struct dnode *insert_at_position(struct dnode *root, int data, int pos)
 {
	struct dnode *temp, *newnode, *prevnode;
	int c=0;
	newnode=DMA;
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=data;
	temp=root;
	if(root==NULL)
	{
		printf("Inserting not possible");
		sleep(3);
	}
	else
	{
		while(temp)
		{
			c++;
			if(c==pos)
			{
				newnode->prev=prevnode;
				prevnode->next=newnode;
				temp->prev=newnode;
				newnode->next=temp;
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

 /*Definition of count*/
 void count (struct dnode *root)
 {
	struct dnode *temp;
	int c=0;
	temp=root;
	if(root==NULL)
	{
		printf("\n List is empty \n");
		printf("\n Total node=%d",c);
		sleep(3);
	}
	else
	{
		while(temp)
		{
			c++;
			temp=temp->next;
		}
		printf("\n Total node=%d",c);
		getch();
	}
 }

 /*Definition of delete_at_last*/
 struct dnode *delete_at_last(struct dnode *root)
 {
	struct dnode *temp, *prevnode;

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
		temp->prev=NULL;
		prevnode->next=NULL;
		free(temp);
	}
	return root;
 }

 /*Definition of delete_at_first*/
 struct dnode *delete_at_first(struct dnode *root)
 {
	struct dnode *temp;
	temp=root;
	if(root==NULL)
	{
		printf("\n deletion not possible");
		sleep(2);
	}
	else
	{
		root=temp->next;
		(temp->next)->prev=NULL;
		temp->next=NULL;
		free(temp);
	}
	return root;
 }

 /*Definition of delete_at_position*/
 struct dnode *delete_at_position(struct dnode *root, int pos)
 {
	struct dnode *temp, *prevnode, *prenode;
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
				root->prev=NULL;
				break;
			}
			else
			{
				if(c==pos)
				{
					prenode->next=temp;
					temp->prev=prenode;
					prevnode->next=NULL;
					prevnode->prev=NULL;
					break;
				}
				else
				{
					c++;
					prenode=prevnode;
					prevnode=temp;
					temp=temp->next;
				}
			}
		}
		free(prevnode);
	}
	return root;
 }

 /*Definition of search*/
 void search(struct dnode *root, int sdata)
 {
	struct dnode *temp;
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
   struct dnode *root;
     root=creatnode();
     clrscr();
     while(1)
     {
       clrscr();
       printf("\n Doubly linked List Menu");
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