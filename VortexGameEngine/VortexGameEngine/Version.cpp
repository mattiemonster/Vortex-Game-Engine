#include "Version.h"
#include <iostream>

Version::Version()
	: m_Major(1), m_Minor(0), m_Patch(0)
{
}

Version::Version(int major, int minor, int patch)
	: m_Major(major), m_Minor(minor), m_Patch(patch)
{
}

void Version::PrintMajor()
{
	std::cout << "Version Major: " << m_Major << std::endl;
}

void Version::PrintMinor()
{
	std::cout << "Version Minor: " << m_Minor << std::endl;
}

void Version::PrintPatch()
{
	std::cout << "Version Patch: " << m_Patch << std::endl;
}

void Version::SetMajor(int major)
{
	m_Major = major;
}

void Version::SetMinor(int minor)
{
	m_Minor = minor;
}

void Version::SetPatch(int patch)
{
	m_Patch = patch;
}

int Version::GetMajor()
{
	return m_Major;
}

int Version::GetMinor()
{
	return m_Minor;
}

int Version::GetPatch()
{
	return m_Patch;
}

void Version::PrintVersion()
{
	std::cout << "Version: " << m_Major << "." << m_Minor << "." << m_Patch << std::endl;
}

void Version::PrintVersionRaw()
{
	std::cout << m_Major << "." << m_Minor << "." << m_Patch;
}

Version Version::Copy()
{
	return Version(m_Major, m_Minor, m_Patch);
}
