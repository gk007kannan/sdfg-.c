 
#include <stdio.h>
#include<conio.h>
int isPowerOf2(int number)
{
    while(number!=1)
    {
        if(number%2!=0)
            return 0;
        number=number/2;
    }
    return 1;
}
 
void main()
{
    int num;
    clrscr();
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    if(isPowerOf2(num))
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
     getch();
}
