#include <stdio.h>
#include "myBank.h"


int main(){
   char transaction;
   double initial_deposit;
   int account_number;
   double deposite_ammount;
   double withdrawal_amount;
   double interest_rate;
    printf("Please enter the action you would like to do\n");
    printf("Press H at anytime for help\n");
    printf("Press O for opening an account\n");
    printf("Press B for checking your account balance\n");
    printf("Press D for depositing to your account\n");
    printf("Press W for withdrawaling from your account\n");
    printf("Press C for closing your account\n");
    printf("Press W for withdrawaling from your account\n");
    printf("Press I for adding an interest rate all accounts\n");
    printf("Press P for printing all open accounts\n");
    printf("Press E for closing all accounts and exiting the program\n");

    scanf(" %c", &transaction);
    while(transaction != 'E'){
   
    switch (transaction)
    {
    case 'O' :
     printf("In order to open an account, please insert the initial deposit\n");
     if(scanf("%lf",&initial_deposit)!=1){
        break;
     }
     initial_deposit=(int)(initial_deposit*100);
     initial_deposit/=100;
     open_account(initial_deposit);   
        break;

    case 'B' :
     printf("In order to check your balance, please enter your account number\n");
     if(scanf("%d",&account_number)!=1){
         break;
     }
     check_balance(account_number);       
        break;

    case 'D':
     printf("Please enter your account number\n");
     if(scanf("%d" ,&account_number)!=1)
     {
         break;
     }
     printf("And the amount you would like to deposite\n");
     if(scanf("%lf" ,&deposite_ammount)!=1){
         break;
     }
     deposite_ammount = (int)(deposite_ammount*100);
     deposite_ammount/=100;
     new_deposite(account_number,deposite_ammount);  
       break;

    case 'W':
     printf("Please enter your account number\n");
     if(scanf("%d" ,&account_number)!=1){
         break;
     }
     printf("And the amount you would like to withdrawal\n");
     if(scanf("%lf" ,&withdrawal_amount)!=1){
         break;
     }
     withdrawal_amount = (int)(withdrawal_amount*100);
     withdrawal_amount/=100;
     new_withdrawal(account_number,withdrawal_amount);  
     break;
    
    case 'C':
            printf("Please enter your account number\n");
            if(scanf("%d",&account_number)){
                break;
            }
            close_account(account_number);
            break;

    case 'I':
        printf("Please insert the interest rate\n");
        if(scanf("%lf",&interest_rate)!=1){
            break;
        }
        add_interest_rate(interest_rate/100);
        break;

    case 'P':
        print_all_open_accounts();
        break; 

    case 'H':
    printf("Press O for opening an account\n");
    printf("Press B for checking your account balance\n");
    printf("Press D for depositing to your account\n");
    printf("Press W for withdrawaling from your account\n");
    printf("Press C for closing your account\n");
    printf("Press W for withdrawaling from your account\n");
    printf("Press I for adding an interest rate all accounts\n");
    printf("Press P for printing all open accounts\n");
    printf("Press E for closing all accounts and exiting the program\n");
        break;

    default:
        break;
    }
    printf("Please enter the action you would like to do\n");
    scanf(" %c", &transaction);
    }  
    close_all_open_accounts();
   


    return 0;
}