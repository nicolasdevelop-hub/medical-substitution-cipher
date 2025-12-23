#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Checks whether exactly one argument (the key) was provided.
    if (argc != 2)
    {
        printf("error: enter only the command and the key\n");
        return 1;
    }

    string key = argv[1];

    // Checks whether the key has 26 characters.
    if (strlen(key) != 26)
    {
        printf("the key must contain 26 characters\n");
        return 1;
    }

    // Checks whether all characters are letters and whether there are no repetitions.
    bool used[26] = {false};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("the key must contain only letters\n");
            return 1;
        }

        int index = toupper(key[i]) - 'A';

        if (used[index])
        {
            printf("the key must not contain repeated letters\n");
            return 1;
        }

        used[index] = true;
    }

    // asks for the diagnosis
    string diagnosis = get_string("diagnosis: ");

    printf("encoded diagnosis: ");

    // encodes the text
    for (int i = 0; diagnosis[i] != '\0'; i++)
    {
        char c = diagnosis[i];

        if (isalpha(c))
        {
            bool uppercase = isupper(c);
            int pos = toupper(c) - 'A';
            char substitute = key[pos];

            if (uppercase)
            {
                printf("%c", toupper(substitute));
            }
            else
            {
                printf("%c", tolower(substitute));
            }
        }
        else
        {
            // keeps spaces, numbers, and punctuation
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
