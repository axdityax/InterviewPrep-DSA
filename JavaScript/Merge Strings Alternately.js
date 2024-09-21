/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function (word1, word2) {
	let m = word1.length;
	let n = word2.length;
	let result = "";
	let i = 0,
		j = 0;

	while (i < m || j < n) {
		if (i < m) {
			result += word1[i++];
		}
		if (j < n) {
			result += word2[j++];
		}
	}

	return result;
};
