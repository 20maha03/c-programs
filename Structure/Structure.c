#include <stdio.h>


struct abc {
    char a;
    char b;
    int c;
};
int main() {
      struct abc var1;
      printf("size = %d",sizeof(var1));
}