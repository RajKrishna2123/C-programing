#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2, imaginary, discriminant;
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 ");
    printf("\nEnter value of 'a' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);
    printf("Enter value of 'b' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f",&b);
    printf("Enter values of 'c' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f",&c);
    discriminant = (b * b) - (4 * a * c);
    switch(discriminant > 0)
    {
        case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",root1, root2);
        break;
        case 0:
        switch(discriminant < 0)
        {
            case 1:
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
            root1, imaginary, root2, imaginary);
            break;
            case 0:
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }
    return 0;
}

