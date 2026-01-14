1class LRUCache {
2public:
3    int cap;
4    list<pair<int,int>> dll; 
5    unordered_map<int, list<pair<int,int>>::iterator> mp;
6
7    LRUCache(int capacity) {
8        cap = capacity;
9    }
10
11    int get(int key) {
12        if (mp.find(key) == mp.end())
13            return -1;
14
15        // Move accessed node to front
16        dll.splice(dll.begin(), dll, mp[key]);
17        return mp[key]->second;
18    }
19
20    void put(int key, int value) {
21        if (mp.find(key) != mp.end()) {
22            // Update value and move to front
23            mp[key]->second = value;
24            dll.splice(dll.begin(), dll, mp[key]);
25        } else {
26            if (dll.size() == cap) {
27                // Remove LRU item
28                auto lru = dll.back();
29                mp.erase(lru.first);
30                dll.pop_back();
31            }
32            // Insert new item at front
33            dll.push_front({key, value});
34            mp[key] = dll.begin();
35        }
36    }
37};
38
39
40/**
41 * Your LRUCache object will be instantiated and called as such:
42 * LRUCache* obj = new LRUCache(capacity);
43 * int param_1 = obj->get(key);
44 * obj->put(key,value);
45 */