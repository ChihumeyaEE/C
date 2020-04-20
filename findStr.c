#include <stdio.h>
#include <string.h>

int main(){
    char words[20] ; 
    printf("Enter word: "); 
    scanf("%s", words);
    char largestw[20],smallestw[20]; 
    int length = strlen(words);
    
    int compares = strcmp(smallestw, words);
    int comparel = strcmp(largestw, words);
    

    while(length!=4){
        
        if(compares < 0) {
        strcpy(smallestw, words);
        } if(comparel > 0) {
        strcpy(largestw, words);
        } 
        printf("Enter words: ");
        scanf("%s", words);
        length = strlen(words);
        compares = strcmp(words, smallestw);
        comparel = strcmp(words, largestw);
       
    }

    printf("Smallest word: %s\n", smallestw);
    printf("Largest word: %s\n", largestw);


    return 0; 

}