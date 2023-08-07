#ifndef SQUARE_H
#define SQUARE_H

class Square {
public:
	Square();
	~Square();

	void SetUp(Square *up);
	void SetDown(Square *down);
	void SetRight(Square *right);
	void SetLeft(Square *left);

	Square GetUp();
	Square GetDown();
	Square GetRight();
	Square GetLeft();

private:
	Square *up;
	Square *down;
	Square *left;
	Square *right;
};

#endif // SQUARE_H