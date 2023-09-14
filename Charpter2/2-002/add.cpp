#include <iostream>

/*======================
=<問題文>
= 3つの整数A1,A2,A3が与えられる．
= A1+A2+A3を出力するプログラムを作成してください．
=<条件>
= 1<= A1,A2,A3<=100
=======================*/

int AddThreeNumber() {
  int A[3];
  int result = 0;

  std::cin >> A[0] >> A[1] >> A[2];
  // std::cin >> A[0];
  // std::cin >> A[1];
  // std::cin >> A[2];
  for (int i = 0; i < 3; i++) {
    result += A[i];
  }
  std::cout << result << std::endl;

  return 0;
}

int main() {
  int test_loop = 0;

  std::cin >> test_loop;
  for (int i = 0; i < test_loop; i++) {
    AddThreeNumber();
  }

  return 0;
}