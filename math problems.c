#include <stdio.h>
#include <math.h>
void sum();
void max();
void min();
void CheckEvenOdd();
void fact();
int main(){
  int option;
  printf("---CLI UTILITY---");
  do
  {
    printf("1.Addition \n 2. Maximum \n3.Minimum \n4.CheckEvenOdd\n5.Factorial\n6.Exit\nEnter the option:" );
    scanf("%d",&option);
    switch (option)
    {
    case 1:
      sum();
      break;
    case 2:
      max();
      break;
    case 3:
      min();
      break;
    case 4:
      CheckEvenOdd();
      break;
    case 5:
      fact();
      break;
    case 6:
      printf("Exit!");
      break;     
    
    default:
    printf("Wrong input!!");
      
    }
  } while (option!=6);
  return 0;
}

void sum(){
  int a,b;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("The sum of %d and %d is %d\n",a,b,a+b);
}
void max(){
  int a,b;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Maximum = %d\n",a>b ? a:b);
}
void min(){
  int a,b;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Minimum = %d\n",a<b ? a:b);
}
void CheckEvenOdd(){
  int n;
  printf("Enter the  number:");
  scanf("%d",&n);
  printf(n%2==0 ? "Even\n":"Odd\n");
}
void fact(){
  int n;
  printf("Enter the  number:");
  scanf("%d",&n);
  int fact=1;
  for (int i = 1; i <=n; i++)
  {
    fact*=i;
  }
  printf("The Factorial of %d is %d",n,fact);  
}





