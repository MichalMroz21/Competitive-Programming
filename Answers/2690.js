/**
 * @return {Object}
 */
var createInfiniteObject = function() {
    return new Proxy({}, {
        get: (target, prop)=> ()=>prop
    });
};

/**
 * const obj = createInfiniteObject();
 * obj['abc123'](); // "abc123"
 */