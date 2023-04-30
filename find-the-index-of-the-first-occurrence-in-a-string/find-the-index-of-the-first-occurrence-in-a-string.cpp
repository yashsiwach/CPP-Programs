class Solution {
public:
    int strStr(string haystack, string needle) {
        // badi string me choti stirng ka index btana h bass
        //find function lago 
        int a=haystack.find(needle);
        //npos mtlb ki koi position ni h mtlb usme nhi h vo to -1 krdo
        if(a==string::npos) return -1;
        //agr h pos to usko return krdo done babs!!!
        else return a; 

    }
};
