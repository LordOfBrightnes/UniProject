#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_NAME_LENGTH 20

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int nameCount = 0;
    char inputName[MAX_NAME_LENGTH];
    strcpy(names[0], "Ali");
    strcpy(names[1], "Mohammad");
    strcpy(names[2], "Ramin");
    nameCount = 3;
    printf("نام خود را وارد کنید: ");
    scanf("%s", inputName);
    int found = 0;
    for (int i = 0; i < nameCount; i++) {
        if (strcmp(names[i], inputName) == 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("با موفقیت وارد شدید\n");
    } else {
       strcpy(names[nameCount], inputName);
        nameCount++;

     
        printf("نام جدید: %s\n", inputName);
    }

    return 0;
}