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
    
    ptr=*ptr.next;
    ptr.data='b';
    ptr.next=NULL;
    
    ptr=store;
    printf("%c",ptr.data);
}
