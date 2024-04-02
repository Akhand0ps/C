#include<stdio.h>


int main(){


    // we have to take input from the user and check it's digits or char;
    // 3=> digit
    // a = char;

    char ch;
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("alphabet");
    }

    else if (ch>='0' && ch<='9'){
        printf("digit");
    }
    


    return 0;
}