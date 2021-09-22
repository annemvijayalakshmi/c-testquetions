#include<stdio.h>

int main()
{
    int n, i, flag=0;
    printf("enter any number: ");
    scanf_s("%d", &n);
    for (i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf(" entered number is not prime number");
    }
    else
        printf("Entered number is  prime number");
        
}