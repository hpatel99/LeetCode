#include<stdio.h>
#include<math.h>
#include <limits>

class Solution {
public:
	int reverse(int x) {
		int answer=0;
		int max = INT_MAX / 2;
		bool isNegative = x < 0;
		x = abs(x);

		while (x != 0)
		{
			if ((answer / 2) * 10 > max)
			{
				return 0;
			}

			answer = (answer *10) + (x% 10);
			x = x / 10;
		}

		return isNegative? -1*answer:answer;
	}
};

int main()
{
	Solution *s = new Solution();
	s->reverse(1534236469);

}