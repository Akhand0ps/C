#include<stdio.h>
int main(){
float a,b,c,d;
scanf("%f %f %f %f",&a,&b,&c,&d);
float e=(a+b)/2;
float f=(c+d)/2;
printf("Crop 1: %.2f Kg\n",e);
printf("Crop 2: %.2f Kg\n",f);
if(e>f){
printf("Crop 1 had the highest average yield");
}
else{
printf("Crop 2 had the highest average yield");
}

}