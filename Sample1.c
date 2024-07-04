#include <stdio.h>
static int i;
static int i = 2;
static int i;
int add(int a, int b);
int main(){
    static int i;
    printf("%d",i);
    int result = add(2,3);
    printf("%d",result);  
}
int add(int a, int b) {
    static int c;
    static int d;
    return a + b;
}
