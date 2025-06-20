#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    while(rows<=0) {
        printf("Error, Please enter again, the number can not be negative\n");
        scanf("%d", &rows);
    }
    while(rows==0) {
        printf("Error, Please enter again, the number can not be 0\n");
        scanf("%d", &rows);
    }
    while(rows>1000) {
        printf("Error, Please enter again, the number can not >1000 \n");
    }
    printf("Enter number of columns:\n");
    scanf("%d", &cols);
    while(cols<=0) {
        printf("Error, Please enter again, the number can not be negative\n");
        scanf("%d", &rows);
    }
    while(cols==0) {
        printf("Error, Please enter again, the number can not be 0\n");
        scanf("%d", &rows);
    }
    while(cols>1000) {
        printf("Error, Please enter again, the number can not >1000 \n");
    }
    int arr[rows][cols];

    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            printf("Moi nhap arr[%d][%d]", i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int k,sum = 0;
    printf("Moi nhap hang can tinh tong");
    scanf("%d", &k);
    k--;
    if (k> cols) {
        printf("Hang can tinh khong ton tai\n");
    }else {
        for (int i = 0;i < rows;i++) {
            sum += arr[k][i];
        }
    }
    printf("sum = %d", sum);
    return 0;
}