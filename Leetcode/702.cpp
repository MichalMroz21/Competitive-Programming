/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        
        int L{}, R = pow(10, 4);

        bool side = 1;

        while(L <= R){

            int m = L + (R - L)/2, curr = reader.get(m);

            if(curr == target) return m;
            if(curr > target) R = m - 1;
            else L = m + 1;           
        }

        return -1;
    }
};