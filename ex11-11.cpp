#include<iostream>
using namespace std;

struct Point {
	int x, y;
};

class Polygon {
public:
	Polygon() {
		nPoints = 0;
		points = NULL;
	}
	Polygon(const int nPoints, const Point* points) : nPoints(nPoints) {
		this->points = new Point[nPoints];
		for (int i = 0; i < nPoints; i++)
			this->points[i] = points[i];
	}

	Polygon(const Polygon& rhs) {
		nPoints = rhs.nPoints;
		points = new Point[nPoints];
		for (int i = 0; i < nPoints; i++) {
			points[i] = rhs.points[i];
		}
	}

	Polygon(Polygon&& rhs) {
		nPoints = rhs.nPoints;
		points = rhs.points;
		rhs.points = NULL;
	}

	~Polygon() {
		delete[] points;
	}

	Polygon& operator=(const Polygon& rhs) {
		if (this != &rhs) {
			nPoints = rhs.nPoints;
			delete[] points;
			points = new Point[nPoints];
			for (int i = 0; i < nPoints; i++) {
				points[i] = rhs.points[i];
			}
		}
		return *this;
	}

	Polygon& operator=(Polygon&& rhs) {
		nPoints = rhs.nPoints;
		points = rhs.points;
		rhs.points = NULL;
		return *this;
	}

	int GetNPoints() const {
		return nPoints;
	}

	Point* GetPoints() const {
		if (nPoints == 0) return NULL;
		return points;
	}

private:
	int nPoints;
	Point* points;
};

Polygon getSqare() {
	Point points[4] = { {0 ,0}, {1, 0}, {1, 1}, {0, 1} };
	Polygon p(4, points);
	return p;
}

int main() {
	Polygon a;
	a = getSqare();
	Polygon b = a;
	Polygon c;
	c = a;

	int nPoints = c.GetNPoints();
	Point* points = c.GetPoints();
	for (int i = 0; i < nPoints; i++) {
		cout << "(" << points[i].x << "," << points[i].y << ")" << endl;
	}
}