#include <stdio.h>

void removeDuplicates(char arr[], int size, char result[]);


int main() {
    int size;
    printf("enter szie\n");
    scanf("%d\n",&size);
    char result[size];
    char arr[size];
    printf("enter array elements");
    for (int i = 0; i < size; i++) {
        scanf("%c\n",&arr[i]);
    }
    removeDuplicates(arr,size,result);
    printf("after remoing duplicats fpor sorted array");
    for (int i = 0; i < size; i++) {
        printf("%c\n",result[i]);
    }

}
void removeDuplicates(char arr[], int size, char result[]) {

  int index = 0;

   if (size > 0) {
        result[index++] = arr[0];
   }
   for (int i = 1; i < size; i++) {
       if( arr[i - 1] != arr[i]) {
           result[index++] = arr[i];
       }
   }
   for (int i = index; i < size; i++) {
       arr[i] = '\0';
   }
   
}
