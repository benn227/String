#include<stdio.h>

void rotationFunction(char *array, int n);

int main() {
    int n;
    char array[]="abc";
    n=sizeof(array)/sizeof(array[0]);
    rotationFunction(array, n);
    return 0;
}

void rotationFunction(char *array, int n) {
    int i;
    for (i=0;i<n;i++) {
        printf("%c", array[i]);
    }
}