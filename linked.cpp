#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

struct Node{
    int val;
    Node *l, *r;
    Node(){
        l = nullptr;
        r = nullptr;
    }
};

struct LinkedList{
    int size;
    Node *first, *last;

    LinkedList(){
        last = new Node();
        first = last;
        size = 0;
    }

    void addBack(int el){
        if(size == 0){
            last = new Node();
            first = last;
            last->val = el;
        }
        else {
            Node *node = new Node();
            node->val = el;
            last->r = node;
            node->l = last;
            last = node;
        }
        size++;
    }

    void addFront(int el){
        if(size == 0){
            last = new Node();
            first = last;
            last->val = el;
        }
        else {
            Node *node = new Node();
            node->val = el;
            first->l = node;
            node->r = first;
            first = node;
        }
        size++;
    }

    void showList(){
        Node *t = first;
        while(t != nullptr){
            cout << t->val << " ";
            t = t->r;
        }
        cout << endl;
    }

    void del_back(){
        Node *t = first;
      if(size == 0){
            cout << 0 << endl;
        }
        else {
            while(t->r != last->l){
            t = t->r;
        }
        t=t->r;
        t->r=nullptr;
        }
        size--;
    }

    void del_front(){
        first = first->r;
        size --;
    }

    void begin(){
        Node *t = first;
        while(t->l != nullptr){
            t = t->l;
        }
        cout << t->val << endl;
    }

     void end(){
        Node *t = first;
        while(t->r != nullptr){
            t = t->r;
        }
        cout << t->val << endl;
    }

    void bol(){
         Node *t = first;
         int max = 0;
        while(t != nullptr){
            if (t->val>max) max = t->val;
            t = t->r;
        }
        cout << max << endl;
    }

    void mal(){
         Node *t = first;
         int min = 2000000000;
        while(t != nullptr){
            if (t->val<min) min = t->val;
            t = t->r;
        }
        cout << min << endl;
    }

    void len(){
    cout << size << endl;
    }

    void isEmpty(int el){
        Node *t = first;
        while(t != nullptr){
            if (t->val==el) {cout << 1 << endl; return ;}
            t = t->r;
        }
        cout << 0 << endl;
    }
};

int toInt(string s){
    int ans = 0, r = 1;
    for(int i = (int)s.size() - 1; i >= 0; i--){
        ans += (s[i] - '0') * r;
        r *= 10;
    }
    return ans;
}

int main(){
    LinkedList list;
     for (int i = 0; i < 30; i++) {
        list.addFront(i+1);
    }
    list.showList();
    list.del_back();
    list.showList();
    list.del_front();
    list.showList();
    list.begin();
    list.end();
    list.len();
    list.bol();
    list.mal();
    list.isEmpty(2);
    list.isEmpty(31);

}

