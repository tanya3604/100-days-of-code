// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
    #include<stdio.h>
    int main()
    {
        float R, area, circumference, pi = 3.141;
        printf("Enter value of R: ");
        scanf("%f", &R);
        area = pi * R * R;
        circumference = 2 * pi * R;
        printf(" area = %.2f, circumference = %.2f ", area, circumference);
        return 0;
    }