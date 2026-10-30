#include <stdio.h>
#include <cs50.h>

void valid_triangle(float, float, float);

int main()
{
    float a,b,c;

    a = get_float("Enter side 'a' of triangle\n");
    b = get_float("Enter side 'b' of triangle\n");
    c = get_float("Enter side 'c' of triangle\n");

    valid_triangle(a,b,c);
}

void valid_triangle(float a, float b, float c)
{
    int flag = 0;

    if(a > 0 && b > 0 && c > 0)
    {
        if(a + b > c || b + c > a || c + a > b)
        {
            flag = 1;
        }
    }

    flag == 1 ? printf("Valid\n") : printf("Invalid\n");
}
