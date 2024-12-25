#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
    char chain[100];
    FILE *fptr;
    printf("Nhap chuoi : ");
    fgets(chain, 100, stdin); 
    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    fputs(chain, fptr);
    fclose(fptr);
    printf("Da ghi chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}
