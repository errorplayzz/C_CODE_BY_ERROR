#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,sub,into,divide;

    printf("enter your first number -");
    scanf("%d",&n1);
    printf("enter your second number -");
    scanf("%d",&n2);

    sum=n1+n2;
    sub=n1-n2;
    into=n1*n2;
    divide=n1/n2;

    printf("The Result OF sum is %d \n",sum);
    printf("The Result OF sub is %d \n",sub);
    printf("The Result OF into is %d \n",into);
    printf("The Result OF divide is %d \n",divide);

}

