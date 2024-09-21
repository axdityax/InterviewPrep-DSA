/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode ans(-1);
        ListNode *tail = &ans;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int value = carry;
            if (l1 != nullptr)
            {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                value += l2->val;
                l2 = l2->next;
            }

            carry = value / 10;
            tail->next = new ListNode(value % 10);
            tail = tail->next;
        }

        return ans.next;
    }
};