#include <stdio.h>
int binarySearch(int arr[], int size, int target);
int main() {
    int size;
    printf("enter size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter arra elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    
    int target;

    printf("enter target value\n");
    scanf("%d",&target);
    int result = binarySearch(arr,size,target);
    printf("result : %d", result);
}
int binarySearch(int arr[], int size, int target) {
    int i = 0;
    int j = size - 1;

    while (i <= j) {
        int mid = i + ( j - i) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return -1;
}