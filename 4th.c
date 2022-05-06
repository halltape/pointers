#include <stdio.h>

void char_register(char *ch, int fl){
    if(*ch > 96 && *ch < 123 && fl == 1){
        *ch -= 32;
    } else if(*ch > 64 && *ch < 91 && fl == 0){
        *ch += 32;
    }
}

int main (){
    int fl;
    char ch;
    scanf("%c%d", &ch, &fl);
    char_register(&ch, fl);
    printf("%c", ch);
    return 0;
}