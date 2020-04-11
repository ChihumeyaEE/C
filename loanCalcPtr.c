/* loanCalcPtr.c */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float loan; 
    float intRate; 
    int payment; 
    int i; float Principal, Rate, Balance, interest; 
    printf("Amount of loan: ");
    scanf("%f", &loan);
    printf("Amount of interest per year: %%");
    scanf("%f", &intRate);
    printf("Amount of payments: ");
    scanf("%d", &payment);
    
    float interestArr[10];
    float principalArr[10];
    float balanceArr[10];

    float monpay, r, numpay ;  //numpay= number of payments , monpay = monthly payment
    numpay = payment; 
    r = (intRate/100)/12; 
    monpay = loan * ( r * pow((1+r),numpay) / (pow((1+r),numpay)-1));

    interest = (intRate*Balance)/1200;
    balanceArr[0]= loan + interest; 
    printf("\nMonthly Payment should be : %.2f", monpay);      
    printf("\nAmortization Schedule");
    printf("\n # \t Payment \t Principal \t Interest \t Balance");
   
   for(i = 1; i<=numpay; i++){
    *(interestArr+(i-1))= *(balanceArr+(i-1))*r;     
    *(principalArr+(i-1))= monpay-*(interestArr+(i-1)); 
    *(balanceArr+(i))= *(balanceArr+(i-1))-*(principalArr+(i-1)); 
    if(Balance<0){
        Balance=0; 
    }
   }

    for(i=1; i<=payment; i++){

        printf("\n %-3d \t $%-8.2f \t $%-8.2f \t $%-8.2f \t $%-8.2f \n", i, monpay, *(principalArr+(i-1)), *(interestArr+(i-1)), *(balanceArr+(i)));
    }

}