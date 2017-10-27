#include <stdio.h>

long calculateFibunacciNumber(int x){

    if(x ==0 || x == 1){

        return x;
    }


    return calculateFibunacciNumber(x - 1) + calculateFibunacciNumber(x - 2);
}

int main() {

    long customerInput = 0;
    long fibunacciNumber = 0;
    int index = 0;

    printf("Please enter a number:\n");
    scanf("%ld", &customerInput);

    if(customerInput <= 0){

        customerInput = 1;
    }


    for(int i = 0; i <= customerInput; i++){

        fibunacciNumber = calculateFibunacciNumber(i);

        if(fibunacciNumber > customerInput){

            index = i - 1;
            break;

        }
        else {

            index = i;

        }

    }

    fibunacciNumber = calculateFibunacciNumber(index);

    printf("%ld, %d\n", fibunacciNumber, index);

    return 0;
}

