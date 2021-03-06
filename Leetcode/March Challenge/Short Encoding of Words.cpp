class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) 
    {
        int len = 0, n = words.size();
        for(auto &word : words)
        {
            reverse(begin(word), end(word));   // reverse all words
        }      
        sort(begin(words), end(words));   // sort array
	    for(int i = 0; i < n; i++)
        {
            // forming collection of words. If next word starts from current word, it comes under this collection
            while(i + 1 < n && words[i + 1].substr(0, words[i].size()) == words[i]) 
            {
                i++;
            }	
		    //adding length of largest word from collection. +1 for # appended at end.
		    len += words[i].size() + 1;                                
	    }
	return len;
    }
};
