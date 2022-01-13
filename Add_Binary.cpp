class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1,carry=0;
        string sum="";
        while(i>=0 || j>=0 || carry==1){
            carry+=i>=0?a[i--]-'0':0;
            carry+=j>=0?b[j--]-'0':0;
            sum=char(carry%2+'0')+sum;
            carry/=2;
        }
        return sum;
    }
};
