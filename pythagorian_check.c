#include<stdio.h>
#include<conio.h>
#include<math.h>
int pythgorian(int num1,int num2,int num3)
{
  if(num1>num2&&num1>num3&&pow(num1,2)==pow(num2,2)+pow(num3,2))
  return 1;
  else if(num2>num3&&pow(num2,2)==pow(num1,2)+pow(num3,2))
  return 1;
  else if(pow(num3,2)==pow(num1,2)+pow(num2,2))
  return 1;
  else
  return 0;
}
int main()
{int n1,n2,n3;
  printf("Enter 3 Numbers ");
  scanf("%d %d %d",&n1,&n2,&n3 );
if(pythgorian(n1,n2,n3))
printf("Yes these numbers are pythagorian");
else
printf("Yes these numbers are not pythagorian");
  return 0;
}
