```C++
if(조건1)
{}
else if(조건2)
{}
else
{}

switch()
{
  case 1:
    break;
  default:
    break;
}
```
집합크기가작은걸 if문 상단에 써주는게 좋았음  
why?=조건이많다=다른집합에 비해 상대적으로 작을 확률이 높음  
(조건이까다롭다=if의if의if의= else는 집합에서 빠짐=결국 집합크기가 작아짐)
</br>  
성능측면에서 본다면..?  
들어올 데이터 성질에 따라 다름 가능성이 높은 케이스를 무조건 첫번째 if로 넣어줘야됨  
한번에 한번씩밖에 비교를 못함
</br>  
논리+드모르간  
[C,C++연산자 위키](https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90)  
