#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Please put use two values!\n");
        return 1;
    }
    string s = get_string();
    int a = atoi(argv[1]);
     for(int i = 0;i<strlen(s);i++){
            int code = s[i];
            int code1;
            if (64<code && 91>code){
              code1 = code + a;
              if(code1 > 91){
                  code1 = code1 -26;
              }
            }
            if (97<code && 122>code){
    
              code1 = code + a;
              if(code1 > 122){
                  code1 = code1 -26;
                  
              }
              
          }
    printf("%c",code1);
    }
    printf("\n");
}