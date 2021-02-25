class Solution
{
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        long long int area = 0;
        long long int left = 0, right = n-1;
        while(left <= right)
        {
            long long int width = (right-left)-1;
            long long int length = min(height[left],height[right]);
            long long int a = length * width;
            area = max(area, a);
            if(height[left] < height[right])
            {
                left++;
                continue;
            }
            else if(height[right] < height[left])
            {
                right--;
                continue;
            }
            left++;
            right--;
        }
        return area;
    }   
};
