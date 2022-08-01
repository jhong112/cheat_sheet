# 어쩌다보니 포인터=배열  
</br>  

```C++
int a=1; //메모리-스택에 저장
int* ptr=(int*)malloc(sizeof(int)*1); //동적할당
ptr=&a; //포인터에 스택주소를 넘김
free(ptr); // 해제하면 오류남==스택은 해제못함

//복사생각
int a=1;
int* ptr=(int*)malloc(sizeof(int)*1);
*ptr=a; //값을바로넘겨주기!
free(ptr);
```
```C++
char* s1 = "abc"; //이건 또 왜 안됨?
char s2[] = "abc"; //이건 또 됨 모르겠어 정말로

char* s1 = s2;

```
