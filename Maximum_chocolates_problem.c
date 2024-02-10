#include<stdio.h>
#include<conio.h>
int main()
{int choco=0,wrapper=0;
printf("Enter the amount you have   ");
 scanf("%d",&choco );
 wrapper = choco;
 while (wrapper>=3) {
   int i =wrapper/3;
   wrapper-=2*i;
   choco += i;}
   printf("Number of maximum chocolates you can buy=  %d\n",choco );
return 0;
}
