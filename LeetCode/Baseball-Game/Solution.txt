1class Solution {
2public:
3    int calPoints(vector<string>& ops) {
4        vector<int> record;
5        for (string op : ops) {
6            if (op == "+") record.push_back(record.back() + record[record.size() - 2]);
7            else if (op == "D") record.push_back(2 * record.back());
8            else if (op == "C") record.pop_back();
9            else record.push_back(stoi(op));
10        }
11        int total = 0;
12        for (int num : record) {
13            total += num;
14        }
15    return total;
16    }
17};
18
19
20// class Solution {
21// public:
22//     int calPoints(vector<string>& ops) {
23//         stack<int>stack;
24//         for(string op:ops){
25//             if(op=="+"){
26//                 int top1=stack.top();
27//                 stack.pop();//to get the last second digit;
28//                 int top2=stack.top();//it will give the second last digit
29//                 stack.push(top1);
30//                 stack.push(top1+top2);
31//             }else if(op=="D"){
32//                 stack.push(2*stack.top());
33
34//             }else if(op=="C"){
35//                 stack.pop();
36//             }else{
37//                 stack.push(stoi(op));
38//             }
39//         }
40//         int sum=0;
41//         while(!stack.empty()){
42//            sum+= stack.top();
43//            stack.pop();
44//         }
45//         return sum;
46//     }
47// };