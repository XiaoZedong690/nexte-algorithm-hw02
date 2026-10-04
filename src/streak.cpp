#include <stdio.h>
int main()
{
    int n; // 声明整型变量
    int value = 0;
    int current_streak = 0;
    int max_streak = 0;
    scanf("%d", &n);

    if (n < 1 || n > 200000) // 判断射击次数
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        if (value == 1)
        {
            current_streak++;
        }
        else
        {
            if (current_streak > max_streak)
            {
                max_streak = current_streak;
            }
            current_streak = 0;
        }
    }

    if (current_streak > max_streak)
    {
        max_streak = current_streak;
    }

    printf("%d\n", max_streak);
    return 0;
}