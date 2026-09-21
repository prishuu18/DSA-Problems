class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        list<int> l;
        for(int x: stones){
            l.push_back(x);
        }
        while(l.size()>1){
            auto max1 = max_element(l.begin(),l.end());
            int a = *max1;
            l.erase(max1);

            auto max2 = max_element(l.begin(),l.end());
            int b = *max2;
            l.erase(max2);

            if(a!=b){
                l.push_back(a-b);
            }
        }
     
     if(l.empty()) return 0;
     return  l.front();
    }
};