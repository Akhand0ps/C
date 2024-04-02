// #include <stdio.h>

// int main() {
//     int n1 = 2, n2 = 3, n4 = 5;
//     int x = 10;
    
    
//     if (x % n1 == 0) {
//         printf("%d is a factor of %d\n", n1, x);
//     }
    
    
//     if (x % n2 == 0) {
//         printf("%d is a factor of %d\n", n2, x);
//     } else {
//         printf("%d is not a factor of %d\n", n2, x);
//     }
    
//     if (x % n4 == 0) {
//         printf("%d is a factor of %d\n", n4, x);
//     }
    
//     return 0;
// }



#include<stdio.h>


int main(){

    int marks;

    scanf("%d", &marks);

    printf("Enter your Marks: %d\n",marks);

    if(marks>=70){
        printf("A");

    }

    if(marks>40 && marks<=70){
        printf("B");


    }

    if(marks>=0 && marks<=40){
        printf("C");

    }






    return 0;
}