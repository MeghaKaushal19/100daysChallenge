class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        for(int i=0; i<arr2.size(); i++){
            arr1.push_back(arr2[i]);
        }
        sort(arr1.begin(), arr1.end());
        return arr1[arr1.size()/2] + arr1[(arr1.size()/2)-1];
    }
};
