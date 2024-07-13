vector<int> twoRepeated (int arr[], int n) {
       vector<int>result; 
       map<int,int>mapp;
       for(int i=0;i<n+2;i++){
           mapp[arr[i]]++;
       if(mapp[arr[i]] == 2)
        result.push_back(arr[i]);
       }
        return result;
       
    }
