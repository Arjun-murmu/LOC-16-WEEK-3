#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}; // Initialize frequency array with 0

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        // Increment frequency for current character
        freq[(int) str[i]]++;
    }

    printf("Frequency of each character in the string:\n");
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' occurs %d times\n", (char) i, freq[i]);
        }
    }

    return 0;
}
