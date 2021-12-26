#include <vector>

using namespace std;


class NumArray {
private: 
	vector<int> nums;
public:
	NumArray(vector<int>& nums) {
		for (int i : nums)
		{
			this->nums.emplace_back(i);
		}
	}

	int sumRange(int left, int right) {
		int answer = 0;
		for (int i = left; i <= right; i++)
		{
			answer += nums[i];
		}
		return answer;
	}
};

int main()
{
	vector<int> *v = new vector<int>{ -2,0,3,-5,2,-1 };

	NumArray *n = new NumArray(*v);
	int ans;
	ans = n->sumRange(0, 2);
	ans = n->sumRange(2, 5);
	ans = n->sumRange(0, 5);

}