class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        int n = arr.size(), trim = n / 20, sm{};

        priority_queue<int> pq1{}, pq2{};

        for(auto i : arr){

            pq1.push(-i);
            if(pq1.size() > trim) pq1.pop();

            pq2.push(i);
            if(pq2.size() > trim) pq2.pop();

            sm += i;
        }

        while(!pq1.empty()){
            sm -= -pq1.top();
            pq1.pop();
        }
        
        while(!pq2.empty()){
            sm -= pq2.top();
            pq2.pop();
        }

        return sm / (double)(n - trim * 2);
    }
};