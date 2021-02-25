class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(), array.end());
        long long int ms = 1;
        for (int i = 0; i < n && array[i] <= ms; i++)
        {
            ms += array[i];
        }
        
        return ms; 
    } 
};
