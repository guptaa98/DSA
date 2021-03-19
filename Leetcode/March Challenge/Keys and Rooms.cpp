class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        vector<bool> roomv(rooms.size(), false);
        int a = 0;
        stack <int> stk;
        stk.push(0);
        while(!stk.empty())
        {
            int k = stk.top();
            stk.pop();
            if(roomv[k] == true)
            {
                continue;
            }
            else
            {
                roomv[k] = true;
                a++;
                for(int i = 0; i < rooms[k].size();i++)
                {
                    if(roomv[rooms[k][i]] != true)
                    {
                        stk.push(rooms[k][i]);
                    }
                }
            }
        }
        return (a==rooms.size());
    }
};
