# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>


string get_plaintext(int val)
{
    string p = get_string("plaintext:");
    printf("The plaintext is: %s\n", p);

    for (int i = 0; i < strlen(p); i++)
    {
        int char_plus_key = p[i] + val;

        // Add condition to do a "cycle" if we violate the ASCII boundaries
        if (char_plus_key > 90 && char_plus_key < 97)
        {
            char_plus_key = 64 + (char_plus_key - 90);
        }
        else if (char_plus_key > 122)
        {
            char_plus_key = 96 + (char_plus_key - 122);
        }

        printf("The character is: %c  and the corresponding ASCII number is: %i. The cipher character(number) after applying the key is: %i and as a character is: %c\n", p[i], p[i], char_plus_key, char_plus_key);

    }

    // ci = (pi + k) % 26 -> This gives us the c[i] character of the cipher text

    return p;
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
    get_plaintext(input_value);

    return 0;
}