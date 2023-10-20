/**
 * @param {number} n
 * @yields {number}
 */
function* factorial(n) {
    if(n == 0) yield 1;
    var curr = 1;
    var cnt = 1;

    for(var i = 0; i < n; i++){
        curr *= cnt++;
        yield curr;
    }
};


/**
 * const gen = factorial(2);
 * gen.next().value; // 1
 * gen.next().value; // 2
 */