
#include <stdio.h>
int main(){
   int n;
   printf("Enter the number:");
   scanf("%d",&n);

   int arr[n];

   int a=0,b=1;

    if (n==0)
    {
       printf("%d",a);
       return 0;
    }
    if (n==1)
    {
       printf("%d",b);
       return 0;
    }
    for (int i = 0; i <=n; i++)
    {
        arr[i]=a;
        int next=a+b;
        a=b;
        b=next;
        printf("%d\t",arr[i]);
    }
    
    return 0;
}