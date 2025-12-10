class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        for (string op : ops) {
            if (op == "+") record.push_back(record.back() + record[record.size() - 2]);
            else if (op == "D") record.push_back(2 * record.back());
            else if (op == "C") record.pop_back();
            else record.push_back(stoi(op));
        }
        int total = 0;
        for (int num : record) {
            total += num;
        }
    return total;
    }
};


// class Solution {
// public:
//     int calPoints(vector<string>& ops) {
//         stack<int>stack;
//         for(string op:ops){
//             if(op=="+"){
//                 int top1=stack.top();
//                 stack.pop();//to get the last second digit;
//                 int top2=stack.top();//it will give the second last digit
//                 stack.push(top1);
//                 stack.push(top1+top2);
//             }else if(op=="D"){
//                 stack.push(2*stack.top());

//             }else if(op=="C"){
//                 stack.pop();
//             }else{
//                 stack.push(stoi(op));
//             }
//         }
//         int sum=0;
//         while(!stack.empty()){
//            sum+= stack.top();
//            stack.pop();
//         }
//         return sum;
//     }
// };
