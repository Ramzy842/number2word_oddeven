#include <stdlib.h>
#include <stdio.h>

void    convert_num_to_word(int number)
{
    char *words[] = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };
    printf("%s\n", words[number]);
}

void    program(int num01, int num02)
{
    while (num01 <= num02)
    {
        if (num01 < 10)
            convert_num_to_word(num01);
        else
        {
            if (num01 % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
        num01++;
    }
}

void    usage()
{
    printf("Make sure you enter two numbers.\n");
    printf("Usage: type ./main (or the name of the executable if you choose to compile it yourself)\n");
    printf("followed by two numbers (ex: ./main 7 10)\n");
}

int main (int argc, char **argv)
{
    if (!argv[1] || !argv[2] || argc > 3)
    {
        usage();
        return (1);
    }
    int num01 = atoi(argv[1]);
    int num02 = atoi(argv[2]);
    if (!num01 || !num02)
        return (1);
    else if (num01 < 1 || num01 > 20 || num02 < 1 || num02 > 20)
        printf("Number is out of range...\nUsage:Enter a number between 1 and 20\n");
    else
        program(num01, num02);
    return (0);
}