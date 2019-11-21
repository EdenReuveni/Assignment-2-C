#include <stdio.h>
static double arr[50][2];
static int count=1;


int check_input(int account_number){
    if(account_number>=901 && account_number<=950){
        return 1;
    }
    else{
        return 0;
    }
}

void open_account(double amount){
if(count<50){
    for(int i=0;i<50;i++){
            if(arr[i][1] == 0){
               arr[i][1]=1;
               arr[i][0]=amount;
               break;
            }

    }
    int account_number=count+900;
printf("The new account  number is %d\n",account_number);

count++;
} else ("There are 50 accounts, can't open another one");


}


void check_balance(int account_number){

if(check_input(account_number)==1){
    if (arr[account_number][1]==1)
    printf("Your balance in the account %d is %.2lf\n",account_number,arr[(account_number-1)%100][0]);
else printf("This account is closed\n");

}
else{
    printf("Invalid input");   
}
}

void new_deposite(int account_number, double deposite){
if(check_input(account_number)==1){
    if (arr[account_number][1]==1) {
    arr[account_number][0]+=deposite;
   printf("Your balance in the account after the deposite %d is %.2lf\n",account_number,arr[(account_number-1)%100][0]);
}
else printf("This account is closed");
}
else{
    printf("Invalid input"); 
 }
}

void new_withdrawal(int account_number,double amount){
if(check_input(account_number)==1){
    if (arr[account_number][1]==1 && arr[account_number][0]>=amount) {
        arr[account_number][0]-=amount;
       printf("Your balance in the account after the withdraw %d is %.2lf\n",account_number,arr[(account_number-1)%100][0] );
}
    else printf("This account is closed or not enough money\n");
}
else{
     printf("Invalid input"); 
 }
}

void close_account(int account_number){
    if(check_input(account_number) == 1){
    if (arr[(account_number-1)%100][1] == 1){
        arr[(account_number-1)%100][1]=0;
        arr[(account_number-1)%100][0]=0;
        count--;
    }
    else ("This account is closed");  
    }
    else{
        printf("Invalid input");
    }    
    
}

void add_interest_rate(double interest_rate){
double sum =0;
for(int i=0;i<50;i++){
    if(arr[i][1]==1){
        sum=arr[i][0]* interest_rate;
        arr[i][0]+=sum;
    }
}
}

void print_all_open_accounts(){
    
for(int i=0;i<50;i++){
    if(arr[i][1]==1){
    printf("Account number is: %d and the balance is: %.2lf\n", i+901,arr[i][0]);
    }
}   
}

void close_all_open_accounts(){
    for(int i=0;i<50;i++){
    if(arr[i][1]==1){
        arr[i][1]=0;
        arr[i][0]=0;

    }
    count = 0;

}
}



