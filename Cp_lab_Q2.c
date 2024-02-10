#include <stdio.h>
int main(void)
{
    int a = 123, b = -123, c = 12345;
    printf("%2d\n", c);     // 1
    printf("%-10.8d\n", c); //2
  /* - sign shows left, 10 shows no. of spaces taken and
   8 shows the size of number to increase the size upto 8 complier
   added some zeroes in front of no.
   */

    printf("%10.8d\n", c);  // 3
   /* No sign shows Right, 10 shows no. of spaces taken and
   8 shows the size of number to increase the size upto 8 complier
   added some zeroes in front of no.
   */
   printf("%+10.8d\n", c);  // 4
   /* + sign shows Right with + in front which also takes a space, 10 shows no. of spaces taken and
   8 shows the size of number to increase the size upto 8 complier
   added some zeroes in front of no.
   */
    printf("%-7d\n", a);    //5
    printf("%08.2d\n", a);  //6
    
    printf("%07d\n", a);    
    /*No sign shows Right , 07 shows no. of spaces taken and
   remaining spaces are taken by 0 in front
   */ 
    printf("%+0-9.4d\n", a);
    printf("%+09.4d\n", a); 
    printf("%+09.7d\n", a); 
    printf("%+07d\n", a);   
    printf("%+07.4d\n", a);  
    printf("%+-07.4d\n", a); 
    printf("%-08d\n", b);    
    printf("%-08.2d\n", b);  
    printf("%-8.4d\n", b);   
    return 0;
}