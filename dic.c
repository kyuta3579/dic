#include <stdio.h>

int strcmp(char *str1, char *str2) {
    while(*str1 !='\0' || *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        } else if (*str1 == *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
}

void dictsort(char **ss, int strnum) {
    int is_ascend = 0;
    for (int i = 0; i < strnum; i++){
        for (int j = 0; j < strnum; j++){
            if (strcmp(*(ss + i), *(ss + j)) == -1){
                char *tmp_s;
                tmp_s = *(ss + i);
                *(ss + i) = *(ss + j);
                *(ss + j) = tmp_s;
            }
        }
    }
}

int main(void){
    char *colors[] = {"white", "black", "red", "pink", "orange", "blue", "yellow", "green", "purple", "gray", "brown", "gold", "silver"};
    
    dictsort(colors, 13);
    for (int i = 0; i < 13 ; i++){
        printf("%s\n", *(colors + i));
    }
    
    return 0;
}