#include<stdio.h>
#include<string.h>
char str1[100],str2[100];
int ch=0;
void search()
{
    printf("search operation/n");
    if(strstr(str1,str2)!=NULL)
    printf("\n%s is found at %s\n",str2,str1);
    else
    printf("\n%s is not found\n",str2);

}
void substr()
{
    printf("substring operation");
    if (strstr(str1,str2)!=NULL)
    {
        printf("\n%sis substring of%s\n",str2,str1);
    }
   else
   printf("\n%s is not asubstring") ;
}
void catination()
{
    printf("\nstring catination");
    if (strcat(str1,str2))
    {
        printf("%s",str1);
    }
    
}
void main()
    {
        printf("\nenter the first string\n");
        scanf("%s",str1);
         printf("\nenter the sec string\n");
        scanf("%s",str2);
        while (ch!=4)
        {
            printf("\nenter the choice:1.search 2.substring 3.catination 4.exit\n");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                search();
                break;
                case 2:
                substr();
                break;
                case 3:
                catination();
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
