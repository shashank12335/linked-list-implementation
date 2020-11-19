#include<stdio.h>
#include<stdlib.h>
void insertbegin();
void display();
void length();
void append();
void insertspecified();
void deletebegin();
void deletespecified();
void deleteend();
int main()
{
    int x;

printf("1.insert at begin\n");
printf("2.display \n");
printf("3.length\n");
printf("4.append \n");
printf("5.insert at specified\n");
printf("6.delete at begin\n");
printf("7.delete at specified\n");
printf("8.delete at end\n");
printf("9.quit\n");

while(1)
{    printf("enter choice\n");
    scanf("%d",&x);
  


 switch(x)
 {
    case 1:
    insertbegin();
    break;
    case 2:
    display();
    break;
    case 3:
    length();
    break;
    case 4:
    append();
    break;
    case 5:
    insertspecified();
    break;
    case 6:
    deletebegin();
    break;
    case 7:
    deletespecified();
    break;
    case 8:
    deleteend();
    break;
    case 9:
    exit(1);
    
    default:
    printf("invalid choice");
    
  }
 }
   return 0;
}
  struct node
    {
        int data;
        struct node *link;
    };
    struct node *root=NULL;
    struct node *temp=NULL;
    
struct node *p=(struct node*)malloc(sizeof(struct node));
int loc,i;
 
void append()
{printf("enter data\n");
  scanf("%d",&p->data);
  temp=root;
 if(root==NULL)
 {
     root=p;
 }
 else
 {
     while(temp->link!=NULL)
     {
         temp=temp->link;
         
     }
 }
 temp->link=p;
 p->link=NULL;
    
}

void insertbegin()
{
    printf("enter data\n");
  scanf("%d",&p->data);
  temp=root;
 if(root==NULL)
 {
     root=p;
 }
 else{
     p->link=root;
     root=p;
     
  }
    
}

void insertspecified()
 { int loc,i;
    printf("enter data\n");
  scanf("%d",&p->data);
  printf("enter location\n");
  scanf("%d",&loc);
  temp=root;
 if(root==NULL)
 {
     root=p;
 }
 else{
     i=1;
     while(i<loc)
     {
         temp=temp->link;
         i++;
     }
     p->link=temp->link;
     temp->link=p;
 }
}


void length()
{
    int count=0;
    if(root==NULL)
    {
        printf("length is 0");
        
    }
    else{
        while(temp->link!=NULL)
        {
            count++;
            temp=temp->link;
            
        }
        printf("%d",count);
    }
}

void display()
{
     if(root==NULL)
    {
        printf("No elements to show");
        
    }
    else{
        while(temp->link!=NULL)
        {
        printf("%d",temp->data);
         temp=temp->link;
            
        }
        
    }
}

void deletebegin()
{
    if(root==NULL)
    {
        printf("no elements to delete");
    }
    else
    {
     root=root->link;   
    }
}
void deletespecified()
{
     if(root==NULL)
    {
        printf("no elements to delete");
    }
    else
    {
        printf("enter locaion to delete\n");
        scanf("%d",&loc);
        
        while(i<loc)
        {
            temp=temp->link;
            i++;
        }
        temp->link=temp->link->link;
    }
}
void deleteend()
{
      if(root==NULL)
    {
        printf("no elements to delete");
    }
    else
    {
        while(temp->link!=NULL)
        {
         temp=temp->link;
        
            
        }
        
}

}   
  