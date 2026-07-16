/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head) return nullptr;

        Node* temp = head;
        unordered_map<Node*, Node*> mpp;

        // create all the nodes and mark their values
        while(temp != nullptr){
            Node* newNode = new Node(temp->val);
            mpp[temp] = newNode;
            temp = temp->next;
        }

        temp = head;
        // fill the next and random looking at the map

        while(temp != nullptr){
            Node* copyNode = mpp[temp];
            copyNode->next = mpp[temp->next];
            copyNode->random = mpp[temp->random];
            temp = temp->next;
        }

        return mpp[head];
    }
};