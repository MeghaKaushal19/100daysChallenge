class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i,c=0;
        for(i=0;i<arr.size();i++){
            if(arr[i]!=val){
                arr[c]=arr[i];
                c++;
            }
        }
        return c;
    }
};
