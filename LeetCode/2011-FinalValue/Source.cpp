#include<vector>

using namespace std;

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int answer =0;

		for (string s : operations)
		{
			answer += s[1] == '+' ? 1 : -1;
		}

		return answer;
	}
};

int main()
{

}