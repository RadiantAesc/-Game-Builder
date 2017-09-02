#pragma once

#include "Mouse.h"
#include "Graphics.h"

class Module
{
public:
	Module( int type,int x,int y );

	void Update( Mouse& ms );
	void Draw( Graphics& gfx ) const;

	void StartDrag( Mouse& ms );
	void StopDrag();
private:
	int x;
	int y;
	const int xOrig;
	const int yOrig;
	int width = 130;
	int height = 50;
	int type;
	int offsetX = 0;
	int offsetY = 0;
	bool isDragging;
private:
	/*****************************\
	Types and what they are:
		1 = Set variable.

	\******************************/
};