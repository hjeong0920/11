#include <stdio.h>

int main(void){
    int i;
    int grade[5];

    for(i=0;i<5;i++)
    {
        printf("grade[%i]=", i);
        scanf("%d", &grade[i]);
    }

    int *p = grade;
    int sum=0;
    double average;

    for (i=0;i<5;i++)
    {
        sum +=*(p+1);
    }

    average = sum/5.0;

    printf("average: %f\n", average);

    return 0;
}