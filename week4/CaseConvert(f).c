#include <stdio.h>
int main(){
    char txt;
    scanf("%c", &txt);
    if (txt <= 90 && txt >= 65) {
        printf("%c", txt+32);
    }
    else if (txt <= 122 && txt >= 97) {
        printf("%c", txt-32);
    }
    else {
        printf("error");
    }
    return 0;
}

//use ascii