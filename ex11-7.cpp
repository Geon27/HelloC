#include<iostream>
#include<string.h>
using namespace std;

class String {
public:
	String() { /*...*/ }
	String(const char *str) { /*...*/ }
	String(const String &rhs) { /*...*/ }
	String(String&& rhs) {
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
	}

	~String() { /*...*/ }

	String &operator=(const String &rhs) { /*...*/ }
	String& operator=(String&& rhs) {
		cout << "String &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this;
	}

	char* GetStrData() const { /*...*/ }
	int GetLen() const { /*...*/ }

private:
	void alloc(int len) { /*...*/ }
	void release() { /*...*/ }

	char* strData;
	int len;
};

String getName() {
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}

int main() {
	String a;
	cout << "===== 1 =====" << endl;
	a = getName();
	cout << "===== 4 =====" << endl;
}