#include "utility.hpp"

using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int j = 1;
      for (int i=1; i<nums.size(); i++){
        if (nums[i]!=nums[j-1]){
          nums[j++] = nums[i];
        }
      }
      return j;
    }
  };

int main(int argc, char const *argv[])
{
  /* code */
  Solution s;
  vector<int> a{2};
  auto v = s.removeDuplicates(a);
  cout<<v<<a<<endl;

  vector<int> b{0,0,1,1,1,2,2,3,3,4};
  auto v2 = s.removeDuplicates(b);
  cout<<v2<<b<<endl;

  return 0;
}
