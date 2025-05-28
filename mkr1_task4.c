#include <stdio.h>
#include <math.h> // Для використання функцій sqrt та pow

int main() {
   // Обчислення чисельника і знаменника першої частини
    double numerator1 = sqrt(5 + 5 + pow(5, 2)); // sqrt(35) 
    double denominator1 = sqrt(7 + 7 + pow(7, 2)); // sqrt(63)

    double part1 = numerator1 / denominator1; //// це частка (ділення) чисельника на знаменник

   // Обчислення чисельника і знаменника другої частини
    double numerator2 = sqrt(6 + 6 + pow(6, 2)); // sqrt(48)
    double denominator2 = sqrt(9 + 9 + pow(9, 2)); // sqrt(99)
    double part2 = numerator2 / denominator2;

    // Підсумок
    double result = part1 + part2; 

    // Виведення результатів
    printf("Перша частина: %.6lf\n", part1);
    printf("Друга частина: %.6lf\n", part2);
    printf("Загальний результат: %.6lf\n", result);

    return 0;
} 