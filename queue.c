#include<stdio.h>
int front=-1,rear=-1,n,q[100],i,item,ch=0;
void qinsert()
{
    
    if(rear>=n-1)
    {
        printf("/n queue is full /n"); 
    
    }
    else if(front==-1)
    front=0;
    rear=0;
    printf("enter the item");
    scanf("%d",&item);
    q[rear]=item;
    rear++;
}
void qdelete()
{

    if (front==-1||front>rear)
    {
        printf("\n queue is empty \n");

    }
    else
    {
        for(i=front;i<rear;i++)

        {
            q[i]=q[i+1];
            rear--;
            front++;
        }
    }
    
}
void display()
{
    if(front==-1){
        printf("underflow");
    }
    else{
    printf("elements in the queue are:");
    for ( i = front; i < rear-1; i++)
    {
        printf("%d",q[i]);
        printf("/n");

    }
    printf("front value is %d",q[front]);
    printf("rear of queue is %d",q[rear]);
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
            qinsert();
            break;
            case 2:
            qdelete();
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