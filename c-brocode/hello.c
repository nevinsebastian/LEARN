#include <stdio.h>
int main() {
    int age;
    float height;
    char name[20];

    // Input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Output
    printf("\nHello, %s!\n", name);
    printf("You are %d years old and %.2f meters tall.\n", age, height);

    return 0;
}
