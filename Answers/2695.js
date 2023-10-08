/**
 * @param {number[]} nums
 */
var ArrayWrapper = function(nums) {
    this.nums = nums;
};

ArrayWrapper.prototype.valueOf = function() {
    var sum = 0;

    for(var i = 0; i < this.nums.length; i++){
        sum = sum + this.nums[i];
    }
    
    return sum
}

ArrayWrapper.prototype.toString = function() {
    var str = "[";

    for(var i = 0; i < this.nums.length; i++){
        str += String(this.nums[i]);
        str += ",";
    }

    if(str.length > 1) str = str.slice(0, -1);
    str += "]";

    return str;
}

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */