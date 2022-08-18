#include <stdio.h>
int main()
{
    printf("\n\n");
    int n = 7;

    // Hut Roof loop
    for (int row = 1; row <= n; row++)
    {
        for (int s = 1; s <= n - row; s++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Hut body loop
    for (int row = 1; row <= 5; row++)
    {

        // Left wall
        for (int col = 1; col <= 3; col++)
        {
            printf("*");
        }

        // Space
        for (int s = 1; s <= 7; s++)
        {
            printf(" ");
        }

        // Right Wall
        for (int col = 1; col <= 3; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}