#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int a, n, i;
    double product = 1.0; 

    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        double ni = (double)i;

        product = product * (a - ni * n);
    }

    printf("Результат: %.2f\n", product);

    return 0;
}