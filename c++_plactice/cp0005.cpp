#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string s1,s2,s3;
	string ss;
	char cc[80];

	s1 = "ABCD";
	s2 = "EFGH";
	s3 = s1 + s2;

	cout << "s1=" << s1 << '\n';
	cout << "s2=" << s2 << '\n';
	cout << "s3=" << s3 << '\n';

	if(s1 == s2)
		cout << "s1とs2は等しい\n";
	else
		cout << "s1とs2は等しくない\n";

	strcpy(cc, "cccccc");
	ss = cc;
	cout << "ss=" << ss << " cc=" << cc << '\n';

	return 0;
}
