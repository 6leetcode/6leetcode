/**
 * @param {number} buckets
 * @param {number} minutesToDie
 * @param {number} minutesToTest
 * @return {number}
 */
var poorPigs = function(buckets, minutesToDie, minutesToTest) {
    const times = minutesToTest / minutesToDie;
    const base = times + 1;
    // base ^ ans >= buckets 
    // ans >= log(buckets) / log(base)
    const temp = Math.log(buckets) / Math.log(base);
    const ans = Math.ceil(temp)
    return ans;
};

let buckets = 1000,
    minutesToDie = 15,
    minutesToTest = 60;
console.log("Input: ", buckets, minutesToDie, minutesToTest);
console.log("Output:", poorPigs(buckets, minutesToDie, minutesToTest));