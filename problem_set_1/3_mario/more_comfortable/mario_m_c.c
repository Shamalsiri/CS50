#include <stdio.h>

int main(void)
{
    //Ints for number of steps, spaces, step
    int numSteps;
    int spaces;
    int step;
    
    //Get the Height as an input
    printf("Height: ");
    scanf("%d", &numSteps);
    
    //Check for a valid input
    while(numSteps < 0 ||  numSteps > 23)
    {
        printf("Error! Enter a Integer between 1 and 23\n");
        printf("Height: ");
        scanf("%d", &numSteps);
    }
    
    //Loop to go through the height, one level at a time
    for (int i = 0; i < numSteps; i++)
    {
        step = 2 + i;
        spaces = numSteps -step;
     
        //Loop to print the spaces
        for(int j=0; j<=spaces; j++)

        {
            printf(" ");
        }

        //Loop to print the first set of steps (#)
        for(int k=0; k<step; k++)
        {
            printf("#");
        }
        
        //Print the 3 spaces between each half pyramids 
        printf("  ");
    
        //Loop to print the second set of steps (#)
        for(int g=0; g<step; g++)
        {
            printf("#");
        }

        //End line after each of the levels
        printf("\n");
    }
    return 0;
}
