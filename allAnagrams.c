#include <stdio.h>>

int getSize(char *str) {
    int count = 0;
    while (str != '\0') {
        count++;
        str++;
    }
    return count;
}

void findAllAnagram(char str[]) {
    int hash[128] = {0};
    int size = getSize(str);
    int freq[128] = {0};
    for (int j = 0; j < )
    for (int i = 0; i < size; i++) {
        hash[str[i]]++;
         
    }
}

int main() {
    char str[100];
    printf("enter string\n");
    scanf("%s", str);
    return 0;
}
