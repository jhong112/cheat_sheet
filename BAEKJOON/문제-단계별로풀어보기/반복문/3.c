#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
int main() //2739
{
    int n;
    scanf("%d", &n);
  
    for (int i = 1; i < 10; i++)
        printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}

int main(void)
{
    int test_num;
    scanf("%d", &test_num);

    int* numptr=(int*)malloc(sizeof(int) * test_num*2);

    for (int i = 0; i < test_num; i++)
        scanf("%d %d",&numptr[2*i],&numptr[2*i+1]);
    for (int i = 0; i < test_num; i++)
        printf("%d\n", numptr[2 * i]+numptr[2 * i + 1]);

    free(numptr);
  
    return 0;
}

int main(void)
{
    int n,sum=0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;
    printf("%d", sum);

    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
        printf("%d\n", i);
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i=n;i>0;i--)
        printf("%d\n", i);
    return 0;
}

int main(void)
{
    int test_num;
    scanf("%d", &test_num);

    int* numptr = (int*)malloc(sizeof(int) * test_num * 2);

    for (int i = 0; i < test_num; i++)
        scanf("%d %d", &numptr[2 * i], &numptr[2 * i + 1]);
    for (int i = 0; i < test_num; i++)
        printf("Case #%d: %d\n",i+1, numptr[2 * i]+numptr[2 * i + 1]);

    free(numptr);
    return 0;
}

int main(void)
{
    int test_num;
    scanf("%d", &test_num);

    int* numptr = (int*)malloc(sizeof(int) * test_num * 2);

    for (int i = 0; i < test_num; i++)
        scanf("%d %d", &numptr[2 * i], &numptr[2 * i + 1]);
    for (int i = 0; i < test_num; i++)
        printf("Case #%d: %d + %d = %d\n",i+1,numptr[2*i],numptr[2*i+1], numptr[2 * i]+numptr[2 * i + 1]);

    free(numptr);

    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int tmp = 1; tmp <= n; tmp++)
    {
        for (int i = 0; i < tmp ; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int target=1;target<=n;target++)
    {
        for (int i = n-target; i > 0; i--)
            printf(" ");
        for (int i = 0; i < target; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}

int main(void)
{
    int n, standard;
    scanf("%d %d", &n, &standard);

    int* ptr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d",&ptr[i]);

    for (int i = 0; i < n; i++)
    {
        if(ptr[i]<standard)
            printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}

int main(void)
{
    int a,b,flag=1;
    
    while (flag)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            flag = 0;
        else
            printf("%d\n", a + b);
    }

    return 0;
}

int main(void)
{
    int a,b,flag=1;
    while (scanf("%d %d", &a, &b)!=EOF)
    {
    	printf("%d\n", a + b);
    }

    return 0;
}

int main(void)
{
    int n,cycle=0,new_num,n_store;
    scanf("%d", &n);

    n_store =n;
    while (1) {
        new_num = n % 10 * 10 + ((n - n % 10) / 10 + n % 10) % 10;
        n = new_num;
        cycle++;
        if (n == n_store)
            break;
    }

    printf("%d", cycle);

    return 0;
}
