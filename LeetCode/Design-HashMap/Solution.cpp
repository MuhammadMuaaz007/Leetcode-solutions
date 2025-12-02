1#include <vector>
2using namespace std;
3
4class MyHashMap {
5    vector<vector<pair<int,int>>> buckets;
6    int size = 1000; // number of buckets
7
8    int hash(int key) {
9        return key % size;
10    }
11
12public:
13    MyHashMap() {
14        buckets.resize(size);
15    }
16
17    void put(int key, int value) {
18        int index = hash(key);
19        for(auto &p : buckets[index]) {
20            if(p.first == key) {
21                p.second = value; // update
22                return;
23            }
24        }
25        buckets[index].push_back({key, value}); // insert new
26    }
27
28    int get(int key) {
29        int index = hash(key);
30        for(auto &p : buckets[index]) {
31            if(p.first == key)
32                return p.second;
33        }
34        return -1; // not found
35    }
36
37    void remove(int key) {
38        int index = hash(key);
39        for(int i = 0; i < buckets[index].size(); i++) {
40            if(buckets[index][i].first == key) {
41                buckets[index].erase(buckets[index].begin() + i); 
42                return;
43            }
44        }
45    }
46};
47
48
49/* buckets[index].begin() → points to the first element of the vector.
50
51buckets[index].begin() + i → points to the i-th element (iterator arithmetic).
52
53erase() needs an iterator, not just an index, so you cannot just write erase(i).
54
55That’s why you “make an iterator” — either explicitly or implicitly — to tell the vector which element to remove.*/
56
57
58/**
59 * Your MyHashMap object will be instantiated and called as such:
60 * MyHashMap* obj = new MyHashMap();
61 * obj->put(key,value);
62 * int param_2 = obj->get(key);
63 * obj->remove(key);
64 */