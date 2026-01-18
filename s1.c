#include <stdio.h>
#include <string.h>

int main()
{
    int n=5,i;
    char j[50];
   // char str[50];
   int a[n];
   printf("enter any %d numbers:\n",n);
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   }
   printf("you want to delete last number you should tap (#):\n");
   printf("you want to add last number on starting index number you should tap (@).\n");
   scanf("%s",j);
     if(j[0]=='@')
        {
            int x=a[n-1];//last number stored
            for(i=n-1;i>0;i--)
            {
                 a[i]=a[i-1];
            }
            a[0]=x;
            printf("added last number on starting index number.\n");
        }
       else if(j[0]=='#'){

            n=n-1;

            printf("last number is deleted:\n");
        }

        else{
            printf("not changes in this user defined array.\n");
        }
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);

        }
    return 0;
}
