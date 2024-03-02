/** 
 * @param {number} target
 * @return {number}
 */
Array.prototype.upperBound = function(target) {
    var arr = this;

    var L = 0, R = arr.length - 1;

    while(L + 1 < R){

        var m = Math.floor(L + (R - L)/2);

        if(arr[m] <= target) L = m;
        else R = m - 1;

    }

    if(arr[R] == target) return R;
    if(arr[L] == target) return L;

    return -1;
};


// [3,4,5].upperBound(5); // 2
// [1,4,5].upperBound(2); // -1
// [3,4,6,6,6,6,7].upperBound(6) // 5