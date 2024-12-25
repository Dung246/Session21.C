#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
};
int main() {
    FILE *fptr;
    int n, i;
    struct SinhVien sv;
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i+1);
        printf("Nhap ID: ");
        scanf("%d", &sv.id);
        printf("Nhap ten: ");
        scanf(" %[^\n]", sv.name); 
        printf("Nhap tuoi: ");
        scanf("%d", &sv.age);
        fprintf(fptr, "%d %s %d\n", sv.id, sv.name, sv.age);
    }
    fclose(fptr);
    printf("Da luu thong tin sinh vien vao file thanh cong!\n");

    return 0;
}
