# 어쩌다보니 포인터=배열  
</br>  

```C++
int a=1;
int* ptr=(int*)malloc(sizeof(int)*1);
ptr=&a; //포인터에 스택주소를 넘김
free(ptr);

//복사생각
int a=1;
int* ptr=(int*)malloc(sizeof(int)*1);
*ptr=a; //값을바로넘겨주기!
free(ptr);
```
메모리-스택에 있는걸 동적할당으로 받아주고나서 free 하면 될때도 있고 안될때도있음  
직접주소를 넘겨주냐 vs 값을 복사해서 넘겨주냐  
스택을 free못함->값을 복사해야됨  
</br>  
```C++
char* s1 = "abc";  //마소표준x
char s2[] = "abc"; //O
```
s1=문자열상수=char[]const=>const char* s1 하면됨  
s2=문자열변수=char[]  
-프로젝트-프로젝트속성-configuration properties-advanced-advanced properties-character set-유니코드  
-프로젝트속성-C/C++-language-conformance mode- NO // 준수모드설정 char*s1="abc"; 가능  


