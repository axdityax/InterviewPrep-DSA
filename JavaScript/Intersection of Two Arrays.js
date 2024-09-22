// /**
//  * @param {number[]} nums1
//  * @param {number[]} nums2
//  * @return {number[]}
//  */
// var intersection = function (nums1, nums2) {
// 	let result = [];
// 	for (let i = 0; i < nums1.length; i++) {
// 		for (let j = 0; j < nums2.length; j++) {
// 			if (nums1[i] === nums2[j] && !result.find((x) => x === nums1[i])) {
// 				result.push(nums1[i]);
// 				break;
// 			}
// 		}
// 	}
// 	return result;
// };

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function (nums1, nums2) {
	let result = new Set();
	nums2Set = new Set(nums2);
	for (let i = 0; i < nums1.length; i++) {
		for (let j = 0; j < nums2.length; j++) {
			if (nums2Set.has(nums1[i]) && nums2Set.has(nums1[i])) {
				result.add(nums1[i]);
				break;
			}
		}
	}
	return [...result];
};
