#include<stdio.h>

void encode (char s[]) {
    int k = 25;
    for(int i = 0; s[i] != '\0'; i++) {
        if((s[i] >= 'a' && s[i] <= 'z')) {
            s[i] = ((s[i] + k - 97) % 26 + 97);
        }
        if((s[i] >= 'A' && s[i] <= 'Z')) {
           s[i] = ((s[i] + k - 65) % 26 + 65);
        }
        printf("%c", s[i]);
    }
}

int main () {
    char s[]= "Bye, A";
    encode(s);

    return 0;
}
