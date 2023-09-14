/*======================
= <問題文>
=りんごが5個あり，みかんがN個ある．整数Nが与えられるので，りんごとみかんを合わせて何個あるかを出力するプログラムを作成する．
= <条件>
= 整数Nは1以上100以下
=======================*/
#include <iostream>

// 問題のコード
int InputOrangeToTotalNum() {
  int appleNum = 5;
  int N;

  std::cin >> N;
  std::cout << appleNum + N << std::endl;

  return 0;
}

int main() {
  int test_loop = 0;

  std::cin >> test_loop;
  for (int i = 0; i < test_loop; i++) {
    InputOrangeToTotalNum();
  }

  return 0;
}