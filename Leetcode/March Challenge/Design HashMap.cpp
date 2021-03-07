class MyHashMap {
public:
    vector<pair<int,int>> mp;
    /** Initialize your data structure here. */
    MyHashMap() 
    {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) 
    {
        bool flag = false;
        for(int i = 0; i < mp.size(); i++)
        {
            if(mp[i].first == key)
            {
                mp[i].second = value;
                flag = true;
            }
        }
        if(flag == false)
        {
            mp.push_back(make_pair(key,value));
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) 
    {
        for(int i = 0; i < mp.size(); i++)
        {
            if(mp[i].first == key)
            {
                return mp[i].second;
            }
        }
        return -1;
        //return mp[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) 
    {
        for(int i = 0; i < mp.size(); i++)
        {
            if(mp[i].first == key)
            {
                mp[i].second = -1;
                mp[i].first = -1;
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
