#include <stdio.h>
#pragma warning(disable: 4996)
int main() //2557
{
    printf("Hello World!");
    return 0;
}

int main() //10718
{
    printf("강한친구 대한육군\n");
    printf("강한친구 대한육군");
    return 0;
}

int main()
{
    printf("\\    /\\\n");
    printf(" )  ( \')\n");
    printf("(  /  )\n");
    printf(" \\(__)|");
    return 0;
}

int main()
{
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|");
    return 0;
}

int main() //1000
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A + B);
    return 0;
}

int main() //1001
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A-B);
    return 0;
}

int main() //10998
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A*B);
    return 0;
}

int main() //1008
{
    int A, B;
    double C;
    scanf("%d %d", &A, &B);
    C = (double)A / B;
    printf("%.10f", C);
    return 0;
}

int main() //10869
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", A+B);
    printf("%d\n", A-B);
    printf("%d\n", A*B);
    printf("%d\n", A/B);
    printf("%d", A%B);
    return 0;
}

int main() //10926
{
    char id[60];
    scanf("%s", id);
    printf("%s??!", id);
}

int main() //18108
{
    int a;
    scanf("%d", &a);
    printf("%d", a - 543);
    return 0;
}

int main() //10430
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d\n%d\n%d", (a+b)%c,(a%c+b%c)%c,(a*b)%c,((a%c)*(b%c))%c);
    return 0;
}

int main() //2588
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", b % 10*a);
    printf("%d\n", b/10 % 10*a);
    printf("%d\n", b / 100 % 10*a);
    printf("%d", a * b);
    return 0;
}

int main() //25083
{
    printf("         ,r'\"7\n");
    printf("r`-_   ,'  ,/\n");
    printf(" \\. \". L_r'\n");
    printf("   `~\\/\n");
    printf("      |\n");
    printf("      |\n");
    return 0;
}
