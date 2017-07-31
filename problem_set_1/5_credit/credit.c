#include<stdio.h>
#include<string.h>

int main(void)
{
    //1 -- American Express
    //2 -- MasterCard
    //3 -- Visa
    //4 -- invalid
    int catergory;
    //bool valid;
    long long cCardNum;
    printf("Enter Card number: ");
    scanf("%lld", &cCardNum);
    
    while(cCardNum <= 99999999999999 || cCardNum >= 10000000000000000)
    {
        printf("not valid\n");
        printf("Enter valid Credit Card number (16-digits): ");
        scanf("%lld", &cCardNum);
    }
    int numDigits;
    int sum = 0;
    char cardNum[17];
    sprintf(cardNum, "%lld", cCardNum);
    
    if (cCardNum <= 999999999999999)
    {
        numDigits = 15;
        for(int i = 1; i<numDigits-2; i++)
        {
            int value = cardNum[i] - '0';
            if((value *2) > 10)
            {
                sum += ((value * 2) - 10) + 1;
            }
            else
            {
                sum += value * 2;
            }
            i++;
        }
        for(int i = 0; i<numDigits; i++)
        {
            int value = cardNum[i]-'0';
            sum += value;
            i++;
        }
    }
    else
    {
        numDigits =16;
        for(int i = 1; i < numDigits; i++)
        {
            int value = cardNum[i] - '0';
            if((value * 2) > 10)
            {
                sum += ((value * 2) - 10) + 1;
            }
            else
            {
                sum += value * 2;
            }
            i++;
        }
        for(int i = 0; i<numDigits; i++)
        {
            int value = cardNum[i]-'0';
            sum += value;
            i++;
        }
    }

    if (sum%10 == 0)
    {
    
        printf("%s\n", cardNum);
        if (cardNum[0] == '3' && (cardNum[1] == '4' || cardNum[1] == '7'))
        {
            catergory = 1;
            printf("American Express\n");
        }
        else if (cardNum[0] == '5' && (cardNum[1] == '1' || cardNum[1] == '2' ||
                  cardNum[1] == '3' || cardNum[1] == '4' || cardNum[1] == '5'))
        {
            catergory = 2;
            printf("MasterCard\n");
        }
        else if (cardNum[0] == '4' && cardNum[1] == '4' && 
            cardNum[2] == '4' && cardNum[3] == '4')
        {
            catergory = 3;
            printf("Visa\n");
        }
        else
        {
            catergory = 4;
            printf("invalid\n");
        }
    }
    else
    {
        printf("invalid\n");
    }
}
