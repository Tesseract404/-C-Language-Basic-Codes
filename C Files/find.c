#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
        printf("Frequency of %c = %d", ch, count);
        ++count;
    }


    return 0;
}
