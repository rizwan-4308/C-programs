#include <stdio.h>
#include <math.h>

int main() {

    int number;
    printf("Enter number: \n");
    scanf("%d", &number);

    if(number >= 0) {
        printf("Positive Number \n");
        if(number % 2 == 0){
            printf("Even number \n");
        }
        else{
            printf("Odd number \n");
        }}
    else{
        printf("Negative Number \n");
    }

    return 0;
}