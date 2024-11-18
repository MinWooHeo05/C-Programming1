#include <stdio.h>
#include <math.h>

double calStanDev(double arr[]) {
    double sum = 0.0, mean, var = 0.0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
  
    mean = sum / 5;
    for (int i = 0; i < 5; i++)
        var += pow(arr[i] - mean, 2);
  
    var /= 5;
    return sqrt(var);
}

int hw8(void) {
    double num[5];
    printf("Enter 5 real num: ");
    for (int i = 0; i < 5; i++)
        scanf_s("%lf", &num[i]);
  
    double SD = calStanDev(num);
    printf("Standard Deviation = %lf\n", SD);
    return 0;
}
