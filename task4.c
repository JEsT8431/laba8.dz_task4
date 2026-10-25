#include <stdio.h>
#include <math.h>
#include <locale.h>

int task_4() {
    setlocale(LC_ALL, "RUS");
    double a, b, h, x, y;
    double min_y, max_y, min_x, max_x;
    int is_first = 1; 

    printf("Введите начало интервала a: ");
    scanf("%lf", &a);

    printf("Введите конец интервала b: ");
    scanf("%lf", &b);

    printf("Введите шаг h: ");
    scanf("%lf", &h);

    if (h <= 0) {
        printf("Ошибка: шаг должен быть больше нуля!\n");
        return 1;
    }

    printf("\n    x        y\n");
    printf("--------------------\n");

    for (x = a; x <= b + (h / 1000.0); x = x + h) {

        y = exp(x) - 2.0 - pow(x, 2);

        printf("%8.2f  %8.4f\n", x, y);

        if (is_first) {

            min_y = y; max_y = y;
            min_x = x; max_x = x;
            is_first = 0;
        }
        else {
            if (y < min_y) {
                min_y = y;
                min_x = x;
            }
            if (y > max_y) {
                max_y = y;
                max_x = x;
            }
        }
    }

    printf("\n--- Результаты ---\n");
    printf("Минимальное значение: %.4f при x = %.2f\n", min_y, min_x);
    printf("Максимальное значение: %.4f при x = %.2f\n", max_y, max_x);

    return 0;
}