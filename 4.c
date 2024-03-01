#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("اظلاعات خود را وارد کنید: ");
    scanf("%s", input);
    char *token = strtok(input, ",");
    int index = 0;
    while (token != NULL) {
        printf("index %d: %s\n", index++, token);
        token = strtok(NULL, ",");
    }

    return 0;
}
