# 알게된것들  
int main(){return 0;} 이것이 표준  
void main(){} 하면 컴파일 오류</br>  

test.c 와 test1.bat 구조  
* test.c test.exe 로 컴파일  
* test.exe 파일과 test1.bat 같은 경로에 두기  
* test1.bat 실행  
* 3입력 -> test.exe 다시실행  다른정수입력 -> 그대로 끝남  

test.exe 가 반환하는 return_value를 test1.bat 에서 확인가능 == 다른프로그램 main이 return 하는걸 활용할수있다  
여러개exe파일을 bat파일로 실행순서 조절가능  == 다른언어로 만들어진 exe파일을 묶을수도 있을듯  
하나로 묶을 필요가 없으니 언어가 같을 필요도 없음  
다르게 구현한다면? 파일입출력쓸듯 실행다되면 0을넘기고 -> 다음파일은 0을 읽으면 실행되게끔<br/>  

<br/>  
특수문자를 표현하고싶다?==앞에 역슬래시 == 원화표시 = \<br/>  <br/>  
윈도우+R(실행) --> cmd -->명령프롬프트 상단 우클릭 --> 속성-->글꼴 수정<br/>  

10번문제
''''C++
#include<stdio.h>
int string_compare(char* id,char* check)
{
    int i = 0, not_same=0;
    while (id[i]!='\0' && check[i]!='\0')
    {
        if (id[i] != check[i])
        {
            not_same++;
            break;
        }
        else
            i++;
    }
    return not_same;
}
int main()
{
    char id[60] = {};
    char check1[] = "joonas";
    char check2[] = "baekjoon";

    scanf("%s", id);

    if (string_compare(id, check1)==0)
        printf("%s??!", id);
    else if (string_compare(id, check2)==0)
        printf("%s??!", id);

    return 0;
}

''''
