#include<iostream>
using namespace std;

int main(){
  unsigned int num[3];

  cin >> num[0] >> num[1] >> num[2];
  for(int i = 0;i < 3;i++){
    for(int j = i+1;j < 3;j++){
      if(num[i] > num[j]){
        unsigned int max = num[i];
        num[i] = num[j];
        num[j] = max;
      }
    }
  }
  for(int i=0;i<3;i++){
    cout << num[i];
    if(i < 2){cout << ' ';}
  }
  cout << endl;

  return 0;
}