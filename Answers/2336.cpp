class SmallestInfiniteSet {
public:

    int currentSmallest{};
    priority_queue<int> addedBack{};

    SmallestInfiniteSet() : currentSmallest(1), addedBack() {}
    
    int popSmallest() {
        if(addedBack.empty()) return currentSmallest++;
        else{
            int returnVal = addedBack.top();
            addedBack.pop();
            while(!addedBack.empty() && returnVal == addedBack.top()) addedBack.pop(); //when value was addded back multiple times, yes, that makes sense to do, thank You Leetcode.
            return (-1) * returnVal;
        }
    }
    
    
    void addBack(int num) {
        if(currentSmallest > num) addedBack.push((-1) * num); //checking if We are adding a value that wasn't removed, thank You Leetcode.
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */