#include <stdio.h>
#include <string.h>

#define MAX_SV 100
struct SinhVien {
    int id;
    char name[50];
    int age;
};
int main() {
    FILE *fptr;
    struct SinhVien sv[MAX_SV];
    int n = 0, i;
    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    while (fscanf(fptr, "%d %s %d", &sv[n].id, sv[n].name, &sv[n].age) != EOF) {
        n++;
    }
    fclose(fptr);
    printf("Danh sach sinh vien:\n");
    for (i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
    }

    return 0;
}
