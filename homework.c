#include<Stdio.h>





int main(){

    // int x = 10 ,y =8, z = 0; out of these three which one of them holds the max value
    // how many elements out of these three is equal to max value;
int x = 10, y =10, z =0; // 10
int maxm = 0;

if(x>=y && x>=z){
printf("X is maxm");
maxm = x;
}
else if(y>=x && y>=z){
printf("y is maxm");
maxm = y;
}
else{
printf("z is maxm");
maxm = z;
}

int cnt =0;
if(x == maxm){
cnt++;

}
if(y == maxm){
cnt++;
}
if(z == maxm){
cnt++;
}

printf("%d", cnt);






    return 0;
}