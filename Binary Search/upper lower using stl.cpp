#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main() {
  vector<int> arr{1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 5, 6, 7};
  int target = 3;
  
  auto first = lower_bound(arr.begin(), arr.end(), target);
  cout<<"stl => "<<first - arr.begin();
  cout<<endl;
  auto last = upper_bound(arr.begin(), arr.end(), target);
  cout<<"stl => "<<last - arr.begin();
  return 0;
}