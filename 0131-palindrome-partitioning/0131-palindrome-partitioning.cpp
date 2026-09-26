class Solution {
public:
bool isPalin( string s){
    string s2 = s;
    reverse(s2.begin() , s2.end());
    return s == s2;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector <string> partions;
   
        getallpartions(s, ans , partions);
        return ans;
    }
     void getallpartions(string s ,vector<vector<string>> &ans , vector <string> &partions){
        if(s.size() == 0){
            ans.push_back(partions);
            return ;
        }
        for(int i = 0 ; i < s.size(); i++){
            string part = s.substr(0 , i+ 1);
            if(isPalin(part)){
                partions.push_back(part);
                getallpartions(s.substr(i+1) ,ans,partions);
                partions.pop_back();
            }
        }
    }
    
};