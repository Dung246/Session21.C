#include <stdio.h>

int main() {
    FILE *fptr;
    int currentNum, i;
    char current[100];
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    printf("Nhap so dong ban muon ghi: ");
    scanf("%d", &currentNum);
    for (i = 0; i < currentNum; i++) {
        printf("Nhap dong thu %d: ", i+1);
        scanf(" %[^\n]", current); 
        fputs(current, fptr);
        fputs("\n", fptr);
    }
    fclose(fptr);
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    printf("\nNoiDung cua file bt05.txt:\n");
    while (fgets(current, 100, fptr) != NULL) {
        printf("%s", current);
    }
    fclose(fptr);

    return 0;
}
