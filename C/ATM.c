#include <stdio.h>
#include <stdlib.h>

int main()
{
    int withdraw, output, withdrawMod;
    float tax = 0.50, balance;

    printf("Welcome to ATM!\n");

    printf("How much do you want to width draw? : ");
    scanf("%i", &withdraw);

    printf("\nHow much do you have? : ");
    scanf("%f", &balance);

    //Making a new var for mod of withdraw
    withdrawMod = withdraw % 5;

    if(!withdrawMod && (withdraw + tax) <= balance){
        balance = balance - (withdraw + tax);
        printf("%.2f", balance);
    }else{
        printf("%i", balance);
    }
}
