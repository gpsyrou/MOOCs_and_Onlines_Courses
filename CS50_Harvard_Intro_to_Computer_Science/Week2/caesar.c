# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>


int main(int argc, string argv[])
{
    // Handle the case where the user inputs less or more than 1 argument
    if (argc != 2)
    {
        printf("Incorrect number of command line arguments. Please input a single argument.\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isdigit(argv[1][i])))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the command line argument from string to int
    int val = atoi(argv[1]);

    // Prompt user for a plaintext
    string p = get_string("plaintext:");

    int char_plus_key;
    char output[strlen(p)]; //This will hold the final output

    for (int i = 0; i < strlen(p); i++)
    {

        if (isalpha(p[i]))
        {
            if (p[i] >= 'a' && p[i] <= 'z')
            {
                char_plus_key = (((p[i] - 'a') + val) % 26) + 'a';
            }
            else if (p[i] >= 'A' && p[i] <= 'Z')
            {
                char_plus_key = (((p[i] - 'A') + val) % 26) + 'A';
            }
        }
        else
        {
            char_plus_key = p[i];
        }
        // Convert the number to a characterand append it to the string
        sprintf(&output[i], "%c", char_plus_key);
    }

    // Print the final output for the ciphertext
    printf("ciphertext: %s\n", output);

    return 0;
}
