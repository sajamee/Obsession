#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eucludeGCD(int a, int b){

    while (b != 0){
     int temp = b;
     b = a%b;
     a = temp;
    }
    return a;
    }


int main()
{
    int a;
    int b;
    printf("enter a number\n");
    scanf("%d", &a);
    printf("enter another number\n");
    scanf("%d", &b);

    printf( "GCD is: %d", eucludeGCD(a, b));

    return 0;
}
