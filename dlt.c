#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node N;
N* head = NULL;
int LengtOfLL()
{
    int count=0;
    N *ptr=head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
void push(int val){
    N* new=(N*)malloc(sizeof(N));
    new->data=val;
    new->next=head;
    head=new;
}

int main()
{
    
    push(1);
    push(4);
    push(2);
    push(3);
    push(5);
    printf("The size of the linkedlist is %d",LengtOfLL(head));

    return 0;
} 