#include<iostream>
#include<string>
using namespace std;

class Image{ /* 생 략 */ };

class TextMessage { /* 생 략 */ };

class ImageMessage { /* 생 략 */ };

int main() {
	Image* dogImage = new Image;
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	ImageMessage* dog = new ImageMessage(20, "두들", dogImage);

	cout << "보낸시간 : " << hello->GetSendTime() << endl;
	cout << "보낸사람 : " << hello->GetSendName() << endl;
	cout << "내      용 : " << hello->GetText() << endl;
	cout << endl;

	cout << "보낸시간 : " << hello->GetSendTime() << endl;
	cout << "보낸사람 : " << hello->GetSendName() << endl;
	cout << "내      용 : " << hello->(string)*dog->GetImage() << endl;
	cout << endl;

	delete dogImage;
	delete hello;
	delete dog;
}