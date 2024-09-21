/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
	x = x.toString();
	let palindrome = x.split("").reverse().join("");
	return palindrome === x;
};
