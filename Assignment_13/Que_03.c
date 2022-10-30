/*  Question
    Using Switch statement, write a program that displays the following
    menu for the food items available to take order from the customer:
    1: Burger
    2: French Fries
    3: Pizza
    4: Sandwiches
    5: Enter some valid choice

    The program inputs the type of food and quantity. It finally displays
    the total charges for the order according to following criteria:
    Burger = Rs. 200
    French Fries= Rs. 50
    Pizza= Rs. 500
    Sandwiches= Rs. 150

    For example: Initially your program should print the menu. When
    user enters its choice, say 1 for burger, then it should ask for the
    quantity of burgers. When user enters the quality, then depending on
    the quantity it should display total charges.

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter choice number between 1 - 5 \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("You have choosen \"Burger\"\n");
        printf("Price = Rs.200 per unit \n\n");
        printf("Enter the quantity you want to order \n");
        int Burger;
        scanf("%d", &Burger);
        printf("Your total amount is Rs. %d", Burger * 200);
        break;
    }
    case 2:
    {
        printf(" You have choosen \"French fries\"\n");
        printf("Price = Rs.50 per packet \n\n");
        printf("Enter the quantity you want to order  \n");
        int French_fries;
        scanf("%d", &French_fries);
        printf("Your total amount is Rs. %d", French_fries * 50);
        break;
    }
    case 3:
    {
        printf(" You have choosen \"Pizza\"\n");
        printf("Price = Rs.500 per unit \n\n");
        printf("Enter the quantity you want to order  \n");
        int Pizza;
        scanf("%d", &Pizza);
        printf("Your total amount is Rs. %d", Pizza * 500);
        break;
    }
    case 4:
    {
        printf(" You have choosen \"Sandwiches\"\n");
        printf("Price = Rs.150 per unit \n\n");
        printf("Enter the quantity you want to order  \n");
        int Sandwiches;
        scanf("%d", &Sandwiches);
        printf("Your total amount is Rs. %d", Sandwiches * 150);
        break;
    }
    case 5:
    {
        printf("Enter some valid choice \n");
        break;
    }
    }

    return 0;
}
