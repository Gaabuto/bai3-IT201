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
    int mainLine = 0, backLine = 0,j = 1;
    for(int i=0;i<rows;i++) {
        j = i;
        mainLine +=  arr[i][j] ;
        }
    printf("Duong cheo chinh co tong la %d\n", mainLine);
    if (rows == cols) {
        for(int i=rows;i>0;i--) {
            j++;
            backLine +=arr[i][j]  ;
        }
        printf("Duong cheo phu co tong la %d", backLine);
    }else{
        printf("Khong co duong cheo phu");
    }

    return 0;
}