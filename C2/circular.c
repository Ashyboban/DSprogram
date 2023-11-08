#include<stdio.h>
int q[100],i,n,front=-1,rear=-1,item,ch=0;
void enqueue()
{
    if((rear+1)%n==front)
    printf("overflow \n");
    else if((front==-1)&&(rear==-1)){

    front=0;
    rear=0;
    printf("enter the element");
    scanf("%d",&item);
    q[rear]=item;
    }
    else
    {
        rear=(rear+1)%n;
        q[rear]=item;
    }
    
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
    printf("underflow");
    else if(front==rear)
    {
        printf("deleted elements are %d",q[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("deleted element is %d",q[front]);
        front=(front+1)%n;
    }
}
void display()
{
    i=front;
    if(front==-1&&rear==-1)
    printf("underflow");
    else
    {
        printf("elements in the queue are:\n");
        while(i<=rear)
        {

    printf("%d",q[i]);
    i=(i+1)%n;
            }
        
    }
}
void main()

{
    printf("enter the size of array");
    scanf("%d",&n);
    while (ch!=4)
    {
        printf("enter the choice 1.enqueue 2.dequeue 3.display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("exit");
            break;
            default:
            printf("default value"); 
            break;       
        }
    }
    
}
