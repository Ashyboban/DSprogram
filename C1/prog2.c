#include<stdio.h>
int i,a[100],n,ch=0,key,result;
int lsearch(int a[],int n,int key)
{

    for ( i = 0; i < n; i++)
    {
        
            if (a[i]==key)
            {
                return i;
            }
            
        

    }
 return -1;
}
int bsearch(int a[],int key,int low,int high)
{    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(a[mid]==key)
        {
            return mid;
        }
         else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
           high=mid-1;
        }

    }
    return -1;
}

void main()
{
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enetr the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        
     }
    printf("enter item");
    scanf("%d",&key);
    while(ch!=3)
    {
        printf("/n enter the choice :1.lenearsearch 2.binarysearch 3.exit /n");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:
            result=lsearch(a,n,key);
            if (result==-1)
            {
                printf("no value");
                }
                else
            printf("position of given value is %d",result);
            break;
        
            case 2:
            result=bsearch(a,key,0,n);
            if (result==-1)
            {
                printf("no value");
                }
                else
            
             printf("position of given value is %d",result);
            break;
            case 3:
            printf("exit");
            break;
        
        default:
        printf("invalid");
            break;
        }
    }
}
