#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    char c ='\0';
    int code=0;
    //Input #2
    
    string s = get_string();
    //int count1=0, count2=0;
    
    //StrLength
    int slength = strlen(s);
    
    //Input #1
    string a = argv[1];
    int slkey = strlen(a); 
    //Validate Length of Input
    if (argc != 2){
        printf("Please put use two values!\n");
        return 1;
    }
    if(slength>slkey){
            int slengthdiv = slength/slkey;
            int slengthmod = slength%slkey;
            int sum = (slkey*slengthdiv) + slengthmod;
        for(int i=0; i<sum; i++){
            
        if (a[i] != ' '){
        c = a[i];
        c = toupper(c);
        c = c - 65;
        }
     
        for(int j=0; j<slength; j++){
            code = s[j];
            code = toupper(code);
            code = code + c;
        }
               printf("%c", code);
        }
    }
    
    
        
    }