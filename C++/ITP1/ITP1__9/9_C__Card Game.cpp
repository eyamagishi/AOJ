#include<iostream>
using namespace std;

int main(){
  int taro_point = 0, hanako_point = 0, card_num = 0; // 太郎のポイント, 花子のポイント, カードの配られる枚数
  cin >> card_num; // 配られる枚数を入力
  string taro_card, hanako_card;
  for(int i = 0l;i < card_num;i++){
    cin >> taro_card >> hanako_card;
    int card_compare = taro_card.compare(hanako_card); // 大小関係をint型で保存する
    if(0 < card_compare)taro_point += 3;
    else if(card_compare < 0)hanako_point += 3;
    else{
      taro_point++;
      hanako_point++;
    }
  }
  cout << taro_point << ' ' << hanako_point << endl;
  return 0;
}

// 太郎と花子がカードゲームをする。二人はそれぞれn枚のカードを持っており、nターンの勝負を行う。
// 各ターンではそれぞれ１枚ずつカードを出す。カードにはアルファベットからなる動物の名前が書かれており、
// 辞書順で大きいものがそのターンの勝者となる。勝者には３ポイント、引き分けの場合にはそれぞれ１ポイントが加算される。
// 太郎と花子の手持ちのカードの情報を読み込み、ゲーム終了後のそれぞれの得点を出力するプログラムを作成せよ。

// Constraints
// 入力で与えられるｎが1000を超えることはない。
// 与えられる文字列の長さは100以下であり、アルファベットの小文字のみを含む。

// Input
// 一行目にカードの数ｎが与えられる。続くn行に各ターンのカードの情報が与えられる。
// １つ目の文字列が太郎のカードに書かれている文字列、２つ目の文字列が花子のカードに書かれている文字列である。

// Output
// １つ目の数字が太郎の得点、２つ目の数字が花子の得点として１行に出力せよ。２つの数字の間に１つの空白を出力せよ。
