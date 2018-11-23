#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.get(); cin.get();
	while (t--) {
		map<string, double> spec;
		vector<string>woodspec;
		string wood;
		while (getline(cin, wood)) {
			if (wood == "")
				break;
			if (spec.count(wood) != 1)
				woodspec.push_back(wood);
			spec[wood]++;
		}
		double total = 0;
		for (int i = 0; i < woodspec.size(); ++i) total += spec[woodspec[i]];
		sort(woodspec.begin(), woodspec.end());
		for (int i = 0; i < woodspec.size(); ++i)
			cout << woodspec[i] << ' ' << fixed << setprecision(4) << double(100)*spec[woodspec[i]] / total << '\n';
		if(t > 0)
			cout << '\n';
		}
	}
	return 0;
}