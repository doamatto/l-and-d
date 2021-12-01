#include<stdio.h>

// This is used by test1 to have a simple addition 
double recalc(double num1, double num2)
{
    return num1+num2;
}

double calc(double num1, double num2)
{
    const double sum = num1+num2;
    // If the sum can be more precise, re-compute
    if (sum >= 10000000000000000 && sum <= 10000000000000000000)
    { // 1e16 & 1e19 respectively
        const long newsum = num1+num2;
        return newsum;
    }
    else
    {
        return sum;
    }
}
