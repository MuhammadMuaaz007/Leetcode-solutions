class Solution {
public:
    bool isPowerOfThree(int n) {
              if(n==1){
            return true;
        }
        int sq=1;
        for(int i=0 ; sq <= n ; i++){
            if (sq > n / 3) break;
            sq=sq*3;
            if(sq==n) return true;
        }
        return false;
    }
};
