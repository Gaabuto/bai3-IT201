#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Please enter array size: ");
    scanf("%d", &n);
    while (n>1000||n<0) {
        printf("Error, Please enter again\n");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Please enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
        while(arr[i]<0) {
            printf("Error, Please enter again, the number can not be negative\n");
            scanf("%d", &arr[i]);
        }
        while(arr[i]==0) {
            printf("Error, the number cannot be 0, please enter again array element %d: ", i+1);
            scanf("%d", &arr[i]);
        }
    }

    int newN;
    printf("Please enter plus arr: ");
    scanf("%d", &newN);
    while (newN>1000||newN<0) {
        printf("Error, Please enter again, the number can not be >1000 or <0\n");
    }
   arr=(int *)realloc(arr,newN*sizeof(int));
    for(int i=n;i<n+newN;i++) {
        printf("Please enter plus array element %d: ", i+1);
        scanf("%d", &arr[i]);
        while(arr[i]<0) {
            printf("Error, Please enter again, the number can not be negative\n");
            scanf("%d", &arr[i]);
        }
        while(arr[i]==0) {
            printf("Error, Please enter again, the number can not be 0");
            scanf("%d", &arr[i]);
        }

    }
    for(int i=0;i<n+newN;i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
