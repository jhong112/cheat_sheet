#include <stdio.h>
#include <stdlib.h>

int str_cmp1(const char* a,const char* compare, int n1)
{
    for (int i = 0; i < n1 - 1; i++)
    {
        if (a[i] != compare[i])
            return -1;
    }
    if (compare[n1 - 1] != ' ')
        return -1;
    return 1;
}
int str_cmp2(const char* b,const char* compare, int n1, int n2)
{
    for (int i = 0; i < n2 - 1; i++)
    {
        if (b[i] != compare[i + n1])
            return -1;
    }
    if (compare[n1 + n2 - 1] != '\0')
        return -1;
    return 1;
}
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    int* answer = (int*)malloc(sizeof(int) * id_list_len);
    int* who_over_k = (int*)malloc(sizeof(int) * id_list_len);
    int* id_str_size = (int*)malloc(sizeof(int) * id_list_len);
    int** answer_mat = (int**)malloc(sizeof(int*) * id_list_len);
    int tmp, flag1, flag2, count;

    for (int i = 0; i < id_list_len; i++)
    {
        answer[i] = 0;
        who_over_k[i] = 0;
        id_str_size[i] = 0;
        answer_mat[i] = (int*)malloc(sizeof(int) * id_list_len);
        tmp = 0;
        for(;id_list[i][tmp++]!='\0';)
        for (int j = 0; j < id_list_len; j++)
            answer_mat[i][j] = 0;
        id_str_size[i] = tmp;
    }

    for (int i = 0; i < report_len; i++)
    {
        for (int j = 0; j < id_list_len; j++) 
        {
            if (str_cmp1(id_list[j], report[i], id_str_size[j]) == 1)
            {
                flag1 = j;
                break;
            }
        }

        for (int j = 0; j < id_list_len; j++)
        {
            if (str_cmp2(id_list[j], report[i], id_str_size[flag1],id_str_size[j]) == 1)
            {
                flag2 = j;
                break;
            }
        }

        if (answer_mat[flag1][flag2] == 1)
            continue;
        else
        {
            answer_mat[flag1][flag2] = 1;
            who_over_k[flag2]++;
        }
    }

    for (int i = 0; i < id_list_len; i++)
    {
        if (who_over_k[i] < k)
            who_over_k[i] = 0;
        else
        {
            count = 0;
            for (int j = 0; j < id_list_len; j++)
            {
                if (count == who_over_k[i]) break;
                else if(answer_mat[j][i]==1)
                {
                    answer[j]++;
                    count++;
                }
            }
        }
    }

    for (int i = 0; i < id_list_len; i++)
        free(answer_mat[i]);
    free(answer_mat);
    free(id_str_size);
    free(who_over_k);

    return answer;
}


/*************  
처음은 str_cmp를 하나로 만들어서 구현했었는데
(신고한사람 신고당한사람)  에서 2개 다 맞으면 --> 기록  
이러다보니 신고한사람 문자열을 계속해서 검색하게되서 연산량증가
그래서 문자열 비교하는걸 2개로나눠서 하니까 연산량줄어서 통과함

**************/
