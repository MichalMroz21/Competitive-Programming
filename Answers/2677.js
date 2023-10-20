/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    var ans = [], subArr = [], cnt = 0;

    for(var i = 0; i < arr.length; i++){

        cnt++;
        subArr.push(arr[i]);

        if(cnt == size) {
            cnt = 0;
            ans.push(subArr);
            subArr = [];
        }
    }

    if(subArr.length > 0) ans.push(subArr);
    return ans;
};
