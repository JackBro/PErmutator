#pragma once
#include "PEFunctions.h"
#include "Graph.h"
#include "distorm.h"
#include <vector>

#ifdef _WIN32
	#pragma comment(lib, "Lib\\distorm.lib")
#endif

#define MAX_INSTRUCTIONS (100)

class Permutator
{
public:
	Permutator(std::fstream& hInputFile);
	~Permutator();

	void CreateGraph();

private:
	std::fstream* hInputFile;
	PIMAGE_DOS_HEADER pDosHeader;
	PIMAGE_NT_HEADERS pNtHeader;
	DWORD dwFstSctHdrOffset;
	Graph graph;
		

	void InitPermutator();
};

