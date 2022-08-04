# 자료구조-링크드리스트+더블포인터+배열
```C
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
typedef struct node {
    node* pre_ptr;
    node* nex_ptr;
    int data;
}node;
```
<--pre_ptr | data | nex_ptr-->  대충 이런구조
```C
int main(){ //구조체 선언되어있지만 편의상 생략
    node new_node;
    new_node.pre_ptr = NULL;
    new_node.nex_ptr = NULL;
    new_node.data = 10;
    printf("%x %d %x\n", new_node.pre_ptr, new_node.data, new_node.nex_ptr);
    return 0;
}
```  
main에서 원하는 만큼 새로운 node를 선언해서 연결하고 저장 할수있다 배열=포인터를 써서 좀더 다르게 표현하면
```C
int main()
{
    node new_node[10]; //내가원하는 개수=10
    for (int i = 0; i < 10; i++) //일단 초기화
    {
        new_node[i].pre_ptr = NULL;
        new_node[i].nex_ptr = NULL;
        new_node[i].data = i;
    }

    new_node[0].nex_ptr = &new_node[1]; //첫번째
    for (int i = 1; i < 10-1; i++) //서로 앞뒤로 연결
    {
        new_node[i].nex_ptr = &new_node[i + 1];
        new_node[i].pre_ptr = &new_node[i - 1];
    }
    new_node[9].pre_ptr = &new_node[8]; //마지막
    
    for(int i=0;i<10;i++)
        printf("%x %d %x\n", new_node[i].pre_ptr, new_node[i].data, new_node[i].nex_ptr);
    
    node* first = new_node;
    while (first->nex_ptr!=nullptr)
    {
        printf("%d\n", first->data);
        first = first->nex_ptr;
    }
    printf("finish\n");

    return 0;
}
```
