#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*next;



};
struct node*front=NULL,*rear=NULL;
int enqueue(int d)
{
    
    n=(struct node*)malloc(sizeof(struct node));
    n->data=d;
    n->next=NULL;
    if((rear==NULL)&&(front==NULL));
    {
        front=rear=next;

        rear->next=front;

    }
}