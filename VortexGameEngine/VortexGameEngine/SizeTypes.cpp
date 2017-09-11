#include "SizeTypes.h"
#include <iostream>

XY::XY()
	: m_X(0.0f), m_Y(0.0f)
{
}

XY::XY(float x, float y)
	: m_X(x), m_Y(y)
{
}

void XY::SetValue(int toSet, float value)
{
	if (toSet = TYPE_X)
	{
		m_X = value;
	} else if (toSet = TYPE_Y)
	{
		m_Y = value;
	}
	else {
		return;
	}
}

void XY::SetValues(float x, float y)
{
	m_X = x;
	m_Y = y;
}

float XY::GetX()
{
	return m_X;
}

float XY::GetY()
{
	return m_Y;
}

XY XY::Copy()
{
	return XY(m_X, m_Y);
}

void XY::PrintX()
{
	std::cout << "X: " << m_X << std::endl;
}

void XY::PrintY()
{
	std::cout << "Y: " << m_Y << std::endl;
}

void XY::Print()
{
	std::cout << "X: " << m_X << ", Y: " << m_Y << std::endl;
}

Dimension::Dimension()
	: m_Width(0), m_Height(0)
{
}

Dimension::Dimension(int width, int height)
	: m_Width(width), m_Height(height)
{
}

void Dimension::SetWidth(int width)
{
	m_Width = width;
}

void Dimension::SetHeight(int height)
{
	m_Height = height;
}

void Dimension::SetValues(int width, int height)
{
	m_Width = width;
	m_Height = height;
}

int Dimension::GetWidth()
{
	return m_Width;
}

int Dimension::GetHeight()
{
	return m_Height;
}

Dimension Dimension::Copy()
{
	return Dimension(m_Width, m_Height);
}

void Dimension::PrintWidth()
{
	std::cout << "Width: " << m_Width << std::endl;
}

void Dimension::PrintHeight()
{
	std::cout << "Height: " << m_Height << std::endl;
}

void Dimension::Print()
{
	std::cout << "Width: " << m_Width << ", Height: " << m_Height << std::endl;
}

void Dimension::PrintRaw()
{
	std::cout << m_Width << ", " << m_Height << std::endl;
}

XY Dimension::ToXY()
{
	
	return XY(m_Width, m_Height);
}
