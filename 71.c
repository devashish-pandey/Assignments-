//   9      Recursive function to find GCD
#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Swapping numbers if num2 is greater than num1
    if (num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculating GCD using recursion
    int result = findGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
