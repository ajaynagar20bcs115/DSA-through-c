#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sci(n) scanf("%d",&n)
#define scc(n) scanf("%c",&n);
#define true printf("True")
#define jumpline printf("\n")
#define pri(n) printf("%d",n)
#define prs(s) printf("%s",s);
#define prdata_accsess printf("->")
#define spc printf(" ")
#define malloc(x) (x*)malloc(sizeof(x))
#define false printf("False")
typedef struct node
{int data;
struct node* next;}node;
int isEmpty(node*head)
{
    if(head==NULL)
        return 1;
        else
            return 0;
}
void print_list(node* head)
{ node* ptr=head;
  if(isEmpty(ptr))
  {
      printf("list is empty");
  }
   else
   { while(ptr->next!=NULL)
    {
        pri(ptr->data);prdata_accsess;
        ptr=ptr->next;
    }
    pri(ptr->data);
    }
}

void insert_at_first(node**head)
{  int x;sci(x);
    node*ptr=malloc(node);
    ptr->data=x;
    ptr->next=*head;
* head=ptr;
}
void insert_at_last(node*head)
{ int x;sci(x);
    node*temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
    node* ptr=malloc(node);
    ptr->data=x;
    ptr->next=NULL;
    temp->next=ptr;
}
void del_from_last(node*head)
{
    node*ptr,*pre;
    ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
}
void del_from_start(node**head)
{ if(isEmpty(*head))
{
    printf("list is empty");
}
   else{ node* temp=(*head)->next,*deletable=*head;
    *head=temp;
    free(deletable);}

}
void insert_at_position(node*head)
{  int p,x;
sci(p);sci(x);
    node*inserted=malloc(node),*linker=malloc(node),*ptr=malloc(node);
    inserted->data=x;

    p--;p--;
    ptr=head;
    while(p--)
    { ptr=ptr->next;

    }
    linker=ptr->next;
    ptr->next=inserted;
    inserted->next=linker;

}
void delete_from_position(node*head)
{
    int p;sci(p);
    node*ptr=malloc(node),*temp=malloc(node);
    p=p-2;
    ptr=head;

    while(p--)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=temp->next;
    free(temp);

}

int main(){
    node*head=NULL;



char choice;
while(1){
scanf("%c",&choice);
switch(choice)
{

    case'a':
    { print_list(head);


    } break;
    case 'b':
    {
        insert_at_first(&head);

    } break;
    case 'c' :
    {

       insert_at_last(head);
    } break;
    case 'd' :
    {
        insert_at_position(head);

    } break;
    case 'e' :
    {
       del_from_start(&head);

    } break;
    case 'f' :
    {
        del_from_last(head);

    } break;
    case 'g' :
        {
            delete_from_position(head);
        }
}
}

}
