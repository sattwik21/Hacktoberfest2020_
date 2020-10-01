#include <stdio.h>
int fibonacci(int n);   //function protoype

int main( )
{   
    int n;   //n--> nth term of the fibonacci series.
    printf("Enter the no. of the last term:");
    scanf("%d", &n);
    printf("The %dth term of series is: %d",n, fibonacci(n));   //calling of fibonacci function
    
    return 0;
}

int fibonacci(int n){
    int fib=0;
    if(n==1){
        return 1;
        }
    else if(n==0){
        return 0;
    }    
    else {
        return fib=fibonacci(n-1)+fibonacci(n-2);
        }
            
}
