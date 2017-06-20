#include <stdio.h>

int main(void)
{
    //Ints for number of steps, spaces, step 
    int height;
    int spaces;
    int step;
    
    //Get the Height as an input
    printf("Height: ");
    scanf("%d", &height);

    //Check for a valid input
    while(height < 0 ||  height > 23)
    {
        printf("Error! Enter a Integer between 1 and 23\n");
        printf("Height: ");
        scanf("%d", &height);
    }
    
    //Loop to go through the height, one level at a time
    for (int i =0; i<height; i++)
    {
        step = 2+i;
        spaces = height -step;
     
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
        //End line after each of the levels
        printf("\n");
        
    }
    return 0;
}
