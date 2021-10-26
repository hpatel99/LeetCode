#include<stdio.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode* fast, *slow;
		
		if (head == nullptr || head->next == nullptr)
		{
			return false;
		}
		
		fast = head;
		slow = head;

		while (fast != nullptr)
		{
			if (fast->next != nullptr && fast->next->next != nullptr)
			{
				fast = fast->next->next;
				slow = slow->next;
				if (fast == slow)
					return true;
			}
			else
			{
				return false;
			}
		}
		return false;
	}
};

int main()
{

}