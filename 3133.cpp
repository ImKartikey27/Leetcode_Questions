#include <bits/stdc++.h>
using namespace std;
long long minEnd(int n, int x) {
        n=n-1;
        long long  temp=x;
        while(n!=0){
            temp=temp+1;
            temp=temp | x;
            n--;
        }
        return temp;
    }

int main() {
  int n=3;
  int x=4;
  long long minans = minEnd(n, x);
  cout<<minans<<endl;
  return 0;
}
