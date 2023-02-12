#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    printf("数値を入力してください ");
    scanf("%d", &value);
    if (value > 100)
    {
        printf("100より大きいため調整します");
        value = 100;
    }
    printf("value : %d\n", value);
}
