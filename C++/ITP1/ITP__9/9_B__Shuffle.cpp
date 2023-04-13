#include<iostream>
using namespace std;

int main(){
  string cards; // 山札の文字列
  int shuffles = 0, num = 0;; // シャッフルする回数, 一度に何枚のカードをシャッフルするか
  while(cin >> cards){
    if(cards == "-")break;
    cin >> shuffles;
    for(int i = 0;i < shuffles;i++){
      cin >> num;
      string bottom = cards.substr(0,num);
      string top = cards.substr(num, cards.size());
      cards = top + bottom;
    }
    cout << cards << endl;
  }
  return 0;
}

// １つのアルファベットが描かれた n 枚のカードの山をシャッフルします。
// 1回のシャッフルでは、下から h 枚のカードをまとめて取り出し、それを残ったカードの山の上に積み上げます。
// カードの山は以下のように１つの文字列で与えられます。
// abcdeefab
// 最初の文字が一番下にあるカード、最後の文字が一番上にあるカードを示しています。
// 例えば、これを h が 4 でシャッフルすると、最初の4文字 abcd が、残りの文字 eefab の末尾へ連結されるので以下のようになります：
// eefababcd
// このシャッフルを何回か繰り返します。
// カードの山の最初の並び（文字列）と h の列を読み込み、最後の並び（文字列）を出力するプログラムを作成して下さい。

// Input
// 複数のデータセットが入力として与えられます。各データセットは以下の形式で与えられます：
// 最初の並びを表す文字列
// シャッフル回数 m
// h1
// h2
//   .
//   .
// hm
// 最初の並びを表す文字列が "-" のとき入力の終わりとします。

// Constraints
// 1 ≤ 文字列の長さ≤ 200
// 1 ≤ m ≤ 100
// 1 ≤ hi < 文字列の長さ
// データセットの数は10を超えない

// Output
// 各データセットに対して、最後の並び（文字列）を１行に出力して下さい。
