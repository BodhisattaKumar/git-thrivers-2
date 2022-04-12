#include <stdio.h>

void main()
{
    float a, b, add, sub, prod, div;
    char opt;
    printf("Operation you want to select( + , - , * , / ):\n");
    scanf(" %c", &opt);
    printf("Enter a no.:\n");
    scanf("%f %f",&a,&b);
    
    if (opt=='+')
    {
        add = a + b;
        printf("Sum = %f = %f+%f ", add, a, b);
    }
    else if (opt =='-')
    {
        sub = a - b;
        printf("sub = %f = %f-%f ", sub, a, b);
    }

    else if (opt =='*')
    {
        prod = a * b;
        printf("Multi = %f = %f * %f",prod, a, b );
    }

    else if (opt =='/')
    {
        div = a / b;
        printf("Div = %f = %f/%f ",div, a, b );
    }

    else
    {
        printf(" invalid choice ");
    }
}


