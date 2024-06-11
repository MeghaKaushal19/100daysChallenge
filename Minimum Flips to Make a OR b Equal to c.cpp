class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        while(a || b || c){
            if(c & 1){
                if(!(a&1) && !(b&1)){
                    flips++;
                }
            }
            else{
                if(a & 1) flips++;
                if(b & 1) flips++;
            }
            a = a>>1;
            b = b>>1;
            c = c>>1;
        }
        return flips;       
    }
};
