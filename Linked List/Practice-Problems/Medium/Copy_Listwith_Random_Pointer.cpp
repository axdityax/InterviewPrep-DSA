class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return nullptr;

        Node *curr = head;
        while (curr)
        {
            Node *newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }

        curr = head;
        while (curr)
        {
            if (curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        Node *newHead = head->next;
        Node *copy = newHead;
        curr = head;
        while (curr)
        {
            curr->next = curr->next->next;
            if (copy->next)
            {
                copy->next = copy->next->next;
            }
            curr = curr->next;
            copy = copy->next;
        }

        return newHead;
    }
};