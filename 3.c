#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1,num2;
    printf("Choose operator (+ , - , * , /)\n");
    scanf("%c",&op);
    if (op == '+' || op == '-' || op == '*'|| op == '/')
    {
    printf("Enter two Numbers\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    }
    else{
        printf("Enter valid operator ");
        return 0;
    }


    switch (op)
    {
    case '+' :
        printf("%0.1f + %0.1f = %0.1f",num1,num2,num1+num2);
        break;

     case '-' :

        printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
        break;

     case '*' :
        printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
        break;

     case '/' :
        if (num2 == 0)

        {
            printf("cant divide on zero ");
            break;
        }else
        {
        printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
        break;
        }
    default:
        break;
    }
    return 0;
}
