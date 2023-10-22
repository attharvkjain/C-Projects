//ATM backend with file handling
/*changeable var: balance, pin
unchangable: name, acc no
*/

//trying not to use printf and scanf
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    typedef struct
    {
        char name[20]; char acc_no; int pin; float balance;
    } Customer;
    
    Customer c;
    char ch='y';
    char buffer[100];
    int choice, temp;
    
    char name[20]; char acc_no; int pin; float balance;
    int structsize = sizeof(Customer);
    
    
    printf("\t\t\t\t\t\t\t ATM\n\t\t\t\t\t\t\t=====\n");
    printf("Enter Account No: "); scanf("%c", &acc_no);     //for some reason not scanning string properly
    
    //Dev mode (enter / in account no.)
    if(acc_no=='/')
    {
        printf("DEV MODE ENABLED\n");
        FILE *filedev = fopen("Customers.txt", "a");
        
        if(filedev==NULL)
        {
            perror("Unable to open file: "); exit(1);
        }
        fseek(filedev, 0, SEEK_END);
        
        while(ch=='y')
        {
            puts("NEW ENTRY:\n(Enter Customer: Account no, Name, Pin, Balance)");
            scanf("%d", &temp);
            scanf("%c %[^\n] %d %f", &c.acc_no, c.name, &c.pin, &c.balance);
            fprintf(filedev, "%c %s %d %f\n", c.acc_no, c.name, c.pin, c.balance);  //for some reason not fprinting first value if integer
            puts("ANOTHER ENTRY? (Y/N)");
            scanf("%d", &temp);
            ch = getchar();
        }
        fclose(filedev);
        printf("DEV MODE ENDED\n");
    }
    //End of dev mode.
    
    FILE *file = fopen("Customers.txt", "r+");
    
    if(file==NULL)
    {
        perror("Unable to open file: "); exit(2);
    }
    
    
    fseek(file, 0, SEEK_SET);  //OR rewind(file)
    
    
    int compare = strcmp(acc_no,c.acc_no);
    while(compare!=0)
    fseek(file, +structsize, SEEK_CUR);
    
    
    
    printf("Enter pin: "); scanf("%d", &pin);
    if(pin==c.pin)
    for(;;)
    {
        printf("1.Check Balance\n2.Withdraw Amount\n3.Deposit Money\n4.Change pin\n5.Exit\n------------------------------\nEnter choice: ");
        scanf("%d", &choice);
        printf("------------------------------\n");
        
        switch (choice)
      {
        case 1:
        printf("Your Balance is: %f", c.balance);
        break;
        
        // case 2:
        // printf("Enter amount to withdraw: ");
        // scanf("%d", &withdraw);
        // if(withdraw>=balance)
        //     printf("Insufficient balance...");
            
        // balance-=withdraw;
        // printf("Transaction Successful...\nYour balance is: %d", balance);
        
        // break;
        
        // case 3:
        // printf("Enter amount to deposit: ");
        // scanf("%d", &deposit);
        // balance+=deposit;
        // printf("Transaction Successful...\nYour balance is: %d", balance);
        // break;
        
        // case 4:
        // printf("Enter current pin: ");
        // scanf("%d", &input);
        // if(input==pin)
        // {
        //     printf("Enter new 4-digit pin: ");
        //     scanf("%d", &pin);
        //     printf("Pin changed to: %d", pin);
        // }
        // else
        // printf("Wrong pin\n=>Pin change unsuccessful...");
        // break;
        
        // case 5:
        // printf("Are you sure you want to exit?\n(Y/N) ");
        // scanf("%d",&temp);
        // scanf("%c", &exitcase);
        // //printf("%d",temp);
        // //printf("%c", exitcase);
        // if(exitcase=='y' || exitcase=='Y')
        // {
        //     printf("------------------------------\nATM Program Terminated...");
        //     exit(0);
        //     break;
        // }
        // else
        // break;
        
        default:
        printf("Invalid input...");
      }
    }
    fclose(file);
    
    
    
    
    
    return 0;
}
