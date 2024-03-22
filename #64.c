// C program to calculatre Standard Deviation.

#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[5];
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i=i+1)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f\n", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
 float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; i=i+1) {
        sum += data[i];
    }
    mean = sum / 5;
    printf("\nThe sum of 5 elements: %f",sum);
    printf("\nThe mean of 5 elements: %f",mean);
    for (i = 0; i < 5; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 5);
}
