#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void validate(char password[]);


int main(){

    char password [20];

    printf("Enter password: ");
    gets(password);
    

    validate(password);

    return 0;
}



void validate(char password[]){

    int length = strlen(password);

    bool CaseCheck = false, DigitCheck = false, SpecialCheck=false;


    for(int i=0; i<length; i++){

        if(password[i] >=65 && password[i]<=90){
            CaseCheck = true;
        }

        if(password[i] >='0' && password[i]<='9'){
            DigitCheck = true;
        }

        if(password[i] == '!' ||
           password[i] == '@' ||
           password[i] == '#' ||
           password[i] == '$' ||
           password[i] == '%')
           
           {
            SpecialCheck = true;
        }
        
    }


    if (length < 8){
        printf("ERROR: Password must be atleast 8 characters long.\n");
    }

    if (CaseCheck == false){
        printf("ERROR: Password must have atleast one uppercase letter.\n");
    }

    if (DigitCheck == false){
        printf("ERROR: Password must have atleast one digit.\n");
    }

    if (SpecialCheck == false){
        printf("ERROR: Password must have atleast one special character.\n");
    }

    if(CaseCheck && length>8 && DigitCheck && SpecialCheck){
        printf("SUCCESS");
    }

}
