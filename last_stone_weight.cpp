//if stone heavy, smash ; x always <= y ; if = then both dead ; if y heavier then x die and y = y - x

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> prioque(stones.begin(),stones.end());
        while(prioque.size()>1){
            int x = prioque.top();
            prioque.pop();
            int y= prioque.top();
            prioque.pop();
            prioque.push(x-y);
        }
        return prioque.top();
    }
};