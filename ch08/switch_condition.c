#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("1");
        break;

    case 2:
        printf("2");
        break;
    default:
        break;
    }
}
