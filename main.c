#include <stdio.h>

void printPattern(int lines, int repeats) {
    for (int repeat = 0; repeat < repeats; repeat++) {
        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < i * 2; j++) {
                printf(" ");
            }
            printf("|||||||||||||||||||||||||\n");
        }
        for (int i = lines - 2; i >= 0; i--) {
            for (int j = 0; j < i * 2; j++) {
                printf(" ");
            }
            printf("|||||||||||||||||||||||||\n");
        }
    }
}

int main() {
    int lines = 6;
    int repeats = 2;

    printPattern(lines, repeats);

    return 0;
}
