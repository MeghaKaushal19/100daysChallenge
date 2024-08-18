bool canSplit(vector<int>& arr) {
        // code here
        int right=0,left=0;
        
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        right+=arr[i];
        
        for(int i=0;i<n;i++)
        {
            left+=arr[i];
            right-=arr[i];
            
            if(left==right)
            return true;
            
        }
        
        return false;
    }
