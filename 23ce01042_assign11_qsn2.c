#include <stdio.h>
#include <string.h>

void duplicate(char s[]) {
    int len = strlen(s);
    int top = -1;
    char final[len]; //final array that will be displayed
    
    for (int i = 0; i < len; ++i) {
        if (top >= 0 && s[i] == final[top]) {
            --top;
        } else {
            final[++top] = s[i];
        }
    }
    final[top + 1] = '\0'; 
    strcpy(s, final); 
}

int main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    duplicate(str);
    printf("Final string after duplicate removals: %s\n", str);
    return 0;
}