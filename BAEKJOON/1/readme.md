// int main(){return 0;} 이것이 표준  
void main(){} 하면 컴파일 오류 나게끔 되어있네  



test.c 와 test1.bat 구조


* test.c test.exe 로 컴파일
* test.exe 파일과 test1.bat 같은 경로에 두기
* test1.bat 실행
* 3입력 -> test.exe 다시실행  다른정수입력 -> 그대로 끝남

test.exe 가 반환하는 return_value를 test1.bat 에서 확인가능

전체를 exe로 만들어서==main이 1개인상태로 관리해도되고  
단계별로 여러개의 exe파일을 만들고 bat파일로 순차 실행해도 될듯
