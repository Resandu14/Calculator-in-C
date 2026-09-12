#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("First No: ");
    char o;
    while (true)
    {
        o = get_char("Operation: ");

        if (o != '+' && o != '-' && o != '*' && o != '/')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    float y = get_float("Last No: ");

    if (o == '+')
    {
        printf("Answer is %.5g\n", x + y);
    }

    if (o == '-')
    {
        printf("Answer is %.5g\n", x - y);
    }

    if (o == '*')
    {
        printf("Answer is %.5g\n", x * y);
    }

    if (o == '/')
    {
        printf("Answer is %.5g\n", x / y);
    }
}
