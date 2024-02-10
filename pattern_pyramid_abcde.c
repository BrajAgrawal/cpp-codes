#include<stdio.h>
int main()
{
    int n=5;
    for(int i =1;i<=n;i++)
      {
        for(int j =1,ch =65;j<=i;j++,ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
      }
}