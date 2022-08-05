// <--left | data | right-->  이런 구조
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    node* left;
    node* right;
    int data;
}node;


//main에서 다 처리할때
int main()
{
    node new_node[10]; //내가원하는개수 n=10
    int n = 10;
    //node* new_node = (node*)malloc(sizeof(node) * n); //배열=포인터=동적할당가능

    for (int i = 0; i < n; i++) //일단 초기화
    {
        new_node[i].left = NULL;
        new_node[i].right= NULL;
        new_node[i].data = 0;
    }

    for (int i = 0; i < n-1; i++) //서로 앞뒤로 연결
    {
        new_node[i].right = &new_node[i + 1];
        new_node[i + 1].left = &new_node[i];
    }
    
    for (int i = 0; i < 10; i++) //값입력
        new_node[i].data = i;

    for (int i = 0; i < 10; i++) //출력해보기1
        printf("%d ", new_node[i].data);
    printf("\n");

    node* node_ptr = new_node; //출력해보기2 읽는지점포인터를 옮기면서
    while (node_ptr != NULL)
    {
        printf("%d ", node_ptr->data);
        node_ptr = node_ptr->right;
    }
    printf("\n");

    //free(new_node);
    return 0;
}


//함수로 처리하긴하는데 그냥 코드만 줄인경우
void create_node(node* ptr)
{
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = 0;
}
void link_node(node* ptr1, node* ptr2)
{
    ptr1->right = ptr2;
    ptr2->left = ptr1;
}
int main()
{
    node new_node[10]; //내가원하는개수 n=10
    int n = 10;

    //node* new_node = (node*)malloc(sizeof(node) * n); //배열=포인터=동적할당가능

    for (int i = 0; i < n; i++) //일단 초기화
        create_node(&new_node[i]);

    for (int i = 0; i < n - 1; i++) //서로 앞뒤로 연결
        link_node(&new_node[i], &new_node[i + 1]);

    for (int i = 0; i < 10; i++) //값입력
        new_node[i].data = i;

    for (int i = 0; i < 10; i++) //출력해보기1
        printf("%d ", new_node[i].data);
    printf("\n");

    node* node_ptr = new_node; //출력해보기2 읽는지점포인터를 옮기면서
    while (node_ptr != NULL)
    {
        printf("%d ", node_ptr->data);
        node_ptr = node_ptr->right;
    }
    printf("\n");

    //free(new_node);
    return 0;
}


//
