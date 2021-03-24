class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) 
    {
        sort(A.begin(),A.end());  // Upper bound works on sorted arrays
        vector<int> ans;
        for(auto i: B)
        {
            auto ele = upper_bound(A.begin(),A.end(),i);  // Get the first element strictly greater than i
            if(ele==A.end())   // If no element is greater than i, then use the least useful element in A, i.e,                                     the smallest one
            {
                ele = min_element(A.begin(),A.end());
            }
            ans.push_back(*ele);
		    A.erase(ele); // Remove it from A
	}
	return ans;
    }
};
