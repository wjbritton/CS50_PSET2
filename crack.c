#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <crypt.h>

int main(int argc, string argv[]){
    if (argc == 2){
    string key = argv[1];
    
    const char *salt = "50";
    char target[12]= ".jPgLzVirkc";
if(strcmp(key, "hash") ==0){
    }
    char alph[55]= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    //char P = 'P';
    for(int i=0; i<54;i++){
        
        char guess[13] = crypt(key, salt);
        
        printf("%s", guess);
        if(guess == target){
            printf("%s\n", guess);
            return 0;
       }
        
}
}

printf("Please input use two values!\n");
        return 1;
}