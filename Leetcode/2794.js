/**
 * @param {Array} keysArr
 * @param {Array} valuesArr
 * @return {Object}
 */
var createObject = function(keysArr, valuesArr) {
    var map = new Map();

    for(var i = 0; i < keysArr.length; i++){
        if(!(keysArr[i] in map)){
            map[keysArr[i]] = valuesArr[i];
        }   
    }

    return map;
};