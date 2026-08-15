#include <list>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #146: LRU Cache
class LRUCache {
    int cap;
    list<pair<int,int>> items;
    unordered_map<int, list<pair<int,int>>::iterator> mp;
public:
    LRUCache(int capacity): cap(capacity) {}
    int get(int key){
        if (!mp.count(key)) return -1;
        auto it = mp[key]; int val = it->second; items.erase(it); items.push_front({key,val}); mp[key]=items.begin(); return val;
    }
    void put(int key, int value){
        if (mp.count(key)) { items.erase(mp[key]); items.push_front({key,value}); mp[key]=items.begin(); return; }
        if ((int)items.size() == cap) { auto last = items.back(); mp.erase(last.first); items.pop_back(); }
        items.push_front({key,value}); mp[key]=items.begin();
    }
};

int main(){ return 0; }
