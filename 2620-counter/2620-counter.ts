function createCounter(n: number): () => number {
    let x = 0;
    return ()  => {
    const y = n + x;
    x ++;
    return y;
    };
    
}


/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */