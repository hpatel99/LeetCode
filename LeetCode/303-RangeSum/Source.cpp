#include <vector>

using namespace std;


class NumArray {
private: 

	vector<int> numsSums;
public:
	NumArray(vector<int>& nums) {
		numsSums.reserve(nums.size() + 1);
		numsSums = nums;
		for (int i =1; i<= nums.size(); ++i)
		{
			this->numsSums[i] += numsSums[i-1];
		}
	}

	int sumRange(int left, int right) {
		return left == 0 ? numsSums[right] : numsSums[right] - numsSums[left - 1];
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