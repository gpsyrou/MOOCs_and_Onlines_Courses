# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>

// Function that counts the number of letters in a string
// Note: Count only uppercase/lowercase a-z, A-Z
int count_letters(string instr)
{
    int count = 0;
    for (int i = 0; i < strlen(instr); i++)
    {
        if (isalpha(instr[i]))
        {
            count+=1;
        }
    }
    return count;
}


int main(void)
{
    // Get input string from the user
    string s = get_string("Text:");

    // Return the number of the characters from the input string
    int character_cnt = count_letters(s);
    printf("%d letter(s)", character_cnt);

    return 0;
}