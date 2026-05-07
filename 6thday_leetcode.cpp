#include <string>
#include <vector>

using namespace std;

// LeetCode #6: Zigzag Conversion
// Aapko ek string s aur numRows diya hota hai.
// String ko zigzag pattern me likhkar row-by-row read karna hota hai.

// Example 1:
// s = "PAYPALISHIRING", numRows = 3
// Zigzag:
// P   A   H   N
// A P L S I I G
// Y   I   R
// Answer = "PAHNAPLSIIGYIR"

// Example 2:
// s = "PAYPALISHIRING", numRows = 4
// Answer = "PINALSIGYAHRPI"

// Note:
// 1) numRows = 1 ho to output same string hota hai.
// 2) numRows >= s.length() ho to bhi arrangement change nahi hota.

// Approach: Row simulation.
// 1) Har row ke liye ek string maintain karo.
// 2) Characters ko top-to-bottom aur phir bottom-to-top direction me place karo.
// 3) End me sab rows ko join karke result bana do.
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1 || numRows >= static_cast<int>(s.size())) {
			return s;
		}

		vector<string> rows(numRows);
		int currentRow = 0;
		bool goingDown = false;

		for (char ch : s) {
			rows[currentRow].push_back(ch);

			// First ya last row par direction flip hoti hai.
			if (currentRow == 0 || currentRow == numRows - 1) {
				goingDown = !goingDown;
			}

			currentRow += goingDown ? 1 : -1;
		}

		string answer;
		answer.reserve(s.size());
		for (const string& row : rows) {
			answer += row;
		}

		return answer;
	}
};
