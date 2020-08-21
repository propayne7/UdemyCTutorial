/* write a C program that creates a structure pointer and passes it to a function
 * create a struct named item with:
 *  - itemName - pointer
 *  - quantity - int
 *  - price - float
 *  - amount - float (stores quantity * price)
 *
 * create a function named readItem that takes a structure pointer of type item as a parameter
 *      - function should read in (from the user) a product name, price, and quantity
 *      - contents read in should be stored in the passed in structure to the function
 *
 * create a function named print item that takes as a parameter a structure pointer of type item
 *      - function prints the contents of the parameter
 *
 * main function should declare an item and a pointer to the item
 *      - you will need to allocate memory for the itemName pointer
 *      - the item pointer should be passed into both the read and print item functions
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item
{
    char * itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item * itemToRead)
{
    itemToRead->itemName = malloc(sizeof(char) * 100);

    printf("\nPlease enter the item name: ");
    scanf("%s", itemToRead->itemName);
    printf("\nPlease enter the quantity: ");
    scanf("%d", &itemToRead->quantity);
    printf("Please enter the price: ");
    scanf("%f", &itemToRead->price);

    itemToRead->amount = itemToRead->price * itemToRead->quantity;
}


void printItem(struct item * itemToPrint)
{
    printf("Item Name: %s\n", itemToPrint->itemName);
    printf("Quantity: % d\n", itemToPrint->quantity);
    printf("Price: %.2f\n", itemToPrint->price);
    printf("Amount: %.2f\n", itemToPrint->amount);
}


int main()
{
    struct item * newItem = malloc(sizeof(struct item));

    readItem(newItem);

    printItem(newItem);
    free(newItem->itemName);
    free(newItem);

    return 0;
}