#include<stdio.h>
int main()
{
    int num;
    printf("Enter a 3 digit number  ");
    scanf("%d",&num);
    int temp = num;
    int ones = temp%10;
    temp =temp/10;
    int tens = temp%10;
    temp =temp/10;
    int hundred = temp%10;
    temp =temp/10;
    if(temp!=0) {printf("Invalid Number"); return 0;}


    if(hundred ==  1) printf("One Hundred ");
    if(hundred ==  2) printf("Two Hundred ");
    if(hundred ==  3) printf("Three Hundred ");
    if(hundred ==  4) printf("Four Hundred ");
    if(hundred ==  5) printf("Five Hundred ");
    if(hundred ==  6) printf("Six Hundred ");
    if(hundred ==  7) printf("Seven Hundred ");
    if(hundred ==  8) printf("Eight Hundred ");
    if(hundred ==  9) printf("Nine Hundred ");

    if(tens == 1)
    {
        if(ones == 1) printf("Eleven");
        if(ones == 2) printf("Twelve");
        if(ones == 3) printf("Thirteen");
        if(ones == 4) printf("Fourteen");
        if(ones == 5) printf("Fifteen");
        if(ones == 6) printf("Sixteen");
        if(ones == 7) printf("Seventeen");
        if(ones == 8) printf("Eighteen");
        if(ones == 9) printf("Nineteen");
        return 0;
    }
    if(tens==2) printf("Twenty ");
    if(tens==3) printf("Thirty ");
    if(tens==4) printf("Forty ");
    if(tens==5) printf("Fifty ");
    if(tens==6) printf("Sixty ");
    if(tens==7) printf("Seventy ");
    if(tens==8) printf("Eighty ");
    if(tens==9) printf("Ninety ");

    if(ones ==  1) printf("One");
    if(ones ==  2) printf("Two");
    if(ones ==  3) printf("Three");
    if(ones ==  4) printf("Four");
    if(ones ==  5) printf("Five");
    if(ones ==  6) printf("Six");
    if(ones ==  7) printf("Seven");
    if(ones ==  8) printf("Eight");
    if(ones ==  9) printf("Nine");

    return 0;
}