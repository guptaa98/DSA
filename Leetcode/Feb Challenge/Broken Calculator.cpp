class Solution {
public:
    int brokenCalc(int X, int Y) 
    {
        int count = 0;
        while (Y > X)
        {
            count++;
            if (Y % 2 == 0)
            {
                Y = Y/2;
            }
            else
            {
                Y = Y + 1;
            }
        }
        return count + abs(X-Y);
    }
};
