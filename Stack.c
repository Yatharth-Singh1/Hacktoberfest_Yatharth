#include <stdio.h>
#include <stdlib.h>
static int i = 1;
static int x = 1;

struct node1
{
    int data;
    struct node* next;
};
struct node1* head1;
struct node1* n1;
struct node1* ptr1;
void insert1()
{
   if (head1==NULL)
   {
       head1 = (struct node1*)malloc(sizeof(struct node1));
       printf ("Enter constant term of polynomial :");
       scanf ("%d",&head1->data);
       head1->next = NULL;
       return;
   }
   for (ptr1=head1;ptr1->next!=NULL;ptr1 = ptr1->next);
   printf ("Enter value of x%d: ",x);
   n1 = (struct node1*)malloc(sizeof(struct node1));
   scanf ("%d",&n1->data);
   ptr1->next = n1;
   n1->next = NULL;
   x++;
}
struct node
{
    int data;
    struct node* next;
};
struct node* head;
struct node* n;
struct node* ptr;
void insert()
{
   if (head==NULL)
   {
       head = (struct node*)malloc(sizeof(struct node));
       printf ("Enter constant term of polynomial :");
       scanf ("%d",&head->data);
       head->next = NULL;
       return;
   }
   for (ptr=head;ptr->next!=NULL;ptr = ptr->next);
   printf ("Enter value of x%d: ",i);
   n = (struct node*)malloc(sizeof(struct node));
   scanf ("%d",&n->data);
   ptr->next = n;
   n->next = NULL;
   i++;
}
struct node2
{
    int data;
    struct node* next;
};
struct node2* head2=NULL;
struct node2* n2=NULL;
struct node2* ptr2=NULL;
void add()
{
    if (head2==NULL)
    {
        head2 = (struct node*)malloc(sizeof(struct node));
        head2->data = head->data + head1->data;
        head2->next = NULL;
    }}
void add1()
{
    int p =1,r=1,q=2;
    while (r<4)
    {
    for (ptr=head,q=1;q<=p;ptr = ptr->next,q++);
    for (ptr1=head1,q=1;q<=p;ptr1 = ptr1->next,q++);
    for (ptr2=head;ptr2->next!=NULL;ptr2 = ptr2->next)
    {
            q++;
    n2 = (struct node*)malloc(sizeof(struct node));
    ptr2->next = n2;
    n2->data = ptr->data + ptr1->data;

}}}
void display ()
{
    for (ptr=head;ptr=NULL;ptr = ptr->next)
    {
        printf ("%d ",ptr->data);
    }
}
int main()
{
    int k=1,n;
    printf ("Enter Number of terms in First polynomial ");
    scanf ("%d",&n);
    while (k<=n)
    {
        insert1();
        k++;
    }
    k  = 1;
    printf ("Enter Number of terms in second polynomial ");
    scanf ("%d",&n);
    while (k<=n)
    {
        insert();
        k++;
    }
    add();
    add1();
    display();
    printf("Hello world!\n");
    return 0;
}
