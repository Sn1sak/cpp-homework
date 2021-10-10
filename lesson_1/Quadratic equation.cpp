#include <iostream>
#include <math.h>

int main () 
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    printf("Type A: ");
    std::cin >> a;
    printf("Type B: ");
    std::cin >> b;
    printf("Type C: ");
    std::cin >> c;
    float d = 0;
    float x1 = 0;
    float x2 = 0;

    if(a > 0) 
    {
        d = b * b - 4 * a * c;
        if(d>0)
        {
            printf("x1 = %f\n", (-b + sqrt(d)) / (2 * a));
            printf("x2 = %f\n", (-b - sqrt(d)) / (2 * a));
        }
        else if (d==0)
        {
            printf("x1 = x2 = %f\n", (-b + sqrt(d)) / (2 * a));
        }
        else printf("Дискриминант меньше нуля, комплексные корни.");
    }
    else
    {
        if(b != 0)
        {
            x1 = (-c) / b;
            x2 = x1;
            printf("X = %f\n", x1);
        }
        else
        {
            if(c != 0.0)
            {
                printf("Выражение не несет в себе смысла");
            }
            else
            {
                printf("X любой");
            }
        }
    }
    std::cout << std::endl;
}