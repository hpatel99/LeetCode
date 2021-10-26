#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int leftmarker = 0;
		int rightmarker = height.size() - 1;
		int minvalue;
		int max = 0;

		while (leftmarker < rightmarker)
		{
			minvalue = min(height[leftmarker], height[rightmarker]);
			max = std::max(max, (rightmarker - leftmarker)*minvalue);
			if (height[leftmarker] < height[rightmarker])
			{
				leftmarker++;
			}
			else
			{
				rightmarker--;
			}

		}
		return max;
	}
};

int main()
{
	Solution *s = new Solution();
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(18);
	v.push_back(17);
	v.push_back(6);
	s->maxArea(v);
}