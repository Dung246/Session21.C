#include <stdio.h>

int main() {
    FILE *fptr;
    char firstGrade[100];
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    fgets(firstGrade, 100, fptr);
    fclose(fptr);
    printf("Dong dau tien trong file la: %s", firstGrade);

    return 0;
}
