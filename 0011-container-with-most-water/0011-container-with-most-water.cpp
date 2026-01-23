#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        int maxarea = 0;

        while (left < right) {
            int width = right - left;
            int minh = min(arr[left], arr[right]);
            int area = width * minh;
            maxarea = max(maxarea, area);

            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};
