#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n) {
  if (n < 2) {
      return false;
  }
  for (int i = 2; i * i <= n; ++i) { 
      if (n % i == 0) {
          return false;
      }
  }
  return true;
}

int closestprime(int j,vector<int>&nums) {
  int n=nums[j];
  if (n <= 2) {
      return 0; 
  }
  for (int i = n - 1; i > 1; --i) {
      if(checkprime(i) && j==0){
          return i;
      }
      if (checkprime(i) && n-i>nums[j-1]) {
          return i;
      }
  }
  return -1; 
}


bool checksorted(vector<int>& nums) {
  int size = nums.size();
  for (int i = 0; i < size - 1; ++i) {
      if (nums[i] >= nums[i + 1]) {
          return false;
      }
  }
  return true;
}


bool primeSubOperation(vector<int>& nums) {
  int size = nums.size();
  for (int i = 0; i < size; ++i) {

      int prime = closestprime(i,nums);
      if (prime > 0) {
          nums[i] -= prime;
      }

      if (checksorted(nums)) {
          return true;
      }
  }
  return false; 
}

int main(){
  vector<int>nums={15,20,17,7,16};
  bool ans=primeSubOperation(nums);
  cout<<ans<<endl;
  return 0;
}