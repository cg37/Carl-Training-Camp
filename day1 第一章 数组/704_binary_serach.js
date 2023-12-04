/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
  let left = 0
  let mid = 0
  let right = nums.length - 1
  while (left <= right) {
    mid = (left >> 1) + (right >> 1)
    if (target < nums[mid]) {
      right = mid - 1
    } else if (target > nums[mid]) {
      left  = mid + 1
    } else {
      return mid
    }
  }
  return -1
};

let search2 = function (nums, target) {
  let left = 0
  let mid = 0
  let right = nums.length - 1

  while (left < true) {
    mid = ((left + right) / 2) >> 0
    if (target < nums[mid]) {
      right = mid
    } else if (nums[mid] < target) {
      left = mid + 1
    } else {
      return mid
    }
  }
  return -1
}
