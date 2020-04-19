// Returns a right-side pyramid with blocks from 1 to 8

// Georgios Spyrou
// 19 April 2020
// Problem Set 1

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

// Call for user to input the max number of bricks
int request_number()
{
    int num_bricks = get_int("Height:");
    return num_bricks;
}

// Create function which returns a string concatenated multiple times
char *repeat_char(int n, const char *s) 
{
    size_t str_length = strlen(s);
    char *dst = malloc(n * str_length + 1);
    int i; 
    char *p;

    for (i = 0, p = dst; i < n; ++i, p += str_length) 
    {
        memcpy(p, s, str_length);
    }
  
    return dst;
}

int main(void)
{ 
    bool is_end = false;
    while (is_end == false)
    {
        int num_bricks = request_number();
        int iter;
        int itrpl;
        if (num_bricks >= 1 && num_bricks <= 8)
        {
            for (iter = 1; iter <= num_bricks; iter++)
            {
                char *result = repeat_char(num_bricks, "#");
                for (itrpl = 0; itrpl <= (num_bricks - iter - 1); itrpl++)
                {
                    result[itrpl] = ' ';
                }
                printf("%s\n", result);
            }
            is_end = true;    
        }
        else 
        {
            continue;
        }
    }
    return 0;
}