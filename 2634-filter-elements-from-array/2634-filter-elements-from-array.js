/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    const newArr = [];
    for (let i = 0; i < arr.length; i++) {
        if (Boolean(fn(arr[i], i)) === true)
            newArr.push(arr[i])
    }
    return newArr;

};