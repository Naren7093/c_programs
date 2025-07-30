#include <stdio.h>

int main() {
    float english, telugu, maths, social, hindi;
    float total, average, percentage;

    printf("Enter marks for English, Telugu, Maths, Social, and Hindi:\n");
    scanf("%f %f %f %f %f", &english, &telugu, &maths, &social, &hindi);

    total = english + telugu + maths + social + hindi;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total Marks   = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage    = %.2f%%\n", percentage);

    return 0;
}



