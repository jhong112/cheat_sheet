typedef struct node{
    char data;
    struct node* next;
}

int main()
{
    node ptr;
    node store;
    store=ptr;
    
    ptr.data='a';
    ptr.next=NULL;
    
    ptr=*ptr.next; // 포인터로 안쓰면 값을 복사해서 넣어버려서 ptr 자체가 ptr.next가 되어버림
    ptr.data='b';
    ptr.next=NULL;
    
    ptr=store; 
    printf("%c",ptr.data);
}
//그래서 뭔가 틀을 옮기고싶을때는 포인터를 써야됨! 애초에 node* ptr // 



void swap(int* a, int* b) //다른함수에서 값을 변경한걸 전달하고싶다?== return 또는 포인터!
{
    int tmp=*a; //a 와 b에 있는 값을 서로 바꾸는거기때문에 *
    *a=*b;
    *b=tmp;
}
