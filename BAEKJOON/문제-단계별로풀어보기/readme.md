# 자료구조-링크드리스트+더블포인터+배열 </br>  
<--pre_ptr | data | nex_ptr-->  대충 이런구조  
```C  
typedef struct node {
    node* pre_ptr;
    node* nex_ptr;
    int data;
}node;
```  
</br>  
main에서 원하는 만큼 새로운 node를 선언해서 연결하고 저장 할수있다 (원하는?=배열=포인터=)

```C  
int main()
{
    node new_node[10]; //내가원하는개수  int n = 10;, node* new_node = (node*)malloc(sizeof(node) * n);
    for (int i = 0; i < 10; i++) //일단 초기화
    {
        new_node[i].pre_ptr = NULL;
        new_node[i].nex_ptr = NULL;
        new_node[i].data = 0;
    }

    new_node[0].nex_ptr = &new_node[1]; //첫번째노드 연결
    for (int i = 1; i < 10-1; i++) //서로 앞뒤로 연결
    {
        new_node[i].nex_ptr = &new_node[i + 1];
        new_node[i].pre_ptr = &new_node[i - 1];
    }
    new_node[9].pre_ptr = &new_node[8]; //마지막노드 연결
    
    return 0; //free(new_node);
}
```  
<br/>  
함수처럼 만들고 싶음!</br>  

```C  
void create_node(node* ptr)
{
    ptr->pre_ptr = NULL;
    ptr->nex_ptr = NULL;
    ptr->data = 0;
}
void link_node(node* ptr1,node* ptr2)
{
    ptr1->nex_ptr = ptr2;
    ptr2->pre_ptr = ptr1;
}
int main()
{
    int n = 10; //내가원하는10
    node* new_node = (node*)malloc(sizeof(node) * n);

    for (int i = 0; i < n; i++)
        create_node(&new_node[i]);
    for (int i = 0; i < n-1; i++)
        link_node(&new_node[i], &new_node[i + 1]);
        
    node* first = new_node; //
    while (first!=nullptr)
    {
        printf("%d\n", first->data);
        first = first->nex_ptr;
    }
    free(new_node);
    return 0;
}
```  
</br>  
