#include "binary_search.h"
#include <stdexcept>

using namespace std;

namespace binary_search {
  int find(const std::vector<int> &nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = (left + right) / 2;
      if (target == nums[pivot]) return pivot;
      if (target < nums[pivot])
        right = pivot - 1;
      else
        left = pivot + 1;
    }

    throw std::domain_error("target not found");
  }
}  // namespace binary_search
