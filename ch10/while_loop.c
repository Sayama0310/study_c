#include <stdio.h>

int main(int argc, char const *argv[])
{
    int money = 2;
    int day = 0;
    while (money < 100000)
    {
        printf("%d 日目 : ¥%d\n", day, money);
        day++;
        money = money * 2;
    }
    printf("%d 日目 に ¥%d を超えました。\n", day, 100000);
}
