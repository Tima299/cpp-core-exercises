#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int largest_of_three(int a, int b, int c) {
    return (a >= b && a >= c) ? a : (b >= c ? b : c);
}

const char *is_even(int n) {
    return n % 2 == 0 ? "Even" : "Odd";
}

long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

long long power(int base, int exp) {
    return exp == 0 ? 1 : base * power(base, exp - 1);
}

int main() {
    int choice, x, y, z;
    while (1) {
        printf("Select an operation:\n");
        printf(
            "1. Check Prime\n2. Largest of Three\n3. Even or Odd\n4. Factorial\n5. Power Calculation\n0. Exit the Loop\n");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Exiting the Loop\n");
            break;
        }
        switch (choice) {
            case 1: {
                printf("Enter number: ");
                scanf("%d", &x);
                printf("%s\n", is_prime(x) ? "Prime" : "Not Prime");
                printf("_______________________________________________\n");
                break;
            }
            case 2: {
                printf("Enter three numbers: ");
                scanf("%d %d %d", &x, &y, &z);
                printf("Largest: %d\n", largest_of_three(x, y, z));
                printf("_______________________________________________\n");
                break;
            }
            case 3: {
                printf("Enter number: ");
                scanf("%d", &x);
                printf("%s\n", is_even(x));
                printf("_______________________________________________\n");
                break;
            }
            case 4: {
                printf("Enter number: ");
                scanf("%d", &x);
                printf("Factorial: %lld\n", factorial(x));
                printf("_______________________________________________\n");
                break;
            }
            case 5: {
                printf("Enter base and exponent: ");
                scanf("%d %d", &x, &y);
                printf("Power: %lld\n", power(x, y));
                printf("_______________________________________________\n");
                break;
            }
            default: {
                printf("Invalid Choice\n");
                printf("_______________________________________________\n");
            }
        }
    }
    return 0;
}
