#include <stdio.h>

#pragma pack(1)
struct abc {
    char a;
    int c;
    char b;
};
int main() {
      struct abc var1;
      printf("size = %d",sizeof(var1));
}