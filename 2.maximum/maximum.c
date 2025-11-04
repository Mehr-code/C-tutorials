#include <stdio.h>

int main() {
    int n, i;
    double num, max;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%lf", &num);
    max = num;  

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        if (num > max) {
            max = num;  
        }
    }

    printf("The largest number is: %.2lf\n", max);

    return 0;
}
