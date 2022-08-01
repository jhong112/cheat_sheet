#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main(void)
{
    int num,least= 1000000,best=-1000000;
    scanf("%d", &num);
    int* numptr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
        scanf("%d", &numptr[i]);
    for (int i = 0; i < num; i++)
    {
        if (least > numptr[i])
            least = numptr[i];
        if (best < numptr[i])
            best = numptr[i];
    }
    printf("%d %d", least, best);
    free(numptr);
    return 0;
}

int main(void)
{
    int num[9],best=0,best_where=0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        if (best < num[i]) 
        {
            best = num[i];
            best_where = i;
        }
    }
    printf("%d\n%d",best,best_where+1);

    return 0;
}

int main(void)
{
    int a, b, c, mul, count[10] = {0};
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    mul = a * b * c;
    while (mul)
    {
        switch (mul % 10)
        {
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        default:
            break;
        }
        mul=mul / 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", count[i]);

    return 0;
}

int main(void)
{
    int num[10],flag=0,diff=0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < 10; i++)
        num[i]=num[i] % 42;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (num[i] != num[j])
                flag++;
        }
        if (flag == 10 - (i+1))
            diff++;
        flag = 0;
    }

    printf("%d", diff);

    return 0;
}

int main(void)
{
    int num,best=0;
    float sum = 0;
    scanf("%d", &num);

    int* numptr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
        scanf("%d",&numptr[i]);

    for (int i = 0; i < num; i++)
    {
        if (best < numptr[i])
            best=numptr[i];
    }

    for (int i = 0; i < num; i++)
        sum += (float)numptr[i] / best * 100;

    printf("%.3f\n",(float) sum / num);

    free(numptr);
    return 0;
}

int main(void)
{
    int num,score=0,sum=0;
    char answer[80];

    scanf("%d", &num);
    int* numptr = (int*)malloc(sizeof(int) * num);
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 80; j++)
            answer[j] = 'a';    
        score = 0;
        sum = 0;

        scanf("%s", &answer);
        for (int j = 0; j < 80; j++)
        {
            if (answer[j] == 'a')
                break;
            if (answer[j] == 'O')
            {
                score++;
                sum += score;
            }
            else
                score = 0;
        }

        numptr[i] = sum;
    }

    for (int i = 0; i < num; i++)
        printf("%d\n", numptr[i]);

    free(numptr);
    return 0;
}

int main(void)
{
    int num,num_people,sum,count;
    scanf("%d", &num);
    float* result = (float*)malloc(sizeof(float) * num);

    for (int j = 0; j < num; j++)
    {
        scanf("%d", &num_people);
        int* score = (int*)malloc(sizeof(int) * num_people);
        for (int i = 0; i < num_people; i++)
            scanf("%d", &score[i]);

        sum = 0, count = 0;
        for (int i = 0; i < num_people; i++)
            sum += score[i];
        for (int i = 0; i < num_people; i++)
        {
            if (score[i] > sum / num_people)
                count++;
        }
        result[j] = (float)count / num_people * 100;
        free(score);   //반복문밖에서 최대크기로 잡고 해제하는게 나을듯
    }

    for (int j = 0; j < num; j++)
        printf("%.3f%%\n",result[j]);

    free(result); 
    return 0;
}
