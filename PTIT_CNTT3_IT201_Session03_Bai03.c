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
    int *arr=(int *)malloc(sizeof(int));
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
    float avg = 0;
    for(int i=0;i<n;i++) {
        if (arr[i] %2 == 0) {
            avg+=arr[i];
        };
    }
    avg = avg/n;
    printf("The average is: %.2f", avg);
    free(arr);
    return 0;
}
