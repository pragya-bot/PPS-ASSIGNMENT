# include<stdio.h>

int fibonacci(int a){
    if (a==1 || a==0) return a;
    return fibonacci(a-1) + fibonacci(a-2);
    
}
void main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int k =fibonacci(n);
    printf("The fibonacci series of %d is %d",n,k);
    
}