```C++
#include <stdlib> //메모리할당+해제할때는 이거 써야됨 
(void*)malloc(크기); //malloc은 반환형이 void* 이라서 강제 형변환 꼭꼭 해줘야됨 마지막에는 꼭 free 잊지말자

for(int i=0;i<원하는카운트;i++)

flag=원하는카운트;
while(flag--){}

do{}while(flag--); // 일단 한번 더해서 생각 해봐야됨

```
</br>  
입력받을때 스페이스로 띄워서 받지는 않나봄==엔터쳐서입력받는다고생각해도됨  
</br>  

EOF==파일끝==-1==파일사이즈정보로 알게됨  
Enter==\n  
\0==문자열끝  
NULL==0  
nullptr  
