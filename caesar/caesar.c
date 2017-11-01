#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int key = atoi(argv[1]);
    printf("%i\n", key);
    printf("plaintext: ");
    string plaintext = get_string();
    // printf("%s", plaintext); // to be deleted
    char c;
    if (plaintext != NULL)
    {
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isupper(plaintext[i]))
            {
                c = (plaintext[i] - 65 + key) % 26 + 65;
                printf("%c", c);
            }
            else if (islower(plaintext[i]))
            {
                c = (plaintext[i] - 97 + key) % 26 + 97;
                printf("%c", c);
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