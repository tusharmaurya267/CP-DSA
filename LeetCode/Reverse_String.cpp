class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        for(int i=0;i<((s.size())/2);++i,--j)
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};