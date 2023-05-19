class Solution {
public:
    int kthGrammar(int n, int k) {
        if(k==1 && n==1){
            return 0;
        }
        int mid=pow(2,n-1)/2;
        if(k<=mid){
            return kthGrammar(--n,k);
        }
        else{
            return !kthGrammar(--n,k-mid);
        }
    }
};