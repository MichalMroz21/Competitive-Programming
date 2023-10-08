class Solution {
public:
    int minimumSum(int num) {
        
        priority_queue<int> pq{};

        while(num != 0){
            pq.push((-1) * (num % 10));
            num /= 10;
        }

        int times10Count = 2, result{};

        while(times10Count-- != 0){
            result += pq.top() * (-1);
            pq.pop();
        }

        result *= 10;

        while(!pq.empty()) {
            result += pq.top() * (-1);
            pq.pop();
        }

        return result;
    }
};