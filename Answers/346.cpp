class MovingAverage {
public:

    deque<int> window;

    int size{}, sum{}, cnt{};

    MovingAverage(int size) : size(size) {}
    
    double next(int val) {

        if(window.size() == size){
            sum -= window.front();
            window.pop_front();
            cnt--;
        }

        sum += val;
        window.push_back(val);
        cnt++;
        
        return sum / (double)cnt;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */