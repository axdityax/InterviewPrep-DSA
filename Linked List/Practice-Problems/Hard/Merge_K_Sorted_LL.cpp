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
    ListNode *mergeKLists(vector<ListNode *> &list)
    {
        ListNode ans(-1);
        ListNode *tail = &ans;

        int i = 0;
        int flag = 0;
        int k = list.size();
        int minimum, minw;
        while (true)
        {
            minimum = 1000000;
            while (i < k)
            {
                if (list[i] != nullptr)
                {
                    if (list[i]->val < minimum)
                    {
                        minimum = min(list[i]->val, minimum);
                        minw = i;
                    }
                    flag = 1;
                }
                i++;
            }

            if (flag != 0)
            {
                tail->next = list[minw];
                list[minw] = list[minw]->next;
                tail = tail->next;
                tail->next = nullptr;
            }

            i = 0;
            if (flag == 0)
            {
                break;
            }
            flag = 0;
        }

        return ans.next;
    }
};