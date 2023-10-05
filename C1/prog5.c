#include<stdio.h>
int a[100],small,min,i,j,n,ch=0,temp;
void bubblesort()
{
    printf("bubble sort");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j< n-1; j++)
        {
           if (a[j]>a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
           
        }
        
    }
    printf("after bubble sort:\n ");
    for ( i = 0; i < n; i++)
    {
     printf("%d",a[i]);
    }
    

    
}
void selection()
{
    printf("selection sort");
    for ( i = 0; i < n; i++)
    {
        small=i;
        for ( j= i+1; j < n; j++)
        {
            if (a[small]>a[j])
            {
                small=j;
                temp=a[small];
                a[small]=a[i];
                a[i]=temp;
            }
            
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {
     printf("%d",a[i]);
    }
}
void insertion()
{
    printf("insertion sort");
    for ( i = 1; i < n; i++)
    {
       min=a[i];
       j=i-1; 
       while (min<a[j]&&j>=0)
       {
        a[j+1]=a[j];
        j=j-1;
       }
       a[j+1]=min; 
    }
    
    for ( i = 0; i < n; i++)
    {
     printf("%d",a[i]);
    }
}

void main()
{
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    printf("elements");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }
    while (ch!=4)
    {
        printf("enter the choice:1.bubblesort 2.selection sort 3.insertion sort  4.exit");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        bubblesort();
            break;
             case 2:
        selection();
            break;
         case 3:
        insertion();
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















