#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char data1[50], data2[50], data3[50]; 
    printf("اطلاعات خود را وارد کنید: ");
    scanf("%s", input);
    sscanf(input, "%[^,],%[^,],%s", data1, data2, data3);
    printf("index 0: %lu\n len", strlen(data1));
    printf("index 1: %lu\n len", strlen(data2));
    printf("index 2: %lu\n len", strlen(data3));
    
    return 0;
}
