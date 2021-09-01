#include<bits/stdc++.h>
using namespace std;

// Hashing 
struct chain{
    int bucket;
    list <int>* table;
    chain(int b){
        bucket =b;
        table = new list<int>[bucket];
    }
    void insert(int key){
        int i = key %bucket;
        table[i].push_back(key);
    }
    void del(int key){
        int i = key % bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key %bucket;
        for(auto x: table[i])
            if(x== key)
                return true;
        return false;
    }

};

int main(){
    chain ch(7);
    ch.insert(10);
    ch.insert(20);
    ch.insert(15);
    ch.insert(7);
    cout << ch.search(10) << endl;
    ch.del(15);
    cout << ch.search(15);
    return 0;
}
