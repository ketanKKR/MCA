#include <stdio.h>
#include <string.h>

void encryptDecrypt(char *input, char *key) {
    int inputLen = strlen(input);
    int keyLen = strlen(key);

    for (int i = 0; i < inputLen; i++) {
        input[i] = input[i] ^ key[i % keyLen];  // XOR each character with the corresponding character from the key
    }
}

int main() {
    char input[100], key[100];

    printf("Enter the text to encrypt/decrypt: ");
    scanf("%s", input);

    printf("Enter the encryption/decryption key: ");
    scanf("%s", key);

    encryptDecrypt(input, key);
    printf("Encrypted/Decrypted text: %s\n", input);

    // Decrypting the encrypted text to get the original text
    encryptDecrypt(input, key);
    printf("Decrypted text: %s\n", input);

    return 0;
}
