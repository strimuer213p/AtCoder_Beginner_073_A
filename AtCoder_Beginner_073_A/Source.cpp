/*
��蕶
���A���{�� 9 �� 9 ���ł��B �񌅂̐��� N ���^������̂ŁA�\�i�@�� N �� 9 ���܂܂�邩�����Ă��������B
*/

//#9��9���̓`���m�̓�


#include<iostream>

const int digit = 2; //�����2���Ȃ̂Ł@digit=2; �����ł��Ή�����v���O��������������

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