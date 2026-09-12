#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("First No: ");
    char o = get_char("Operation: ");
    long y = get_long("Last No: ");

    if( o == '+')
    {
        printf("Answer is %ld\n", x + y);
    }

    if( o == '-')
    {
        printf("Answer is %ld\n", x - y);
    }

    if(o == '*')
    {
        printf("Answer is %ld\n", x * y);
    }

    if( o == '/')
    {
        printf("Answer is %ld\n", x / y);
    }
}

