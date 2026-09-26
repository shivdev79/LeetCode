class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue <int> p;
        for(int i = 0 ; i < gifts.size() ; i++){
            p.push(gifts[i]);
        }
        while(k--){
            int x = p.top();
            p.pop();
            p.push(sqrt(x));
        }
        long long sum = 0;
        while(!p.empty()){
            sum = sum + p.top();
            p.pop();
        }
        return sum;
    }
};