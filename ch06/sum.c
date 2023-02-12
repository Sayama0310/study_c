#include <stdio.h>

int main(int argc, char const *argv[])
{
    int min, max, sum;
    printf("最小値,最大値 >> ");
    scanf("%d,%d", &min, &max);
    sum = ((min + max) * (max - min + 1)) / 2;
    printf("%d ~ %d までの合計値は %d です\n", min, max, sum);
}
