#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char c;
    fptr1 = fopen("bt01.txt", "r");
    if (fptr1 == NULL) {
        printf("Khong the mo file bt01.txt!\n");
        return 1;
    }
    fptr2 = fopen("bt06.txt", "w");
    if (fptr2 == NULL) {
        printf("Khong the mo file bt06.txt!\n");
        fclose(fptr1);
        return 1;
    }
    while ((c = fgetc(fptr1)) != EOF) {
        fputc(c, fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("Sao chep thanh cong!\n");
    return 0;
}
