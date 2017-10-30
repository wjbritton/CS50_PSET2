#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    char c ='\0';
    
    //Input #2
    string s = get_string();
    int code=0;
    
    //StrLength
    int slength = strlen(s);
    
    //Input #1
    string key = argv[1];
    int slkey = strlen(key); 
    
    //Validate Length of Input
    if (argc != 2){
        printf("Please input use two values!\n");
        return 1;
    }
    
    //Splits the Out Comes Based on Length of a to length of s
    for(int i=0;i<slength;i++){
        if (key[i] != ' '){
        c = key[i%slkey];
        c = toupper(c);
        c = c - 65;
            code = s[i];
            code = toupper(code);
            code = code + c;
        }
    printf("%c\n", code);
}
    }