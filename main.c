#include "9cc.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    error("%s: 引数の個数が正しくありません", argv[0]);
    return 1;
  }

  // トークナイズする
  user_input = argv[1];
  token = tokenize(user_input);

  // 抽象構文木を生成する
  // 結果はcodeに保存される
  program();

  // アセンブリの前半部分を出力
  codegen();

  return 0;
}
