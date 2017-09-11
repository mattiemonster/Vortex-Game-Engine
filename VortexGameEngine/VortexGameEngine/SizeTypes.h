#ifndef SIZE_TYPES_H_
#define SIZE_TYPES_H_

#define TYPE_X 1
#define TYPE_Y 2

class XY 
{
private:
	float m_X = 0, m_Y = 0;
public:
	XY();
	XY(float x, float y);

	void SetValue(int toSet, float value);
	void SetValues(float x, float y);

	float GetX();
	float GetY();
	XY Copy();

	void PrintX();
	void PrintY();
	void Print();
};

class Dimension 
{
private:
	int m_Width = 0, m_Height = 0;
public:
	Dimension();
	Dimension(int width, int height);

	void SetWidth(int width);
	void SetHeight(int height);
	void SetValues(int width, int height);

	int GetWidth();
	int GetHeight();
	Dimension Copy();

	void PrintWidth();
	void PrintHeight();
	void Print();
	void PrintRaw();

	XY ToXY();
};

#endif