#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_STRINGS 10

void groupByLength(char* strings[], int size) {
    char grouped[MAX_LENGTH][MAX_STRINGS][MAX_LENGTH];
    int counts[MAX_LENGTH] = {0};

    for (int i = 0; i < size; i++) {
        int len = strlen(strings[i]);
        strcpy(grouped[len][counts[len]++], strings[i]);
    }

    for (int i = 0; i < MAX_LENGTH; i++) {
        if (counts[i] > 0) {
            printf("Length %d: ", i);
            for (int j = 0; j < counts[i]; j++) {
                printf("%s ", grouped[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    char* input[] = {"apple", "banana", "cherry", "date", "fig", "grape"};
    int size = sizeof(input) / sizeof(input[0]);
    groupByLength(input, size);
    return 0;
}
