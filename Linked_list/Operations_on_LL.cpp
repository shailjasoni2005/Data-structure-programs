#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* covertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i < arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        // cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    return count;
}

int checkIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if (head==NULL || head->next == NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

Node* removeK(Node* head, int k){
    if(head == NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* removeEl(Node* head, int el){
    if(head == NULL) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node* temp=head;
    Node* prev=NULL;
    while(temp != NULL){
        if(temp->data==el) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* insertHead(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}

Node* insertTail(Node* head,int val){
    if (head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
    
}

Node* insertPosition(Node* head,int el,int k){
    if(head == NULL){
        if(k == 1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k == 1){
        return new Node(el, head);
    }
    int cnt=0;
    Node* temp=head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* x= new Node(el);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head,int el,int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(el, head);
    }
    Node* temp=head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* x= new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={12,5,8,7};
    // Node* y=new Node(arr[0]);
    // cout<<y<<'\n';
    // cout<<y->data<<'\n';
    Node* head=covertArr2LL(arr);
    // cout<<lengthOfLL(head);
    // cout<<checkIfPresent(head,5);
    // cout<<head->data;

    // head=removeHead(head);
    // head = removeTail(head);
    
    // head = removeK(head,3);
    // head = removeEl(head,8);
    // head = insertHead(head,100);
    // head = insertTail(head,100);
    // head=insertPosition(head,6,4);
    head=insertBeforeValue(head,6,7);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    // cout<<head->data<<endl;

    return 0;
}