#include <stdio.h>


int is_prime(int);
int largest_of_three(int, int, int);
const char *is_even(int);
long long factorial(int);
long long power(int, int);

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

char *my_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*dest) dest++;
    while (*src) *dest++ = *src++;
    *dest = '\0';
    return ptr;
}

char *lcp(char **strs, int n, char *dest) {
    int i, j;
    for (i = 0; strs[0][i]; i++) {
        for (j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i]) break;
        }
        if (j != n) break;
    }
    for (j = 0; j < i; j++) dest[j] = strs[0][j];
    dest[j] = '\0';
    return dest;
}

int main() {
    int choice, x, y, z;
    while (1) {
        printf("Select an operation:\n");
        printf("1. Check Prime\n2. Largest of Three\n3. Even or Odd\n4. Factorial\n5. Power Calculation\n0. Exit the Loop\n");
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
                break;
            }
            case 2: {
                printf("Enter three numbers: ");
                scanf("%d %d %d", &x, &y, &z);
                printf("Largest: %d\n", largest_of_three(x, y, z));
                break;
            }
            case 3: {
                printf("Enter number: ");
                scanf("%d", &x);
                printf("%s\n", is_even(x));
                break;
            }
            case 4: {
                printf("Enter number: ");
                scanf("%d", &x);
                printf("Factorial: %lld\n", factorial(x));
                break;
            }
            case 5: {
                printf("Enter base and exponent: ");
                scanf("%d %d", &x, &y);
                printf("Power: %lld\n", power(x, y));
                break;
            }
            default: {
                printf("Invalid Choice\n");
                break;
            }
        }
    }
    return 0;
}
