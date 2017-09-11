#ifndef VERSION_H_
#define VERSION_H_

class Version 
{
private:
	int m_Major;
	int m_Minor;
	int m_Patch;
public:
	Version();
	Version(int major, int minor, int patch);

	void PrintMajor();
	void PrintMinor();
	void PrintPatch();

	void SetMajor(int major);
	void SetMinor(int minor);
	void SetPatch(int patch);

	int GetMajor();
	int GetMinor();
	int GetPatch();

	void PrintVersion();
	void PrintVersionRaw();

	Version Copy();
};

#endif