#include <stdio.h>

void mergeSort(int arr[], int size);
void mergeRec(int left[], int leftSize, int right[], int rightSize, int arr[]);

int main() {
    int size;
    printf("enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    mergeSort(arr, size);

    printf("after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void mergeSort(int arr[], int size) {
    if (size < 2) 
       return; 

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    mergeRec(left, mid, right, size - mid, arr);
}

void mergeRec(int left[], int leftSize, int right[], int rightSize, int arr[]) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = left[i++];
    }

    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}
