#include <stdio.h>
#include <stdlib.h>

void my_remove(char *d);
int main() {
    char str[50];
    gets(str);
    puts(str);
    my_remove(str);
    puts(str);
    return 0;
}
#include <ctype.h>
#include <string.h>
void my_remove(char *d) {
    char s[100];
    int i = 0, j = 0;
    while (d[i]) {
        if (isdigit(d[i]))
            s[j++] = d[i];
        i++;
    }
    s[j] = '\0';
    strcpy(d, s);
}