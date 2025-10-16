// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
float a, b, c;
printf ("Enter Three sides of Triangle: ");
scanf ("%f%f%f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))  
    {  
    printf("The triangle is valid.\n");
    
    if((a==b)&&(b==c))
{   
    printf("it is an eqilateral triangle.\n");
}
    else if(a==b||b==c||a==c)
{
    printf("This is an Isosceles Triangle.\n");
}
else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
    {
    printf("This is an Right Triangle.\n");
}
else 
{
    printf("triangle is scalene");
}
    }
else
{
    printf("Triangle is not valid");
}  
return 0;
    }
