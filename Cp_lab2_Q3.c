#include<stdio.h>
#include<math.h>
float max(float n1,float n2)
{
    if(n1>n2) return n1;
    else return n2;
}
float min(float n1,float n2)
{
    if(n1<n2) return n1;
    else return n2;
}
int main()
{
    printf("Enter 4 numbers   ");
    float n1,n2,n3,n4;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    float maxi = max(n1,max(n2,max(n3,n4)));
    float minn = min(n1,min(n2,min(n3,n4)));
    printf("maxi = %f  minn = %f \n     ",maxi,minn);
    printf("%.4f",maxi-minn);
    return 0;
}