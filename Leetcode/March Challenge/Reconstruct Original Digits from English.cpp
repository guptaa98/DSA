class Solution {
public:
    //{"zero", "two", "four", "six", "eight", "one", "three", "five", "seven", "nine"};
    //{'z', 'w', 'u', 'x', 'g', 'o', 'r', 'f', 'v', 'i'};
    string originalDigits(string s) 
    {
        int nums[10] = {0};
        int map[26] = {0};
        
        for(auto ch : s)
        {
            map[ch - 'a']++;
        }
        
        nums[0] = map['z' - 'a'];
        nums[2] = map['w' - 'a'];
        nums[4] = map['u' - 'a'];
        nums[6] = map['x' - 'a'];
        nums[8] = map['g' - 'a'];
        nums[1] = map['o' - 'a'] - nums[2] - nums[4] - nums[0];
        nums[3] = map['r' - 'a'] - nums[4] - nums[0];
        nums[5] = map['f' - 'a'] - nums[4];
        nums[7] = map['v' - 'a'] - nums[5];
        nums[9] = map['i' - 'a'] - nums[8] - nums[6] - nums[5];
        
        string res = "";
        
        for(int i = 0; i < 10; i++)
        {
             while(nums[i]--)
             {
                 res += to_string(i);
             }
        }
        
        sort(res.begin(),res.end());
        return res ;
    }
};
