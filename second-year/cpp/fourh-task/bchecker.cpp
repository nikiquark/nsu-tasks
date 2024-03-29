#include "bchecker.h"
#include <stack>

bool BraceChecker::isBalanced(std::string& s) {
	std::stack<char> a;
	for (int i = 0; i < s.length(); i++) {
		if (!a.empty()) {
			if ((s[i] == ')' && a.top() == '(') ||
				(s[i] == '}' && a.top() == '{') ||
				(s[i] == ']' && a.top() == '[')){
				a.pop();
				continue;
			}
		}
		a.push(s[i]);
	}
	return a.empty();
}