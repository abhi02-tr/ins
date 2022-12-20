#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    char mono[27][2] = { { 'a', 'f' }, { 'b', 'a' }, { 'c', 'g' }, { 'd', 'u' }, {
        'e', 'n' }, { 'f', 'i' }, { 'g', 'j' }, { 'h', 'k' }, { 'i', 'l' }, {
        'j', 'm' }, { 'k', 'o' }, { 'l', 'p' }, { 'm', 'q' }, { 'n', 'r' }, {
        'o', 's' }, { 'p', 't' }, { 'q', 'v' }, { 'r', 'w' }, { 's', 'x' }, {
        't', 'y' }, { 'u', 'z' }, { 'v', 'b' }, { 'w', 'c' }, { 'x', 'd' }, {
        'y', 'e' }, { 'z', 'h' } };
    char s[20];
    char en[50];
    printf("Enter string: ");
    scanf("%s",s);

    for(int i=0; i<strlen(s); i++) {
        for(int j=0; j<27; j++) {
            if(s[i] == mono[j][0]) {
                en[i] = mono[j][1];
                break;
            }
        }
        printf("%c", en[i]);
    }
}