#include<stdio.h>

void rotationFunction(char *array);

int main() {
    char array[20]="test";
    printf("Enter message\n");
    //scanf("%c", &array[20]);
    rotationFunction(array);
    return 0;
}

void rotationFunction(char *array) {
    int i;
    for (i=0;i<5;i++) {
        printf("%c", array[i]);
    }
    
}