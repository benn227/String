#include<stdio.h>

void rotationFunction(char *array, int n);

int main() {
    int n, i;
    char array[20];
    printf("Enter message");
    scanf("%c", &array[]);
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