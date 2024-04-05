#include<stdio.h>
#include<string.h>

int main() {
    char arr[100];
    int top=-1;

    printf("Enter a string:");
    gets(arr);

    top=strlen(arr)-1;

    for(int i=top;i>=0;i--)              //reversing
    {
        printf("%c",arr[i]);
    }
    return 0;
}