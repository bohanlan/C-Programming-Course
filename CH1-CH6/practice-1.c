#include <stdio.h>
int main()
{
    int score;
    printf("請輸入成績：");
    scanf("%d", &score);
    if (score >= 90)
    {
        printf("優等\n");
    }
    else if (score >= 80)
    {
        printf("甲等\n");
    }
    else if (score >= 70)
    {
        printf("乙等\n");
    }
    else if (score >= 60)
    {
        printf("丙等\n");
    }
    else
    {
        printf("不及格\n");
    }

    return 0;
}
