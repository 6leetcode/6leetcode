import array from '../../library/typescript/array';

const twoSum = (nums: number[], target: number): number[] => {
  const map = new Map()

  for (const idx in nums) {
    const diff = target - nums[idx]

    if (map.has(diff)) {
      return [map.get(diff), +idx]
    }

    map.set(nums[idx], +idx)
  }

  return []
}

let input1 = [1, 2, 3];
let input2 = 3;


console.log(`Input:  ${array(input1)}, ${input2}`);
console.log(`Output: ${array(twoSum(input1, input2))}`);
