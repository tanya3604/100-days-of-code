// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, R1, R2, real, image;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        R1 = (-b + sqrt(discriminant)) / (2*a);
        R1 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f", R1, R1);
    }
    else if (discriminant == 0) {
        R1 = -b / (2*a);
        printf("Roots are real and same: %.2f", R1);
    }
    else {
        real = -b / (2*a);
        image = sqrt(-discriminant) / (2*a);
        printf("Roots are complex");
    }

    return 0;
}
