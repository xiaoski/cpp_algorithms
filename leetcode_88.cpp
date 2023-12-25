#include "utility.hpp"

using namespace std;

class Solution {
 public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int p = m + n - 1;
    m--;
    n--;
    while (m >= 0 && n >= 0) {
      nums1[p--] = (nums1[m] > nums2[n]) ? nums1[m--] : nums2[n--];
    }
    while (n >= 0) {
      nums1[p--] = nums2[n--];
    }
  }
};

int main(int argc, char const *argv[]) {
  vector<int> a{0};
  auto m = 0;
  vector<int> b{1};
  auto n = 1;
  /* code */
  Solution s;
  s.merge(a, m, b, n);
  cout << a << endl;
  return 0;
}
