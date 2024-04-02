


// #include<stdio.h>

// && (both expression have to be true)
// || (any one is true then "True" if both false then )
// int main(){
    
//     int a = 15; int b = 10; int c = 5;

//      int d = (a>b) && (b>c);

//      printf("%d", d);
// }


// #include<stdio.h>

// int main(){


//     int a = 15; int b = 10; int c= 5;
    
//     int d = (a>b) || (b>c);   // !a<3 (! it will convert true to false and false to true)

//     printf("%d",d);

// }

// #include<stdio.h>

// int main(){
//     int a = 15; int b = 10; int c = 5; int d = 19;

//     int e =!(a>=b) && b>=c ||(d!=a);

//     // !true==>false
//     // !true==>false
//     // false && true || false

//     printf("%d", e);

// }

//SWAPING
// #include<stdio.h>

// int main(){

//     int a = 15; int b = 10;

//     // a= 10 b = 15

//     // a=b; // 10 10
//     int temp = a;
//     a = b;
//     b = temp;

//     printf("%d %d",a,b);
// }


// #include<stdio.h>
// // & operataor  
// int main(){
    


//     //// and &
                                                        
//     int a= 5; int b = 7;     // 2 = 1 0 . 3 = 1 1       1 0
//                             //                          1 1 ==> 1 0 

//     printf("%d", a&b);
    



// }


#include<stdio.h>

int main(){
    
    int a = 2; int b = 10;
    printf("%d" ,(a|b));
}

