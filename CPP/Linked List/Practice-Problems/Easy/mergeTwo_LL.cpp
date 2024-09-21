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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        ListNode *head;

        if (list1->val < list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        head->next = mergeTwoLists(list1, list2);
        return head;
    }
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        ListNode *tail;
        ListNode ans(-1);
        tail = &ans;

        while (l1 != nullptr && l2 != nullptr)
        {

            if (l1->val < l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
            tail->next = nullptr;
        }

        if (l1 != nullptr)
        {
            tail->next = l1;
        }
        else
        {
            tail->next = l2;
        }

        return ans.next;
    }
};