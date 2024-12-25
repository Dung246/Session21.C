#include <stdio.h>
#include <string.h>

int main() {
    char newChain[100];
    FILE *fptr;
    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    printf("Nhap chuoi ban muon ghi them: ");
    fgets(newChain, 100, stdin);
    fputs(newChain, fptr);
    fclose(fptr);

    printf("Da ghi them chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}
