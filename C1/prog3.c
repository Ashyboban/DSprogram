#include<stdio.h>
int a[100][100],b[100][100],c[100][100],i,j,k,r1,r2,c2,c1,ch=0;
void add()
{
printf("\nmatrix addition");
for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c2; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    
}
for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c2; j++)
    {
        printf("%d\t",c[i][j]);
       
    }
     printf("\n");
}
}
void transpose(){
   
    printf("\ntranspose of frst matrix");
    for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c1; j++)
    {
        printf("%d\t",a[j][i]);
       
    }
     printf("\n");
}
     printf("\ntranspose of sec matrix");
    for ( i = 0; i < r2; i++)
{
    for ( j = 0; j < c2; j++)
    {
        printf("%d\t",b[j][i]);
       
    }
     printf("\n");
}
    
}
void multi()
{
    printf("\n matrix multiplication");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            c[i][j]=0;
            for ( k = 0; k<c2; k++)
           
            {
             c[i][j]+=a[i][k]*b[k][j];               

            }
            
        }
        
    }
     for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {

           
            
             printf("%d\t",c[i][j]);              
            
        }
                    printf("\n");

    }
    }
void main()
{
   printf("enter row of first matrix");
   scanf("%d",&r1);
   printf("enter colm of first matrix");
   scanf("%d",&c1);
   printf("elements:");
   for ( i = 0; i < r1; i++)
   {
    for ( j = 0; j < c1; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
   }
    for ( i = 0; i < r1; i++)
   {
    for ( j = 0; j < c1; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
   }
  
   
   printf("enter row of sec matrix");
   scanf("%d",&r2);
   printf("enter colm of sec matrix");
   scanf("%d",&c2);
    printf("elements:");
   for ( i = 0; i < r2; i++)
   {
    for ( j = 0; j < c2; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
   }
   for ( i = 0; i < r1; i++)
   {
    for ( j = 0; j < c1; j++)
    {
        printf("%d\t",b[i][j]);

    }
    printf("\n");
   }
  
   
   while (ch!=4)
   {
        printf("\nenter choice:/n 1.addition 2.transpose 3.multiplication\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            add();
            break;
         case 2:
            transpose();
            break;
             case 3:
            multi();
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
