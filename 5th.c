#include <stdio.h>

void char_cesar(char *ch, int shift){
    *ch += shift;
    if(*ch > 122){
        for(int i = 0; *ch > 122; i++){
            *ch = 97 + (*ch - 123);
        }
    }
}

int main()
{
    char ch;
    int shift;
    scanf("%c%d", &ch, &shift);
    char_cesar(&ch, shift);
    printf("%c\n", ch);
    return 0;
}
