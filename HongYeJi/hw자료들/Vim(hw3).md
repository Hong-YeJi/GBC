🍋 Day3 Homework 🍋
=============

## VIM을 사용하여 프로그램 하나 짜기
(백준 11726번 2 x n 타일링)
-----------------------------

> - 개요
>   > 지난 알고리즘 주차 때 풀어보았던 백준 11726번 문제를 vim을 사용하여 다시 연습해 보았습니다.
>
>   > 처음 문제를 풀 때, n=1부터 계산해보면서 피보나치 규칙을 찾아서 문제를 풀었었는데,   
> 사용했던 방법 말고 다른 방법도 함께 정리해 보고자 [2 x n 타일링 문제](https://www.acmicpc.net/problem/11726)를 vim으로 코드를 짜게 되었습니다.
   
   
## 🧩 문제 소개   
<img src="https://ifh.cc/g/cb4lz5.png" width="70%" ></img>
<img src="https://ifh.cc/g/3VgN7I.png" width="50%" ></img>
<img src="https://ifh.cc/g/KlQkbO.png" width="70%" ></img>
   
   
## 🍄 Code(using vim)   
<img src="https://ifh.cc/g/oNiDI0.jpg" width="70%" ></img>
   
## 🌈 접근 방법1
> n=1일 때 1가지 방법, n=2일 때 2가지 방법, n=3일 때 3(1+2)가지 방법, n=4일 때 5(2+3)가지 방법...   
> => 피보나치 규칙을 따른다는 것을 알 수 있음   
<img src="https://ifh.cc/g/7fnziF.png" width="70%" ></img>
<img src="https://ifh.cc/g/TCXNP0.png" width="60%" ></img>
   
## 🌈 접근 방법2
> 2xn 크기의 직사각형을 1x2, 2x1 타일로 채울 때 맨 오른 쪽의 타일이 2x1타일일 경우, 나머지 타일을 채우는 방법이 n-1개 있고,   
맨 오른 쪽의 타일이 1x2타일이 2개가 배치되어 있을 경우, 나머지 타일을 채우는 방법이 n-2개가 있다.   
이 두 경우의 합이 타일을 채우는 방법의 수가 되기 때문에, memo[n] = memo[n-1] + memo[n-2]와 같은 점화식이 나오게 된다.   
<img src="https://ifh.cc/g/dS3m2x.png" width="60%" ></img>
   
   
### ⭐️ 접근 방법에 약간의 차이가 있어도 코드가 같은 구성이기에 base case와 점화식, 시간 복잡도는 똑같이 구할 수 있다.
![정리](https://ifh.cc/g/xp3yDV.png)
