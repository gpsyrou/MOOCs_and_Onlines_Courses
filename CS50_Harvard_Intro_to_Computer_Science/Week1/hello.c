#include <stdio.h>
#include <cs50.h>

/* This script says Hello x, where x in an input string from the user */
int main(void)
{   
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
