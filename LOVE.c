

#include <stdio.h>

int main()
{
    char a=53,b=89,c=69,d=65,e=82,f=83,g=76,h=84,i=74;

    printf("\t000000000000000000000\n\t0000****00000****0000\n\t000*****");
    printf("*000******000\n\t00********0********00\n\t00****************");
    printf("*00\n\t000****%c*%c%c%c%c%c****000\n\t0000*****",a,b,c,d,e,f);
    printf("%c%c%c*****0000\n\t00000***********00000\n\t000000****",g,h,i);
    printf("*****000000\n\t0000000*******0000000\n\t00000000*****0000000");
    printf("0\n\t000000000***000000000\n\t0000000000*0000000000\n\t00000");
    printf("0000000000000000\n\n");

    return 0;
}


