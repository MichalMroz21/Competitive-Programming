/**
 * @param {number} times
 * @return {string}
 */
String.prototype.replicate = function(times) {
    var str = "";
    for(var i = 0; i < times; i++){
        str += this
    }
    return str;
}