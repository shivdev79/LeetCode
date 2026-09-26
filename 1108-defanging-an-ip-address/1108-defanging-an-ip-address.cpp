class Solution {
public:
    string defangIPaddr(string address) {
        string temp = "";
        int index = 0 ;
        while(index < address.size()){
            if(address[index] == '.'){
                temp = temp + "[.]";
            }
            else{
                temp = temp + address[index];
            }
            index++;
        }
        return temp;
    }
};