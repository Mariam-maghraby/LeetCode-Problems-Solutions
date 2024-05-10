/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    let len = arr.length 
    for (let i = len; i >= 0; i--) {
        if (Boolean(fn(arr[i], i)) === false)
            arr.splice(i, 1);
            len --;
    }
    return arr;

};