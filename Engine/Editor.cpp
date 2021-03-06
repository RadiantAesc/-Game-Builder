#include "Editor.h"

void Editor::UpdateButtons( Mouse& ms )
{
	run.Update( ms );
}

void Editor::Draw( Graphics& gfx ) const
{
	gfx.DrawRectDim( int( sidebar.left ),int( sidebar.top ),int( sidebar.right ),int( sidebar.bot ),Colors::MakeRGB( 200,100,50 ) );
	gfx.DrawRectDim( int( topbar.left ),int( topbar.top ),int( topbar.right ),int( topbar.bot ),Colors::MakeRGB( 80,80,80 ) );
	gfx.DrawRectDim( int( mainArea.left ),int( mainArea.top ),int( mainArea.right ),int( mainArea.bot ),Colors::MakeRGB( 200,200,200 ) );

	// Buttons must be drawn after background windows.

	run.Draw( gfx );
	if( run.IsPressed() )
		int test = 2;
}