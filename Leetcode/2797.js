/**
 * @param {Function} fn
 * @param {Array} args
 * @return {Function}
 */
var partial = function(fn, args) {
    
	return function(...restArgs) {

        var idx = 0;

		for(var i = 0; i < args.length; i++){
            if(args[i] === '_') args[i] = restArgs[idx++];
        }

        for(idx; idx < restArgs.length; idx++) 
            args.push(restArgs[idx]);

        return fn(...args);
    }
};