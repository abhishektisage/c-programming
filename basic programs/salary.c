#include<stdio.h>

void main()
{
    float bs, ta, da, hra, gs;
    printf("Enter the basic salary of an employee :\n");
    scanf("%f", &bs);
    
    ta = (bs * 8) / 100;
    da = (bs * 11) / 100;
    hra = (bs * 14) / 100;
    
    gs = ta + da + hra + bs;
    
    printf("TA of basic salary is %.2f\n", ta);
    printf("DA of basic salary is %.2f\n", da);
    printf("HRA of basic salary is %.2f\n", hra);
    printf("Gross salary is %.2f", gs);
}

