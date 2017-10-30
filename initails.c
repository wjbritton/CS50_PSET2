#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
    int i=0, slength=0;
    printf("Name:");
    char namei, namej;
    string name = get_string();
    slength = strlen(name);
    printf("%c", toupper(name[0]));
    for(i=0; i<slength;i++){
        namei = name[i];
        namej = name[i+1];
     if (namei ==' '){
         if (namej !=' '){
             printf("%c", toupper(namej));   
         }
    }
}
    printf("\n");
}