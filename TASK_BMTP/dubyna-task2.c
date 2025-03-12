#include <stdio.h>

// Функція для підрахунку парних та непарних чисел у масиві
void count_even_odd(int arr[], int size, int *even_count, int *odd_count) {
    *even_count = 0;
    *odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*even_count)++;
        } else {
            (*odd_count)++;
        }
    }
}

int main() {
    int arr[20];
    int even_count, odd_count;

    // Введення 20 натуральних чис
