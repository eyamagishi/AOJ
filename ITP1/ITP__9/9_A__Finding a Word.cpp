#include<iostream>
using namespace std;

int main(){
  string W, T;
  int Wcnt = 0;
  cin >> W;
  for(int i = 0;i < W.size();i++){
    if('a' <= W[i] && W[i] <= 'z'){
      W[i] = W[i] - 'a' + 'A';
    }
  }
  while(cin >> T){
    if(T == "END_OF_TEXT"){break;}
    for(int i = 0;i < T.size();i++){
      if('a' <= T[i] && T[i] <= 'z'){
        T[i] = T[i] - 'a' + 'A';
      }
    }
    if(T == W){Wcnt++;}
  }
  cout << Wcnt << endl;
  return 0;
}
// １つの単語 W と文章 T が与えられます。
// T の中にある W の数を出力するプログラムを作成して下さい。
// 文章 T に含まれるスペースまたは改行で区切られた文字列を単語 Ti とします。
// すべての Ti において単語 W と同じになるものを数えて下さい。
// なお、大文字と小文字は区別しません。

// Constraints
// Wの文字列の長さは10を超えない
// Wに含まれる文字はすべてアルファベット小文字である
// Tの１行あたりの文字列の長さは1000を超えない

// Input
// １行目に単語 W が与えられます。
// 続いて、複数の行にまたがった文章与えられます。END_OF_TEXT という文字列が文章の終わりを示します。

// Output
// 単語 W の数を出力して下さい。