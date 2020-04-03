#include <stdio.h>

int main(){
    FILE *fp;
    char str[10000];
    // char *filename = "/Users/chihumeya/Downloads/C Programming/test.txt"; // filename location
    char *filename = "test.txt";
    fp = fopen(filename, "r");
      int abc[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    while(1){
        char c = fgetc(fp); // get the next char in the file
        if(feof(fp)){ // if it is the end of the file
        break; // leave the infinite loop
        }
    if(c == 'a' || c =='A'){
    abc[0] += 1;
    }
    if(c=='b' || c=='B'){
    abc[1] += 1;
    }if(c=='c' || c=='C'){
    abc[2] += 1;
    }
    if(c=='d' || c=='D'){
    abc[3] += 1;
    }
    if(c=='e' || c=='E'){
    abc[4] += 1;
    }
    if(c=='f' || c=='F'){
    abc[5] += 1;
    }
    if(c=='g' || c=='G'){
    abc[6] += 1;
    }
    if(c=='h' || c=='H'){
    abc[7] += 1;
    }
    if(c=='i' || c=='I'){
    abc[8] += 1;
    }
    if(c=='j' || c=='J'){
    abc[9] += 1;
    }
    if(c=='k' || c=='K'){
    abc[10] += 1;
    }
    if(c=='l' || c=='L'){
    abc[11] += 1;
    }
    if(c=='m' || c=='M'){
    abc[12] += 1;
    }
    if(c=='n' || c=='N'){
    abc[13] += 1;
    }
    if(c=='o' || c=='O'){
    abc[14] += 1;
    }
    if(c=='p' || c=='P'){
    abc[15] += 1;
    }
    if(c=='q' || c=='Q'){
    abc[16] += 1;
    }
    if(c=='r' || c=='R'){
    abc[17] += 1;
    }
    if(c=='s' || c=='S'){
    abc[18] += 1;
    }
    if(c=='t' || c=='T'){
    abc[19] += 1;
    }
    if(c=='u' || c=='U'){
    abc[20] += 1;
    }
    if(c=='v' || c=='V'){
    abc[21] += 1;
    }
    if(c=='w' || c=='W'){
    abc[22] += 1;
    }
    if(c=='x' || c=='X'){
    abc[23] += 1;
    }
    if(c=='y' || c=='Y'){
    abc[24] += 1;
    }
    if(c=='z' || c=='Z'){
    abc[25] += 1;
    }
        }
        fclose(fp);
        // for(int i = 0; i < 26;i++){
        // printf("%d\n", abc[i]);
        // }
        for(int i = 0; i < 26;i++){
        char c = i+'a';
        char c2 = i+'A';
        printf("Letter %c or %c appears: %d\n", c, c2, abc[i]);
        }
    }
    