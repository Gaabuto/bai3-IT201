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
    for(int i=0;i<n;i++) {
        printf("So thu %d = %d \n",i+1, arr[i]);
    }
    free(arr);
    return 0;
}
