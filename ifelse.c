#include<Stdio.h>

int main(){

    int marks;

    scanf("%d",&marks);

    printf("Enter your marks: %d",marks);

    if(marks > 70){
        printf("Your grade: A");
    }
    else if(marks >40){
        printf("Your grade: B");
    }

    else{
        printf("F");
    }





    return 0;
}