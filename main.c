#include <stdio.h>
#include "myBank.h"


int main(){
   char transaction;
   double initial_deposit;
   double account_number;
   double deposite_ammount;
   double withdrawal_amount;
   double interest_rate;
      printf("Please enter the action you would like to do\n");
      scanf(" %c", &transaction);
   while(transaction != 'E'){
   
    switch (transaction)
    {
    case 'O' :
     printf("In order to open an account, please insert the initial deposit\n");
     scanf("%lf",&initial_deposit);
     open_account(initial_deposit);   
    //  print_array();    
        break;

    case 'B' :
     printf("In order to check your balnce, please enter your account number\n");
     scanf("%lf",&account_number);
     check_balance(account_number);       
        break;
    case 'D':
     printf("Please enter your account number %d and how much money you want to deposite \n");
     scanf("%d %lf",&account_number,&deposite_ammount);
     new_deposite(account_number,deposite_ammount);  
       break;
    case 'W':
    printf("Please enter your account number %d and how much money you want to withdrawal \n");
     scanf("%d %lf",&account_number,&withdrawal_amount);
     new_deposite(account_number,withdrawal_amount);  
     break;
    
    case 'C':
            printf("Please enter your account number\n");
            scanf("%d",&account_number);
            close_account(account_number);
            break;
    case 'I':
        printf("Please insert the interest rate %lf \n");
        scanf("%lf",&interest_rate);
        add_interest_rate(interest_rate/100);
        break;
    case 'P':
        print_all_open_accounts();
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