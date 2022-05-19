#include<iostream>
using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(const int, const int);

	int GetWidth() const;
	int GetHeight() const;
	void ResizeWindow(const int, const int);

private:
	int width;
	int heigth;
};

GameWindow::GameWindow() : width(800), heigth(600) { }
GameWindow::GameWindow(const int w, const int h) {
	ResizeWindow(w, h);
}

int GameWindow::GetWidth() const { return width; }
int GameWindow::GetHeight() const { return heigth; }
void GameWindow::ResizeWindow(const int w, const int h) {
	if (w == 0 && h == 0) {
		width = 800;
		heigth = 600;
	}
	else {
		if (w < 800) width = 800;
		else           width = w;

		if (h < 600) heigth = 600;
		else           height = h;
	}
}

int main() {
	GameWindow mainWindow;
	mainWindow.ResizeWindow(1366, 768);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
}