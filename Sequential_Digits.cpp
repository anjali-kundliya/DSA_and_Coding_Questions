class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        vector<int> result;
        int nl = to_string(low).length();
        int nh = to_string(high).length();

        for(int i = nl; i <= nh; ++i){
            for(int j = 0; j < 10-i; ++j){
                int num = stoi(digits.substr(j, i));
                if(num >= low && num <= high) result.push_back(num);
            }
        }
        return result;
    }
};
