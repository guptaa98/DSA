/*
FREQUENCY MAP ;

input--->5 7 5 7 4 5 

freq[5]=3;
freq[7]=2;
freq[4]=1;



*/

/*
MYMAP --> WHICH STORES THE ELEMENT WITH DISTINCT FREQ

mymap[1] -->5,7,4 .........elements with freq 1;
mymap[2]-->5,7    .........elements with freq 2;
mymap[3]-->5      .........elements with freq 3;
 
*/
class FreqStack {
public:
    int maxf;
    unordered_map<int,int> freq;
    unordered_map<int, stack<int>> mymap;
    FreqStack() 
    {
        maxf = 0;
    }
    
    void push(int x) 
    {
        if(freq[x] > 0)
        {
            freq[x]++;
        }
        else
        {
            freq[x] = 1;
        }
        mymap[freq[x]].push(x);
        maxf = max(maxf, freq[x]);
        
        return;
    }
    
    int pop() 
    {
        int ans = mymap[maxf].top();
        freq[ans]--;
        mymap[maxf].pop();
        if (mymap[maxf].empty())
        {
            maxf -= 1; 
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
