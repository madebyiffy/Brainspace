// #include <cs50.h> // Does not complie becuase this library is only accessable in the Harvard CS50 codespace
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher_text(string plaintext, int key); // String is from cs50.h

int main(int argc, string argv[]) // String is from cs50.h
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false) // False is from cs50.h
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // convert argv[1] to a int
        int key = atoi(argv[1]);

        printf("Success\n"
               "%d\n",
               key);

        string plaintext = get_string("Plaintext: "); // String is from cs50.h

        printf("ciphertext: ");

        cipher_text(plaintext, key);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("\n");
}

void cipher_text(string plaintext, int key) // String is from cs50.h
{
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            printf("%c", ((plaintext[i] - 'a' + key) % 26) + 'a');
        }

        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            printf("%c", ((plaintext[i] - 'A' + key) % 26) + 'A');
        }

        else if (isalpha(plaintext[i]) == false) // False is from cs50.h
        {
            printf("%c", plaintext[i]);
        }
    }
}