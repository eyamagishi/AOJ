#include<iostream>
using namespace std;

int main(){
  int card[4][13] = {0};
  int n;
  cin >> n;
  for(int i = 0;i < n;i++){
    char suit;
    int num;
    cin >> suit >> num;
    if(suit == 'S'){
      card[0][num-1] = num;
    }else if(suit == 'H'){
      card[1][num-1] = num;
    }else if(suit == 'C'){
      card[2][num-1] = num;
    }else if(suit == 'D'){
      card[3][num-1] = num;
    }
  }
  for(int i = 0;i < 4;i++){
    for(int j = 0;j < 13;j++){
      if(card[i][j] == 0){
        if(i == 0){cout << "S " << j + 1 << endl;}
        else if(i == 1){cout << "H " << j + 1 << endl;}
        else if(i == 2){cout << "C " << j + 1 << endl;}
        else if(i == 3){cout << "D " << j + 1 << endl;}
      }
    }
  }
  return 0;
}