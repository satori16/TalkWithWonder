#include <iostream>
#include <string>
#include <vector>
#include <conio.h>//環境依存です。
#include <chrono>
#include <thread>

typedef std::vector<std::string> Data;

bool MakeHoge() {
	std::cout << std::endl;
	std::cout << std::endl;
	Data D = { "あなたのハンドルネームは何ですか？\n\n" ,"あなたには作りたいものはありますか？\n\n","それは膨らみますか？\n\n","そこから何かかえられますか？\n\n","それには何か輝くものはありますか？\n\n" };

	std::cout << "The Talk With Wonder!" << std::endl;
	std::cout << std::endl;

	std::cout << "回答を思いついたら何かのキーを押してください。" << std::endl;
	std::cout << "納得いかなかったらアプリケーションを終了させてください。" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	int key = _getch();

	if (key == 27)return false;//環境依存です。esc?

	for (std::size_t i = 0; i < D.size(); i++) {
		std::cout << D[i] << std::endl;

		key = _getch();
		
		if (key == 27)return false;//環境依存です。esc?
	}
	std::cout << "それがあなたの想いです。" << std::endl;
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