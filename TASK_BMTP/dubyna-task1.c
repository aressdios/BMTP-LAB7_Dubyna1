#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char sentence[MAX_LENGTH];
    printf("Введіть речення (яке закінчується '.' або '!'): \n");
    fgets(sentence, MAX_LENGTH, stdin);

    // Перевірка, чи закінчується рядок потрібним символом
    int length = strlen(sentence);
    if (length == 0 || (sentence[length - 2] != '.' && sentence[length - 2] != '!')) {
        printf("Помилка: речення повинно закінчуватися '.' або '!'!\n");
        return 1;
    }

    // Підрахунок символів 'e'
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (sentence[i] == 'e') {
            count++;
        }
    }

    // Виведення результату
    if (count > 0) {
        printf("Кількість символів 'e' у реченні: %d\n", count
