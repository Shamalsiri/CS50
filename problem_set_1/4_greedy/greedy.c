#include <stdio.h>

int main(void)
{
    float changeOwed;
    printf("Enter the changed owed: ");
    scanf("%f",&changeOwed);
    int totalCoins = 0;

    if(changeOwed >= 1)
    {
        int wholeNum = (int)changeOwed;
        changeOwed = changeOwed- wholeNum;    
    }

    int numQs;
    if(changeOwed >=.25)
    {
       numQs = changeOwed / .25;
       changeOwed = changeOwed - (numQs * .25);
       printf("Quaters: %d\n", numQs);
       totalCoins += numQs;
    }

    int numDs;
    if(changeOwed >=.10)
    {
       numDs = changeOwed / .10;
       changeOwed = changeOwed - (numDs * .10);
       printf("Dimes: %d\n", numDs);
       totalCoins += numDs;
    }

    int numNs;
    if(changeOwed >=.05)
    {
       numNs = changeOwed / .05;
       changeOwed = changeOwed - (numNs * .05);
       printf("Nickles: %d\n", numNs);
       totalCoins += numNs;
    }

    int numPs;
    if(changeOwed >=.01)
    {
       numPs = changeOwed / .01;
       changeOwed = changeOwed - (numPs * .01);
       printf("Pennys: %d\n", numPs);
       totalCoins += numPs;
    }

    printf("Total coins: %d\n",totalCoins);
}

