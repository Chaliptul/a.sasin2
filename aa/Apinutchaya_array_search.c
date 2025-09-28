#include <stdio.h>
#include <string.h> // For strcmp()

int main() {
    char *words[] = {"king", "yushiro", "felix", "daiamn"};
    char search_word[] = "felix";
    int found_index = -1;

    for (int i = 0; i < sizeof(words) / sizeof(words[0]); i++) {
        if (strcmp(words[i], search_word) == 0) {
            found_index = i;
            break; // Word found, exit loop
        }
    }

    if (found_index != -1) {
        printf("'%s' found at index %d\n", search_word, found_index);
    } else {
        printf("'%s' not found in the array\n", search_word);
    }

    return 0;
}