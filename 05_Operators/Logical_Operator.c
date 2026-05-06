#include <stdio.h>
#include <math.h>

int main() {

    printf("&&\n");

    printf("%d \n", 4>3 && 8>4);
    printf("%d \n", 3>4 && 8>4);
    printf("%d \n", 3>4 && 2>4);

    printf("|| \n");

    printf("%d \n", 4>3 || 8>4);
    printf("%d \n", 3>4 || 8>4);
    printf("%d \n", 3>4 || 2>4);

    printf("! \n");

    printf("%d \n", 5>1);
    printf("%d \n", !(5>1));
    printf("%d \n", !((5>1) && (3>4)));


    return 0;
}