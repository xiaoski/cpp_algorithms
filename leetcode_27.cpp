#include "utility.hpp"

using namespace std;

class Solution {
  public:
    int removeElement(vector<int>& nums, int val) {
      int i =0;
      int j = nums.size();
      while(i<j){
        if (nums[i] == val){
          if(nums[--j] != val) {
            nums[i] = nums[j];
          }
        }else{
          i++;
        }
      }
      return i;
    }
  };

int main(int argc, char const *argv[])
{
  /* code */
  Solution s;
  vector<int> a{3,2,2,3};
  auto v = s.removeElement(a, 3);
  cout<<v<<a;

  vector<int> b{0,1,2,2,3,0,4,2};
  auto v2 = s.removeElement(b, 2);
  cout<<v2<<b;

  return 0;
}
