#include <stdio.h>

int main()
{
    int integer;
    float floating;
    char character;
    char string[100]; // assuming maximum string length is 100 characters

    // Read inputs
    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a floating-point number: ");
    scanf("%f", &floating);

    printf("Enter a character: ");
    scanf(" %c", &character); // notice the space before %c to consume any leading whitespace

    printf("Enter a string: ");
    scanf("%s", string);

    // Display inputs
    printf("\nInteger: %d\n", integer);
    printf("Floating-point number: %.2f\n", floating); // displaying floating-point number with 2 decimal places
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    return 0;
}
