#include <stdio.h>

int main() {
    int no, fact = 1;
    int *en, i;
    
    printf("Enter a number: ");
    scanf("%d", &no);
    
    en = &no; // Pointer to number
    
    for(i = 1; i <= *en; i++) {
        fact *= i; // Multiplying the factorial with the current iteration
    }
    
    printf("Factorial of %d is %d", *en, fact);
    
    return 0;
}
