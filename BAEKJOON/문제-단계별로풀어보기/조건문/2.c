#include <stdio.h>
#pragma warning(disable: 4996)

int main() //9498
{
    int a;
    scanf("%d", &a);
    if (a >= 90)
        printf("A");
    else if (a >= 80)
        printf("B");
    else if (a >= 70)
        printf("C");
    else if (a >= 60)
        printf("D");
    else
        printf("F");
    return 0;
}

int main() //2753
{
    int a;
    scanf("%d", &a);
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        printf("1");
    else
        printf("0");
    return 0;
}

int main() //14681
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("1");
    else if (x < 0 && y > 0)
        printf("2");
    else if (x < 0 && y < 0)
        printf("3");
    else if (x > 0 && y < 0)
        printf("4");
    return 0;
}

int main() //2884
{
    int H, M;
    scanf("%d %d",&H,&M);
    if (M < 45)
    {
        M = M + 60 - 45;
        if (H < 1)
            H = 24 - 1;
        else
            H--;
    }
    else
        M = M - 45;
    printf("%d %d", H, M);
    return 0;
}

int main() //2525
{
    int h, m, duration;
    scanf("%d %d", &h, &m);
    scanf("%d", &duration);
    h = (((m + duration) / 60) + h) % 24;
    m = (m + duration) % 60;
    printf("%d %d", h,m);
    return 0;
}

int main() //2480
{
    int a[3];
    int reward,reward_max=0;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    if (a[0] == a[1] && a[1] == a[2])
        reward_max = 10000 + a[0] * 1000;
    else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2])
    {
        for (int i = 0; i < 3; i++)
        {
            reward = a[i] * 100;
            if (reward_max < reward)
                reward_max = reward;
        }
    }
    else
    {
        if (a[0] == a[1])
            reward_max = 1000 + a[0] * 100;
        else if (a[1] == a[2])
            reward_max = 1000 + a[1] * 100;
        if (a[0] == a[2])
            reward_max = 1000 + a[0] * 100;
    }
    printf("%d",reward_max);
    return 0;
}
