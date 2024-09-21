/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function (s) {
	s = s.split("");

	let map = new Map();
	for (let i = 0; i < s.length; i++) {
		map.set(s[i], (map.get(s[i]) || 0) + 1);
	}

	const sortedMap = [...map.keys()].sort((a, b) => map.get(b) - map.get(a));

	let result = "";
	for (let ch of sortedMap) {
		result += ch.repeat(map.get(ch));
	}

	return result;
};
