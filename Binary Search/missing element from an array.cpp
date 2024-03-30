//Find out missing element from array using binary search
//TC: o(logN) SC: o(1)

#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int getMissingNumber(vector<int>& arr){
  int s = 0;
  int e = arr.size() - 1;

  while(s <= e){
    int mid = s + (e - s) / 2;
    if(arr[mid] != mid + 1 && mid == arr[mid - 1]){
      return mid + 1;
    }
    else if(arr[mid] != mid + 1){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }
  
  return -1;
}

int main() {
  vector<int> arr{1, 3, 4, 5};
  int ans = getMissingNumber(arr);
  cout<<ans;
  return 0;
}