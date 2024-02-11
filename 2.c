#include <stdio.h>

int main() {
    char first_name[50];
    char last_name[50];
    
    printf("First Name: ");
    scanf("%s", first_name);
    
    printf("Last Name: ");
    scanf("%s", last_name);

    printf("First Name in ASCII (Decimal): ");
    for (int i = 0; first_name[i] != '\0'; i++) {
        printf("%d ", first_name[i]);
    }
    printf("\n");

    printf("Last Name in ASCII (Decimal): ");
    for (int i = 0; last_name[i] != '\0'; i++) {
        printf("%d ", last_name[i]);
    }
    printf("\n");

      printf("First Name in ASCII (Hexadecimal): ");
    for (int i = 0; first_name[i] != '\0'; i++) {
        printf("%X ", first_name[i]);
    }
    printf("\n");
        printf("Last Name in ASCII (Hexadecimal): ");
    for (int i = 0; last_name[i] != '\0'; i++) {
        printf("%X ", last_name[i]);
    }
    printf("\n");
    return 0;
}
