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
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    // Using gets for last two rows
    printf("Enter third class: ");
    gets(classes[2]);

    printf("Enter fourth class: ");
    gets(classes[3]);


    char longListOfClasses[80];

    printf("\nEnter a long list of class names separated by semicolons:\n");
    scanf("%s", longListOfClasses);
    printf("You entered: %s\n", longListOfClasses);
    char* currentIndex = longListOfClasses;
    char copyTarget[3][10];
    char* semiColonBreak;

    for (int i = 0; i < 2; i++) {
        printf("still working on it\n");
        semiColonBreak = strchr(currentIndex, ';');
        strncpy(copyTarget[i], currentIndex, semiColonBreak - currentIndex);
        copyTarget[i][semiColonBreak - currentIndex] = '\0'; // Null-terminate the string
        currentIndex = currentIndex + (semiColonBreak - currentIndex) + 1;
    }
    // Copy the last class name after the final semicolon
    strcpy(copyTarget[2], currentIndex);

    char tokenCopyTarget[3][10];
    char* tokenString[80];
    strcpy(tokenString, longListOfClasses);

    char* token = strtok(tokenString, ";");
    int i = 0;
    while (token != NULL && i < 3) {
        strcpy(tokenCopyTarget[i], token);
        token = strtok(NULL, ";");
        i++;
    }


    char strstrTarget[3][10];
    char* startPos = longListOfClasses;
    char* endPos;

    for (int i = 0; i < 2; i++) {
        endPos = strstr(startPos, ";");
        strncpy(strstrTarget[i], startPos, endPos - startPos);
        strstrTarget[i][endPos - startPos] = '\0';
        startPos = endPos + 1;
    }
    strcpy(strstrTarget[2], startPos);

    printf("\nResults using strstr:\n");
    for (int i = 0; i < 3; i++) {
        printf("Class using strstr: %s\n", strstrTarget[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Class from manual parsing: %s\n", tokenCopyTarget[i]);
    }

    return 0;
}