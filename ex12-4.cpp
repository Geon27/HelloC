#include<iostream>
#include<string>
using namespace std;

class Image{ /* �� �� */ };

class TextMessage { /* �� �� */ };

class ImageMessage { /* �� �� */ };

int main() {
	Image* dogImage = new Image;
	TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
	ImageMessage* dog = new ImageMessage(20, "�ε�", dogImage);

	cout << "�����ð� : " << hello->GetSendTime() << endl;
	cout << "������� : " << hello->GetSendName() << endl;
	cout << "��      �� : " << hello->GetText() << endl;
	cout << endl;

	cout << "�����ð� : " << hello->GetSendTime() << endl;
	cout << "������� : " << hello->GetSendName() << endl;
	cout << "��      �� : " << hello->(string)*dog->GetImage() << endl;
	cout << endl;

	delete dogImage;
	delete hello;
	delete dog;
}