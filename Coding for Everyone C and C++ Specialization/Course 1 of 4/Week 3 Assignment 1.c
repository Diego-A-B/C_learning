#include <stdio.h>
#include <math.h>

void print_sine_cosine_table(double start, double end, double step) {
    printf("Value\t\tSine\t\tCosine\n");
    printf("-----\t\t----\t\t------\n");

    for (double x = start; x <= end; x += step) {
        printf("%lf\t%lf\t%lf\n", x, sin(x), cos(x));
    }
}

int main() {
    double start = 0.0;
    double end = 1.0;
    double step = 0.01;  

    print_sine_cosine_table(start, end, step);

    return 0;
}
