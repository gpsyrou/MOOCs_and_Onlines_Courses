# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>


string get_plaintext()
{
    string s = get_string("plaintext:");
    printf("The plaintext is: %s\n", s);

    for (int i = 0; i < strlen(s); i++)
    {
        printf("The character is: %c  and the corresponding ASCII number is %i\n", s[i],s[i]);
    }

    return s;
}


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

    // Convert the command line argument from string to int
    int input_value = atoi(argv[1]);
    printf("The input as integer is: %i\n", input_value);

    // Prompt user for a plaintext
    get_plaintext();

    return 0;
}