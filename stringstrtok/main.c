#include <stdio.h>
#include <string.h>

int main() {
    char classes[4][10];  // 2D array: 4 rows, 10 characters per class names
    
    printf("Enter class names (max 9 characters each):\n");
    
    // Using scanf for first two rows
    printf("Enter first class: ");
    scanf("%s", classes[0]);
    fflush(stdin);
    
    printf("Enter second class: ");
    scanf("%s", classes[1]);
    fflush(stdin);
    
    // Using gets for last two rows
    printf("Enter third class: ");
    gets(classes[2]);
    fflush(stdin);
    
    /*
    
    printf("Enter fourth class: ");
    gets(classes[3]);
    */
    // Display the entered classes
    printf("\nEntered classes are:\n");
    for(int i = 0; i < 4; i++) {
        printf("Class %d: %s\n", i+1, classes[i]);
    }
    
    return 0;
}