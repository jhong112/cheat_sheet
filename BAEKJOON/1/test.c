#include <stdio.h>
int main()
{
    int return_value;
    printf("start\n");
    printf("3 --> restart : ");
    scanf_s("%d", &return_value);
    printf("exit\n");
    return return_value;
}
