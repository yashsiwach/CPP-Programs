 bool check(vector<ll> a, vector<ll> b, int N) {
        // //code here
        // int flag=0;
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // for (int i=0;i<N;i++){
            
        //     if(a[i]!=b[i]){  flag++;
           
        //     }
            
          
        // }
        // if (flag==0) return true;
        // else return false;
        
        unordered_map<ll,ll>mp1,mp2;
        for(int i:a)mp1[i]++;
        for(int i:b)mp2[i]++;
        return mp1==mp2;
    }