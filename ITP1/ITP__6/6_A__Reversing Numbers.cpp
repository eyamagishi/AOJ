#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = n;i > 0;i--){
    if(i != n){cout << ' ';}
    cout << a[i-1];
  }
  cout << endl;
  return 0;
}