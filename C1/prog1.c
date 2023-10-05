#include<stdio.h>
int a[100],n,i,j,ch=0;
void insert()
{
int pos,item;
printf("enter position");
scanf("%d",&pos);
if(pos<0||pos>n){
    printf("invalid");
}
else{
    printf("enter item");
    scanf("%d",&item);
for (i = n; i >pos; i--)
{
    a[i]=a[i-1];
}
 a[pos]=item;
 n++;

}

 }
void delete()
{
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("deletion not possible");
    }else
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    
    
}
void sort(){
    int temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}
void merge(){
    int n2,b[100],c[100],n3;
    printf("enter size of sec array");
    scanf("%d",&n2);
    printf("elements");
    for ( i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }
        n3=n+n2;

    printf("merging");
    for ( i = 0; i < n; i++)
    {
        c[i]=a[i];
    }
    for ( i = 0; i < n2; i++)
    {
        c[i+n]=b[i];
    }
    n=n3;
    for ( i = 0; i <n3 ; i++)
    {
        a[i]=c[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    
}
void display(){
    printf("display");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}
void main()
{
    printf("enter the size of array");
    scanf("%d",&n);
    printf("elements");
    for (i = 0; i < n; i++)
    {

    scanf("%d",&a[i]);
     }

    
    while (ch != 6)
    {
     printf("\nEnter the choice (1.Insert 2.Delete 3.Sort 4.Merge 5.Display 6.Exit): ");
     scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        insert();
        break;
     case 2:
        delete();
        break;
     case 3:
        sort();
        break;
     case 4:
        merge();
        break;
     case 5:
        display();
        break;
    case 6:
      printf("exit") ;
    default:
    printf("invalid");
        break;
    }
}

}
