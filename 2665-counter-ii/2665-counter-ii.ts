class Counter {
    init: number;
    presentCount: number;
    constructor(init: number){
        this.init = init
        this.presentCount = init;
    }

    increment() { 
       this.presentCount ++;
        return this.presentCount
    }
    decrement() {  
        this.presentCount --;
        return this.presentCount
    }
    reset() { 
        this.presentCount = this.init;
        return this.presentCount
    }

}

function createCounter(init: number): Counter {
    return new Counter(init) 
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */