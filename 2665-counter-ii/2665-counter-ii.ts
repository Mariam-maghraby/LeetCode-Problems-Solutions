type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): Counter {
    var newInit = init;
    return {
        increment: () => { return ++newInit},
        decrement: () => { return --newInit },
        reset: () => { return newInit = init},
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */