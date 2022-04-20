#include <stdio.h>
int main()
{
    int days;
    printf("Select a day between 1 to 7: ");
    scanf("%d", &days);
    switch (days)
    {
    case 1:
        printf("Colour of the shirt is: Azure");
        break;
    case 2:
        printf("Colour of the shirt is: Beige");
        break;
    case 3:
        printf("Colour of the shirt is: Brick Red");
        break;
    case 4:
        printf("Colour of the shirt is: Champagne");
        break;
    case 5:
        printf("Colour of the shirt is: Desert sand");
        break;
    case 6:
        printf("Colour of the shirt is: Ivory");
        break;
    case 7:
        printf("Colour of the shirt is: Pear");
        break;
    default:
        printf("Invalid Day");
        break;
    }
    return 0;
}
