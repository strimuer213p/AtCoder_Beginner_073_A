/*
問題文
今、日本は 9 月 9 日です。 二桁の整数 N が与えられるので、十進法で N に 9 が含まれるか答えてください。
*/

//#9月9日はチルノの日


#include<iostream>

const int digit = 2; //今回は2桁なので　digit=2; 何桁でも対応するプログラムが書きたい

int main() {
	bool flag=false;
	int num;
	std::cin >> num;

	for (int i = 0; i < digit; i++) {
		if ((num % 10) % 9 == 0 && num%10) {
			flag = true;
			break;
		}
		num /= 10;
	}

	std::cout << (flag ? "Yes" : "No") << std::endl;

	return 0;
}