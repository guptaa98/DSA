class Solution {
public:
    #define mod 1000000007
    int threeSumMulti(vector<int>& arr, int target) 
    {
        sort(arr.begin(),arr.end());
        int ans = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            int sum = target - arr[i];
            int l = i + 1;
            int r = arr.size() - 1;
            
            while(l < r)
            {
                if(arr[l] + arr[r] < sum)
                {
                    l++;
                }
                else if(arr[l] + arr[r] > sum)
                {
                    r--;
                }
                else
                {
                    int cnt1 = 0;
                    int cnt2 = 0;
 
                    int j = l;
                    int k = r;
                    
                    while(j<=r and arr[j]==arr[l])
                    {
                        j++;
                        cnt1++;
                    }
                    if(j > r)
                    {
                        int take = (cnt1*(cnt1-1)) / 2;
                        ans = (ans+take) % mod;
                    }
                    else
                    {
                        while(k>=j and arr[k]==arr[r])
                        {
                            k--;
                            cnt2++;
                        }
                        ans = (ans + (cnt1*cnt2) % mod) % mod;
                    }
                    l = j;
                    r = k;
                }
            }
        }
        return ans;
    }
};
