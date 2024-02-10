#include<stdio.h>

int main()
{   int p,q,r,s,t;
     p=1,q=0;
    r =  q++ || p++;
    s = --p && --q;
    t= (r--) + (++s);
    printf("%d %d %d",r,s,t);

}




