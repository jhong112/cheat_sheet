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


//함수로 처리하긴하는데 반복되는부분->그냥 함수로구현만
void initiate_node(node* ptr) //초기화만
{
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = 0;
}
void link_node(node* ptr1, node* ptr2) //노드2개를 연결하기만
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
        initiate_node(&new_node[i]);

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


//함수에서 알아서 되게끔 완전넘겨버리기
void initiate_node(node* ptr)
{
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = 0;
}
void add_node(node* ptr1,int n)
{
    node* new_node = (node*)malloc(sizeof(node) * 1);
    initiate_node(new_node);
    new_node->data = n;
    while (ptr1->right!= NULL)
    {
        ptr1 = ptr1->right;
    }
    ptr1->right = new_node;
    new_node->left = ptr1;
}
int main()
{
    int n = 10;  //내가원하는개수 n=10
    node* node_ptr=(node*)malloc(sizeof(node)*1);
    initiate_node(node_ptr);
    node_ptr->data = 0;

    for (int i = 1; i < n; i++)
        add_node(node_ptr, i);

    node* tmp = node_ptr;
    while(tmp != NULL) //출력해보기2 읽는지점포인터를 옮기면서
    {
        printf("%d ", tmp->data);
        tmp = tmp->right;
    }
    printf("\n");

    tmp = node_ptr;
    while (tmp != NULL) //free 하기 전체다하는지 확인!
    {
        printf("%d ", tmp->data);
        node* target_ptr = tmp;
        tmp = tmp->right;
        free(target_ptr);
    }
    printf("\n");

    return 0;
}


//add_node에서 추가하는게아니라 initiate_node에서 할당하는식으로 구현한다면(=create_node)
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
typedef struct node {
    node* left;
    node* right;
    int data;
}node;
node* create_node()
{
    node* new_node = (node*)malloc(sizeof(node) * 1);
    new_node->right = nullptr;
    new_node->left = nullptr;
    new_node->data = 0;
    return new_node;
}
void add_node(node* ptr,int n)
{
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    node* new_node=create_node();
    new_node->data = n;
    ptr->right = new_node;
    new_node->left = ptr;
}
int main()
{
    int n = 10;  //내가원하는개수 n=10
    node* node_ptr = (node*)malloc(sizeof(node) * 1);
    node_ptr=create_node();  

    for (int i = 0; i < n; i++)
        add_node(node_ptr, i);
    node* tmp = node_ptr;
    while(tmp != NULL) //출력해보기2 읽는지점포인터를 옮기면서
    {
        printf("%d ", tmp->data);
        tmp = tmp->right;
    }
    printf("\n");

    tmp = node_ptr;
    while (tmp != NULL) //free 하기 전체다하는지 확인!
    {
        printf("%d ", tmp->data);
        tmp = tmp->right;
        free(node_ptr);
        node_ptr = tmp;
    }
    printf("\n");

    return 0;
}


//return 상관없이 그냥 더블포인터로 구현한다면?
void create_node(node** ptr)
{
    node* new_node = (node*)malloc(sizeof(node) * 1); //이건 과한것같기도
    new_node->right = nullptr;
    new_node->left = nullptr;
    new_node->data = 0;
    (*ptr)=new_node;
}
void add_node(node* ptr,int n)
{
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    node** new_node=(node**)malloc(sizeof(node*) * 1); //이게 좀 마음에 걸림 //node** new_node=NULL; //결국free함
    create_node(new_node);
    (*new_node)->data = n;
    (*new_node)->left = ptr;
    ptr->right = (*new_node);
    free(new_node);
}
int main()
{
    int n = 10;  //내가원하는개수 n=10
    node* node_ptr = (node*)malloc(sizeof(node) * 1);
    create_node(&node_ptr);
    node_ptr->data = 0;

    for (int i = 1; i < n; i++)
        add_node(node_ptr, i);

    node* tmp = node_ptr;
    while(tmp != NULL) //출력해보기2 읽는지점포인터를 옮기면서
    {
        printf("%d ", tmp->data);
        tmp = tmp->right;
    }
    printf("\n");

    tmp = node_ptr;
    while (tmp != NULL) //free 하기 전체다하는지 확인!
    {
        printf("%d ", tmp->data);
        tmp = tmp->right;
        free(node_ptr);
        node_ptr = tmp;
    }
    printf("\n");

    return 0;
}
