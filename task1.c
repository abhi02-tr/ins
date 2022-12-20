// ceazer cipher

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    int key = 3;
    char s[20];
    char encoded[50];

    printf("Key: ");
    scanf("%d", &key);
    printf("String:");
    scanf("%s", &s);

    for(int i=0; i<strlen(s); i++) {
        encoded[i] = s[i] + key;
        if(encoded[i] > 123) {
            encoded[i] = 97 + (encoded[i] - 123);
        }
        printf("%c", encoded[i]);
    }

    // printf("Encoded String: %s", encoded);   

}