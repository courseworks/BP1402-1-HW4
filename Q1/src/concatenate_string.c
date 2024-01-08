#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for character type functions
char* get_string(){
    char* string=(char*)malloc(sizeof(char));
    char c;
    int count = 0;
    while((c = getchar()) != '\n'){
        string[count] = c;
        // string = (char*)realloc(string,(count+2)*sizeof(char));
        char* temp = (char*)realloc(string,(count + 2)*sizeof(char));
        if(!temp)
            return NULL;
        else
            string = temp;
        count++;
    }
    string[count] = '\0';
    return string;
}
    

char* concatenate_and_manipulate(char* str1, char* str2) {
     char* name_lastname;
     int x=strlen(str1)+strlen(str2);
     name_lastname=(char*)malloc((x+2)*sizeof(char));
     strcpy(name_lastname,str1);
     strcat(name_lastname,"_");
     strcat(name_lastname,str2);
     
     return name_lastname;
}

int main(){
    char* str1 = get_string();
    char* str2 = get_string();
    printf("concatenate string is:%s",concatenate_and_manipulate(str1,str2));
    return 0;
}