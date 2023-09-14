#include <iostream>

/*======================
=<問題文>
= 整数NとN個の整数A1，A2，・・・，ANが与えられる．
= A1+A2+・・・+ANを出力するプログラムを作成してください．
=<条件>
= 1<=N<=50 1<=Ai<=100
=======================*/

int TotalNum() {
  int A[50];
  int N;
  int result = 0;

  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    result += A[i];
  }

  std::cout << result << std::endl;

  return 0;
}

int main() {
  int test_loop = 0;

  std::cin >> test_loop;
  for (int i = 0; i < test_loop; i++) {
    TotalNum();
  }

  return 0;
}