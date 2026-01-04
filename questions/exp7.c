#include <stdio.h>
int main () {
    float balance, interest_amount, maintanence_charge, bonus, total_amount;
    //input account balance.
    printf("enter coustomer's  account balance:   ");
    scanf("%d",&balance);
    //calculate interest,maintanence charge, bounus and total amount
    interest_amount = 0.05*balance;
    balance += interest_amount;
    printf("balance after interest: %.2f\n",balance);
    maintanence_charge = 100.00;
    balance -= maintanence_charge;
    printf("balance after maintanence charge: %.2f\n",balance);
    bonus = 1.5;
    balance += bonus;
    printf("balance after maintanence charge: %.2f\n",balance);
    total_amount/= 2;
    printf(" total amount in each linked account:  %.2f\n",total_amount);
    return 0;
}