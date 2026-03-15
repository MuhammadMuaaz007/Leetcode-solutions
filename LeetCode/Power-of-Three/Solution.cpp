class Solution {
public:
    bool isPowerOfThree(int a) {
              if(a==1){
            return true;
        }

        int sq=1;
        for(int i=0 ; sq <= a ; i++){
            if (sq > a / 3) break;
            sq=sq*3;
            if(sq==a) return true;
        }
        return false;
    }
};
