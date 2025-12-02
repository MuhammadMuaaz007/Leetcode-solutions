1#include <vector>
2using namespace std;
3
4class MyHashSet {
5private:
6    int size = 1000;                     // number of buckets
7    vector<vector<int>> buckets;         // 2D vector: each row = one bucket
8
9    int hash(int key) {
10        return key % size;
11    }
12
13public:
14    MyHashSet() {
15        buckets.resize(size);           // creates 1000 empty buckets
16    }
17
18    void add(int key) {
19        int index = hash(key);
20
21        // SIMPLE loop to check if key already exists
22        for (int i = 0; i < buckets[index].size(); i++) {
23            if (buckets[index][i] == key) {
24                return;   // key already exists
25            }
26        }
27
28        // Insert key into bucket
29        buckets[index].push_back(key);
30    }
31
32    void remove(int key) {
33        int index = hash(key);
34        int bucketSize = buckets[index].size();
35
36        // SIMPLE loop to find and erase key
37        for (int i = 0; i < bucketSize; i++) {
38            if (buckets[index][i] == key) {
39                // Shift elements left to remove key
40                for (int j = i; j < bucketSize - 1; j++) {
41                    buckets[index][j] = buckets[index][j + 1];
42                }
43                buckets[index].pop_back();  // remove last duplicate
44                return;
45            }
46        }
47    }
48    bool contains(int key) {
49        int index = hash(key);
50
51        // SIMPLE loop to search key
52        for (int i = 0; i < buckets[index].size(); i++) {
53            if (buckets[index][i] == key) {
54                return true;
55            }
56        }
57
58        return false;
59    }
60};
61
62
63
64/**
65 * Your MyHashSet object will be instantiated and called as such:
66 * MyHashSet* obj = new MyHashSet();
67 * obj->add(key);
68 * obj->remove(key);
69 * bool param_3 = obj->contains(key);
70 */
71
72
73 /*class MyHashSet {
74public:
75    vector<bool> arr; // Boolean array
76
77    MyHashSet() {
78        arr.resize(1000001, false);  // Initialize all values to false
79    }
80    
81    void add(int key) {
82        arr[key] = true;
83    }
84    
85    void remove(int key) {
86        arr[key] = false;
87    }
88    
89    bool contains(int key) {
90        return arr[key];
91    }
92};*/