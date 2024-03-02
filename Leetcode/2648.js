/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    fib = [0, 1]

    yield fib[0]
    yield fib[1]

    while(true){

        var n = fib.length;
        fib.push(fib[n - 1] + fib[n - 2]);
        yield fib[fib.length - 1];

    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */