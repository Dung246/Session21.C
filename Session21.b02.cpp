#include <stdio.h>

int main() {
    FILE *fptr;
    char firstChar;
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    firstChar = fgetc(fptr);
    fclose(fptr);
    printf("Ky tu dau tien trong file la: %c\n", firstChar);

    return 0;
}

