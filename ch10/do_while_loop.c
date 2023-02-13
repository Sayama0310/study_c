#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r;

    do
    {
        /* code */
        printf("半径 : ");
        scanf("%d", &r);
    } while (r < 0);

    printf("半径%dの円の面積は%fになります\n", r, 3.14 + r * r);
}
