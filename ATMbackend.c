//Backend ATM Application
/*1. Check Balance 
  2. Withdraw Amount 
  3. Deposit Money 
  4. Change pin 
  5. Exit (ask confirmation)
*/
//idea: double loop, when 5(exit) pressed take another variable, if that equal then exit second loop
//double loop wasnt reqd 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int pin, balance;
   pin=1234; 
   balance=5000;
   int choice, input, deposit, withdraw;
   char exitcase;
   int temp;
   
   printf("\t\t\t\t\t\t\t ATM\n\t\t\t\t\t\t\t=====");
  for(;;)
  {
  printf("\nEnter pin: ");
  scanf("%d", &input);
  printf("------------------------------\n");
  if(input==pin)
   {
  printf("1.Check Balance\n2.Withdraw Amount\n3.Deposit Money\n4.Change pin\n5.Exit\n------------------------------\nEnter choice: ");
  scanf("%d", &choice);
  printf("------------------------------\n");
  
      switch (choice)
      {
        case 1:
        printf("Your Balance is: %d", balance);
        break;
        
        case 2:
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
        if(withdraw<=balance)
        {
            balance-=withdraw;
            printf("Transaction Successful...\nYour balance is: %d", balance);
        }
        else
        printf("Insufficient balance...");
        break;
        
        case 3:
        printf("Enter amount to deposit: ");
        scanf("%d", &deposit);
        balance+=deposit;
        printf("Transaction Successful...\nYour balance is: %d", balance);
        break;
        
        case 4:
        printf("Enter current pin: ");
        scanf("%d", &input);
        if(input==pin)
        {
            printf("Enter new 4-digit pin: ");
            scanf("%d", &pin);
            printf("Pin changed to: %d", pin);
        }
        else
        printf("Wrong pin\n=>Pin change unsuccessful...");
        break;
        
        case 5:
        printf("Are you sure you want to exit?\n(Y/N) ");
        scanf("%d",&temp);
        scanf("%c", &exitcase);
        //printf("%d",temp);
        //printf("%c", exitcase);
        if(exitcase=='y' || exitcase=='Y')
        {
            printf("------------------------------\nATM Program Terminated...");
            exit(0);
            break;
        }
        else
        break;
        
        default:
        printf("Invalid input...");
      }
      
   }
   else
   printf("Invalid pin...");
   printf("\n------------------------------");
  }
    return 0;
}










