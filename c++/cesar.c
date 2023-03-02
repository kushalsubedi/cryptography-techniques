
#include <stdio.h>
#include <ctype.h>

char *caesarEncrypt(char[], int);
char *caesarDecrypt(char[], int);

int main()
{
    int choice, key;
    char plain[1000], cipher[1000];

    printf("Enter your choice");
    do
    {

        printf("\n\nEnter...\n  1 to encrypt\n  2 to decrypt \n  3 to exit");

        printf("Choice = ?");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter plain text message: ");
            scanf("%s", plain);
            printf("Enter key: ");
            scanf("%d", &key);
            printf("Encrypted message: %s", caesarEncrypt(plain, key));
            break;
        case 2:

            printf("Enter cipher text message: ");
            scanf("%s", cipher);
            printf("Enter key: ");
            scanf("%d", &key);
            printf("Decrypted message: %s", caesarDecrypt(cipher, key));
            break;
        default:
            printf("Exit");
        }
    } while (choice != 3);
    return 0;
}

char* caesarEncrypt(char *plain, int key)
{
    int i = 0;
    while (plain[i] != '\0')
    {
        plain[i] = toupper(plain[i]);
        plain[i] = ((plain[i] - 65 + key) % 26) + 65;
        i++;
    }

    return plain;
}

char* caesarDecrypt(char *cipher, int key)
{
    int i = 0;
    while (cipher[i] != '\0')
    {
        cipher[i] = toupper(cipher[i]);
        cipher[i] = ((cipher[i] - 65 - key + 26) % 26) + 65;
        i++;
    }

    return cipher;
}