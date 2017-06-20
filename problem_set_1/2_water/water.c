#include <stdio.h>

int main()
{
    //Doubles number of minutes, number of bottles
    double numOfMins;
    double numOfBottles;
    
    
    //Get number of minutes as a double input     
    printf("Minutes: ");
    scanf("%lf",&numOfMins);
    
    //Check to see if the input is valid
    while (numOfMins <0)
    {
        printf("ERROR! Re-enter data \n");
        printf("Minutes: ");
        scanf("%lf",&numOfMins);
    }
    
    //Calculate the number  of Bottles
    numOfBottles = numOfMins *12;

    //Print the number of bottles
    printf("Bottles: %f\n",numOfBottles);

    return 0;
}

