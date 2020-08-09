/* Illustrataion of array of structure using deck card example */
#include<stdio.h>

struct Card
{
    /* Data member of cards: */
    int face;
    int shape;
    int color;
};

/* Main function execution start here: */
int main()
{
    /* This will form a array of structure */
    struct Card deck[52] = {
        {1,0,0}, {1,1,0}, {2,1,1}
        }; 
    
    printf("%d\n",deck[0].face);
    printf("%d\n",deck[1].color);
    /*Checking the size of structure */
    printf("Size of sturcture is: %d byte\n",sizeof(struct Card));

    return 0;
}
