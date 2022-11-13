#include <stdio.h>
#define isalpha(c) ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? printf("Alphabetical character") : printf("Not a Aplhabetical Character")
int main()
{
    char ch;
    int ch1;
    printf("Enter a character : ");
    scanf("%c", &ch);
    ch1 = ch;
    isalpha(ch1);
    return 0;
}
