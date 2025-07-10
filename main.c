#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int factorial(int N){
    int result = 1;
    for (int i=N; i>=1; i--) {
            result=result*i ;  // (*=) compounding assignment operator
    }
    return result;
    }
    int main()
    {
         int num;
    printf("enter a number:");
    scanf("%d", &num);
    printf("the factorial is: %d\n", factorial(num));
    return 0;

    }




