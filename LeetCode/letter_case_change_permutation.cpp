class Solution {
public:
    void solve(string input,string output,vector<string>&v){
        if(input.length()==0){
            v.push_back(output);
            return;
        }
        if(!isalpha(input[0])){
            string output1=output+input[0];
            input.erase(input.begin()+0);
            solve(input,output1,v);
            return;
        }
        char ch1= tolower(input[0]);
        char ch2= toupper(input[0]);
        string output1=output + ch1;
        string output2=output + ch2;
        input.erase(input.begin()+0);
        solve(input,output1,v);
        solve(input,output2,v);
        return;
    }
    vector<string> letterCasePermutation(string s) {
        string output="";
        vector<string>v;
        solve(s,output,v);
        return v;
    }
};