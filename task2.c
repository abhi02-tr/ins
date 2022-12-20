// ceazer cipher

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    int key = 3;
    char s[20];
    char decoded[50];

    printf("Key: ");
    scanf("%d", &key);
    printf("String:");
    scanf("%s", &s);

    for(int i=0; i<strlen(s); i++) {
        decoded[i] = s[i] - key;
        if(decoded[i] < 97) {
            decoded[i] = 123 - (97 - decoded[i]);
        }
        printf("%c", decoded[i]);
    }

    // printf("Encoded String: %s", encoded);   

}