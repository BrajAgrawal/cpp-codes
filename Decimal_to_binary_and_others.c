#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int decimaltobinary(int num)
{int i,sum=0,lastdigit=0;
  for( i=1;i<=num;i*=2);
  i=i/2;
  for(;i>0;i/=2)
  {lastdigit=num/i;
    num=num-(lastdigit*i);
    sum=(sum*10)+lastdigit;
  }
  return sum;
}
int decimaltooctal(int num)
{int i,sum=0,lastdigit=0;
  for( i=1;i<=num;i*=8);
  i=i/8;
  for(;i>0;i/=8)
  {lastdigit=num/i;
    num=num-(lastdigit*i);
    sum=(sum*10)+lastdigit;
  }
  return sum;
}
int decimaltoHexa(int num)
{int i,lastdigit=0;
 char s[20]="",s2[5];
    for( i=1;i<=num;i*=16);
    i=i/16;
    int j=0;
    for(;i>0;i/=16,j++)
    {lastdigit=num/i;
      num=num-(lastdigit*i);
      if(lastdigit>=0&&lastdigit<=9)
    s[j]=lastdigit+48;
      else
    s[j]='A'+lastdigit+48;
    }
    printf("Hexadecimal: %s\n",s );
    return 0;
}

int main()
{int n;
  printf("Enter Number  ");
  scanf("%d",&n );
  printf("Binary : %d\n",decimaltobinary(n) );
  printf("Octal : %d\n",decimaltooctal(n) );
  return 0;
}
