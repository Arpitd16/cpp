#include<stdio.h>
void count(int n){
     static int d=1;
    printf("%d",n);
    printf("%d",d);
    d++;
    if(n>1) count(n-1);
    printf("%d",d);
}
int main(){
    count(3); 
}//last 2 4 is the function is return and print the value