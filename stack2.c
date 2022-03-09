#include<stdio.h>
#include<stdlib.h>

struct node{
     struct node *next;
     int value;

};
struct node *ptr;
struct node *ptr2;
struct node *head;
struct node *top=-1;

int ch,wish,ele;
void main()
{

    do{
        printf("1.push\n2.pop\n3.display\n4.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);

      switch(ch){
       case 1:
               push();
              break;
       case 2:


               break;
       case 3:
              display();
              break;
       case 4:
              exit(0);
        }
    printf("\ndo you want to continue(0/1)");
    scanf("%d",&wish);

    }while(wish==1);
}

void push(){
   int ele;
   head=(struct node *)malloc(sizeof(struct node));
  if(head == NULL){
    printf("can't allow to insert data");

  }
  else{
    printf("enter the element");
    scanf("%d",&ele);
    if(top!=-1){
        //top->next=head;
        top=ptr2->next;

        top=head;

        top->value=ele;
        top->next=NULL;
    }
    else{
        top=head;

        top->value=ele;
        //top->next=NULL;

        //Top->next=NULL;

    ptr=top;

    }

    ptr2=top;


  }
}

void display()
{
  struct node *first;
            first=ptr;
       printf("\n elemnets in stack are");
       while(first!=NULL){

            printf("\n%d",first->value);
            first=first->next;
        }

}


