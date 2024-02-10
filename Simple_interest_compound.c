#include<stdio.h>
#include<math.h>
int main()
{
    float P=500000,T=10;
    float R =3.5 ;
    float Si,Ci_anually,Ci_semiannually,Ci_monthly,Ci_daily;
    Si = (P*R*T)/100;
    printf("%f",Si);
    int n=12;
    float temp = P*pow((1+(R/(100*n))),n*T);
    Ci_anually = temp -P;
    printf("\n%f",Ci_anually);
    return 0;
}