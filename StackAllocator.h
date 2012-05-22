#pragma once
#include <stdlib.h>

class StackAllocator
{
private:
	

public:

	typedef void* Marker;

	void* Top;
	void* Bottom;

	StackAllocator(unsigned int stackSize_bytes)
	{
		Bottom = malloc(stackSize_bytes);
		clear();
	}

	~StackAllocator(void)
	{
		clear(); 
	}

	void* alloc(unsigned int size_bytes)
	{
		Top = (char*)Top + size_bytes;
		return (char*)Top - size_bytes;
	}

	Marker getMarker()
	{
		return Top;
	}

	void freeToMarker(Marker marker)
	{
		Top = marker;
	}

	void clear()
	{
		Top = Bottom;
	}
};

