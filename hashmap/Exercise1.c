#include <stdio.h>

int arr[100];

void put(int key, int value) {
    arr[key] = value + 1;  
}

int get(int key) {
    return arr[key] - 1; 
}

void remove(int key) {
    arr[key] = 0;  
}

void display() {
    for (int i = 0; i < 100; i++) {
        if (arr[i] != 0) {
            printf("Key: %d, Value: %d\n", i, arr[i] - 1);
        }
    }
}

int main() {

    put(10, 100);
    put(20, 200);
    put(30, 300);

    printf("Value at key 10: %d\n", get(10));
    printf("Value at key 20: %d\n", get(20));
    printf("Value at key 30: %d\n", get(30));

    printf("Removing key 20\n");
    remove(20);

    printf("Value at key 20 after removal: %d\n", get(20));

    printf("Displaying all key-value pairs:\n");
    display();

    return 0;
}
