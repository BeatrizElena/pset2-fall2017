#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    // iterate over strings in argv, starting with 2nd string, i.e. string at index 1
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
        }
        // capitalize and print the 1st character (char at index 0) of each i string
        printf("%c", toupper(argv[i][0]));
    }
    printf("\n");
}