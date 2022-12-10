#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    gets(str);
    for (size_t i = strlen(str); i > 0; i--){
        printf("%c", str[i-1]);
    }
    return 0;
}
