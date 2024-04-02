// #include<stdio.h>

// int main(){

//     char name;   int age;   float height;

//     scanf("%c %d %f",&name, &age,&height);

//     printf("Initail: %c\n",name);

//     printf("Age: %d \n",age);

//     printf("Height: %.2f meters\n",height);





//     return 0;
// }



#include<stdio.h>

int main(){

    float a,b;

    scanf("%f %f",&a, &b);

    int temp = a;
     
    a = b;

    b=a;

    printf("%f %f",a,b);





    return 0;
}