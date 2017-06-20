#include <stdio.h>

int main()
{
    double numOfMins;
    double numOfBottles;
    
    
    
    printf("Minutes: ");
    scanf("%lf",&numOfMins);
    
    while (numOfMins <0)
    {
        printf("ERROR! Re-enter data \n");
        printf("Minutes: ");
        scanf("%lf",&numOfMins);
    }

    numOfBottles = numOfMins *12;

    printf("Bottles: %f\n",numOfBottles);

    return 0;
}

