#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct paymentStruc{
    float interest, principal, balance; 
};

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
    struct paymentStruc P[100];
    
    float monpay, r, numpay ;  //numpay= number of payments , monpay = monthly payment
    numpay = payment; 
    r = (intRate/100)/12; 
    monpay = loan * ( r * pow((1+r),numpay) / (pow((1+r),numpay)-1));

    interest = (intRate*Balance)/1200;
    P[0].balance= loan + interest; 
    Balance=loan+interest; 
    printf("\nMonthly Payment should be : %.2f", monpay);    
    printf("\nAmortization Schedule");
    printf("\n # \t Payment \t Principal \t Interest \t Balance");
   
    for(i=1; i<=payment; i++){
        interest= Balance * r; 
        Principal= monpay - interest;
        Balance= Balance - Principal ; 

        P[i-1].interest= interest; 
        P[i-1].principal= Principal; 
        P[i].balance= Balance; 

        printf("\n %-3d \t $%-8.2f \t $%-8.2f \t $%-8.2f \t $%-8.2f \n", i, monpay, P[i-1].principal, P[i-1].interest, P[i].balance);
    }

}