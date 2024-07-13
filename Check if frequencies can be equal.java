boolean sameFreq(String s) {
        // code here
        Map<Integer,Integer> counts = new HashMap<>();
        Map<Character,Integer> map = new HashMap<>();
        for(int i=0;i<s.length();i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0)+1);
            
        }
        for(int count:map.values()){
            counts.put(count,counts.getOrDefault(count,0)+1);
        }
        if(counts.size()==1)
            return true;
        if(counts.size()>2)
            return false;
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        for(int count:counts.keySet()){
            min=Math.min(min,count);
            max=Math.max(max,count);
        }
        if(counts.get(max)==1&&max-min == 1)
            return true;
        if(counts.get(min)==1&&min==1&&max-min >= 1)
            return true;
        return false;
    }
