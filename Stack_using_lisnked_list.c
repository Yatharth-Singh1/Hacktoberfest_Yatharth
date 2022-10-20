#include <stdio.h>
#include <stdlib.h>
int size;
struct node
{
    int data;
    struct node *add;

};
struct node * head = NULL;
struct node * new = NULL;
struct node * ptr = NULL;
void insert_at_end()
{
    if (head==NULL)
    {
        head = (struct node *)(malloc(sizeof(struct node)));
        printf ("Enter Value in head node ");
        scanf("%d",&head->data);
        head->add = NULL;
        return;
    }
    for (ptr=head;ptr->add!=NULL;ptr=ptr->add);
        new = (struct node *)(malloc(sizeof(struct node)));
        ptr->add = new;
        printf ("Enter value ");
        scanf ("%d",&new->data);
        new->add=NULL;
}
void print_l()
{
    for (ptr=head;ptr!=NULL;ptr=ptr->add)
    {
        printf("%d ",ptr->data);
    }
}
int main()
{
    printf ("Enter Size of Stack : ");
    scanf ("%d",&size);
    for (int i = 0; i<4; i++)
    {
        void insert_at_end();
    }
    printf("Hello world!\n");
    return 0;
}
