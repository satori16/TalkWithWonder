#include <iostream>
#include <string>
#include <vector>
#include <conio.h>//���ˑ��ł��B
#include <chrono>
#include <thread>

typedef std::vector<std::string> Data;

bool MakeHoge() {
	std::cout << std::endl;
	std::cout << std::endl;
	Data D = { "���Ȃ��̃n���h���l�[���͉��ł����H\n\n" ,"���Ȃ��ɂ͍�肽�����̂͂���܂����H\n\n","����͖c��݂܂����H\n\n","�������牽���������܂����H\n\n","����ɂ͉����P�����̂͂���܂����H\n\n" };

	std::cout << "The Talk With Wonder!" << std::endl;
	std::cout << std::endl;

	std::cout << "�񓚂��v�������牽���̃L�[�������Ă��������B" << std::endl;
	std::cout << "�[�������Ȃ�������A�v���P�[�V�������I�������Ă��������B" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	int key = _getch();

	if (key == 27)return false;//���ˑ��ł��Besc?

	for (std::size_t i = 0; i < D.size(); i++) {
		std::cout << D[i] << std::endl;

		key = _getch();
		
		if (key == 27)return false;//���ˑ��ł��Besc?
	}
	std::cout << "���ꂪ���Ȃ��̑z���ł��B" << std::endl;
	std::cout << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(16 * 94));

	std::cout <<"The Wonder..."<< std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(3));

	return true;
}

int main() {
	MakeHoge();

	return 0;
}