/* reverse.c */ 
#include<stdio.h>
#define N 50 
int main(){
    int arr[N],i=0;
    char ch;
    char str[100];
    printf("Enter a message: ");
    /* Put code here to get input from user by using getchar() */
    
    //while ch=getchar()!='\n' assign each elelment to an index in our character array
    while((ch=getchar())!='\n'){
        //gets each character from the input 
        str[i]= ch;
        i++; 
    }
    printf("Reversal is: ");
    /* Put code here to print out the reversal by using putchar()*/ 
    char c; 
    for(int j=i; j>=0; j--){
        c= str[j]; 
        putchar(c);
    }
    printf("\n");
    return 0;
    
    }
