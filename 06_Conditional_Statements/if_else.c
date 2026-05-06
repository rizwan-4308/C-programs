#include <stdio.h>
#include <math.h>

int main() {

    int age;
    printf("Enter age: \n");
    scanf("%d", &age);

    if(age > 18){
        printf("adult \n");
        printf("They can vote \n");
    }
    else
        printf("Not adult \n");
    
    printf("Thank You! \n");

    return 0;
}