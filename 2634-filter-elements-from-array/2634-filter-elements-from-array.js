/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    const newArr = [];
    arr.forEach((element, index) => Boolean(fn(element, index)) === true ? newArr.push(element) : null)

    return newArr;

};