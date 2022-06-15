#include <stdio.h>

int main()
{
    char planet;
    char *pName;
    double pMod;
    float earthWeight;
    float targetWeight;

    printf("Please enter your Earth Weight: ");
    scanf("%f", &earthWeight);
    printf("\nPlease enter Planet you want to fight on: ");
    scanf("%c", &planet);

    switch (planet)
    {
    case '1':
        pName = "Mercury";
        pMod = 0.38;
        break;
    case '2':
        pName = "Venus";
        pMod = 0.91;
        break;
    case '3':
        pName = "Mars";
        pMod = 0.38;
        break;
    case '4':
        pName = "Jupiter";
        pMod = 2.34;
        break;
    case '5':
        pName = "Saturn";
        pMod = 1.06;
        break;
    case '6':
        pName = "Uranus";
        pMod = 0.92;
        break;
    case '7':
        pName = "Neptune";
        pMod = 1.19;
        break;
    default:
        printf("Error! Please check your entries and retry...\n");
        return 1;
    }

    targetWeight = earthWeight * pMod;

    printf("Your Earth Weight = %.2f. You chose to fight on %s, where your local weight would be %.2f. Good Luck!\n", earthWeight, pName, targetWeight);

    return 0;
}