#include <stdio.h>

int main(void)
{
    int numSteps;
    int spaces;
    int step;
    
    printf("Height: ");
    scanf("%d", &numSteps);

    while(numSteps < 0 ||  numSteps > 23)
    {
        printf("Error! Enter a Integer between 1 and 23\n");
        printf("Height: ");
        scanf("%d", &numSteps);
    }
    
    for (int i =0; i<numSteps; i++)
    {
        step = 2+i;
        spaces = numSteps -step;
        
        for(int j=0; j<=spaces; j++)

        {
            printf(" ");
        }

        for(int k=0; k<step; k++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    return 0;
}
