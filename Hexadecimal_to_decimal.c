#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <math.h>
int main()
{ char s[100] ;
 int sum=0;
  printf("Enter Hexadecimal Number  ");
  scanf("%s",&s);
  int n = strlen(s);
for(int i=0;i<=n-1;i++)
{
  if(s[i]>='0'&&s[i]<='9')
  sum+=((s[i]-'0')*pow(16,n-1-i));
  else if(s[i]>='A'&&s[i]<='F')
  sum+=((s[i]-'A'+10)*pow(16,n-1-i));

}
printf("%d \n",sum);
printf("%d",n );
return 0;
}
