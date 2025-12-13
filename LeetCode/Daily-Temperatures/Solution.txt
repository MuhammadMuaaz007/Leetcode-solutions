1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        
5    int n =temperatures.size();
6    stack<int>st;
7    vector<int>result(n);
8    for(int i=n-1; i>=0;i--){
9        while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
10            st.pop();
11        }if(st.empty()){
12            result[i]=0;
13        }else{
14            result[i]=st.top()-i;
15        }
16        st.push(i);
17        }
18        return result;
19    }
20};