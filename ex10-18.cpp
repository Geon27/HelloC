#include<iostream>
using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(int, int);

	int GetWidth();
	int GetHeigth();

private:
	int width;
	int heigth;
};

GameWindow::GameWindow() : width(800), heigth(600) { }
GameWindow::GameWindow(int w, int h) : width(w), heigth(h) { }

int GameWindow::GetWidth() { return width; }
int GameWindow::GetHeight() { return height; }

int main() {
	GameWindow mainWindow;
	mainWindow.ResizeWindow(1366, 768);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeigth() << endl;
}