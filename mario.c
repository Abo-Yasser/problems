#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
     x = get_int("Height: ");
    } while (x < 1 || x > 8);

    for (int l = 1 ; l <= x ; l++)
    {
        for (int s = 1 ; s <= x - l;s++)
            printf(" ");

        for (int bl = 1 ; bl <= l; bl++)
            printf("#");

        printf("  ");

        for (int br = 1 ; br <= l; br++)
            printf("#");

        printf("\n");
    }
}
