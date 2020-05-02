# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>
# include <math.h>

int main (int argc, string argv[])
{
    // Handle the case where the user inputs less or more than 1 argument
    if (argc != 2)
    {
        printf("Incorrect number of command line arguments. Please input a single argument.\n");
        return 1;
    }

    printf("The argument was %s\n", argv[1]);
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isdigit(argv[1][i])))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    return 0;
}