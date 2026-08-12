#include <stdio.h>

int main() {
    int first, second, temp;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    // Display numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    // Swapping logic using the third variable (temp)
    temp = first;   // Step 1: Save the value of first in temp
    first = second; // Step 2: Assign the value of second to first
    second = temp;  // Step 3: Assign the saved value from temp to second

    // Display numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
