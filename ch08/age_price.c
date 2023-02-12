#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Your age : ");
    scanf("%d", &age);

    if (age <= 3)
    {
        printf("price : ¥0\n");
    }
    else if (age <= 12)
    {
        printf("price : ¥250\n");
    }
    else
    {
        printf("price : ¥400\n");
    }
}
