#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main (void)
{
    // ask user for input
    string s = get_string();

    // make sure get_string() returned a string
    if (s != NULL)
    {
        // print first init
        printf("%c", toupper(s[0]));
        //iterate through string and ook for space ' ' Print char after ' '
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] == ' ')
            {
                printf("%c", toupper(s[i + 1]));
            }
        }
    }
    printf("\n");
}



