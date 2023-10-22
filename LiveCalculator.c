//Backend live calculator
//only -ve no and invalid input can break it for now
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice[20], invalid[52], i;
    float n1, n2, op, result;

    printf("\t\t\t\t\t\t    Welcome to calculator\n\t\t\t\t\t\t  PRESS (;) TO EXIT ANYTIME\n\t\t\t\t\t\t ---------------------------\n");
    
    printf("Value: ");
    scanf("%s", &choice[i]);
    if(choice[i]==';')
    {
        printf("------------------------------\nThank you for using calculator\n------------------------------");
        exit(0);
    }
    else if(choice[i]>='A' && choice[i]<='z')
    {
        printf("------------------------------\nInvalid input(Re-enter values)\n------------------------------\n");
        
    }
    else
    {
        n1 = atof(choice);  //had to google when typecasting wasn't working (atof = ASCII to float)
        
    }
    
    for(;;)    //for(;;1) / for(1;;) / while(1) can also work
    {
    printf("Operator: ");
    scanf("%s", &choice[i]);
    
    if(choice[i]==';')
    {
        printf("------------------------------\nThank you for using calculator\n------------------------------");
        exit(0);
    }
    else if(choice[i]=='+' || choice[i]=='-' || choice[i]=='*' || choice[i]=='/')
    {
        op = choice[i];
    }
    else
    {
        printf("------------------------------\nInvalid input(Re-enter values)\n------------------------------\n");
        
    }
    
    printf("Value: ");
    scanf("%s", &choice[i]);
    
    if(choice[i]==';')
    {
        printf("------------------------------\nThank you for using calculator\n------------------------------");
        exit(0);
    }
    else if(choice[i]>='A' && choice[i]<='z')
    {
        printf("------------------------------\nInvalid input(Re-enter values)\n------------------------------\n");
        
    }
    else
    {
        n2 = atof(choice);
    }
    
    if(op == '+')
    {
        result = n1+n2;
        printf("Result: %.2f\n", result);
        n1 = result;
    }
    else if(op == '-')
    {
        result = n1-n2;
        printf("Result: %.2f\n", result);
        n1 = result;
    }
    else if(op == '*')
    {
        result = n1*n2;
        printf("Result: %.2f\n", result);
        n1 = result;
    }
    else if(op == '/')
    {
        result = n1/n2;
        printf("Result: %.2f\n", result);
        n1 = result;
    }
    }
    
    return 0;
}



