#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    // error handling for number of arguments
    //need to figure out how to handle error is argv[1] entered is not made up of alpha chars.
    if(argc != 2)
    {
        printf("Please enter a key phrase\n");
        return 1;
    }

    if (argv[1] != NULL)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isalpha(argv[1][i]))
            {

            }
            else
            {
                printf("Please use only alphabetical characters\n");
                return 1;
            }
        }
    }

    // save values of key and its length
    string key = argv[1];
    int k = strlen(key);

    // get user input of plaintext to be encrypted
    printf("plaintext: ");
    string plaintext = get_string();

    if (plaintext != NULL)
    {
        char c;
        // create variable to hold the value of each char in key
        int keyshift = 0;

        // iterate through the chars in plaintext
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            // for each iteration, claculate the value of the key, starting at 0. Increase the value at each iteration by 1 (keyshift++)
            keyshift = tolower(key[keyshift % k]) - 97;
            // eprintf(" %i\n", keyshift); // printing the shift values correctly
            if (isupper(plaintext[i]))
            {
                // convert each char in plaintext to an int matching its index in the alphabet (0-25)
                // add the keyshift, using modulo to wrap around the alphabet
                // convert back to an ASCII character by adding 65
                c = plaintext[i] - 65 + (keyshift % 26) + 65;
                printf("%c", c);
                keyshift++;
            }
            else if (islower(plaintext[i]))
            {
                c = plaintext[i] - 97 + (keyshift % 26) + 97;
                printf("%c", c);
                keyshift++;
            }
            else
            {
                c = plaintext[i];
                printf("%c", c);
            }
        }
        printf("\n");
    }
    return 0;
}
