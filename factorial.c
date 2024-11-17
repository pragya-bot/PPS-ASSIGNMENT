# include<stdio.h>
int factorial(int);
int factorial(int f){
    if (f==1) return f;
    return f*factorial(f-1);
}
void main()
{ 
    int a,fact;
    printf ("Enter a number to find its factorial: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));



}
