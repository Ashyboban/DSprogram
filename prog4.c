#include <stdio.h>
int stack[100],top=-1,item,n,ch=0,i;
void push()
{
    printf("insertion operation");
    if (top>n)
    {
        printf("stack overflow");
    }
    else{
        top=top+1;
        printf("enetr the item");
        scanf("%d",&item);
        stack[top]=item;
    }
    
}
void pop()
{
    printf("deletion operation");
    if (top<0)
    {
        printf("underflow");
    }
    else{
        printf("element popped is %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    if (top>=0)
    {

        printf("elements are:");
        for ( i = top; i >=0; i--)
        {
            printf("\n%d",stack[i]);
        }
        
    }
    else
    printf("\nstack is empty");
    
}
void main()
{
    printf("enter size of array");
    scanf("%d",&n);
    while (ch!=4)
    {

        printf("\nenter the choice:1.push 2.pop 3.display 4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit");
            break;
        
        default:
        printf("invalid");
            break;
        }
    }
    
}