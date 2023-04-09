#include <stdio.h>

int main() {
    int no1, no2, sum;
    int *ent1, *ent2;
    
    printf("Enter first number: ");
    scanf("%d", &no1);
    
    printf("Enter second number: ");
    scanf("%d", &no2);
    
    ent1 = &no1; // Pointer to first nuent2
    ent2 = &no2; // Pointer to second number
    
    sum = *ent1 + *ent2; // Adding values of two numbers using pointers
    
    printf("Sum of %d + %d = %d", *ent1, *ent2, sum);
    
    return 0;
}
