//=============================================================================
//	FILE:					main.cpp
//	SYSTEM:
//	DESCRIPTION:
//-----------------------------------------------------------------------------
//  COPYRIGHT:		(C)Copyright 2022 Adrian Purser. All Rights Reserved.
//	LICENCE:			MIT
//	MAINTAINER:		AJP - Adrian Purser <ade&arcadestuff.com>
//	CREATED:			14-JUN-2022 Adrian Purser <ade&arcadestuff.com>
//=============================================================================

#include <random>
#include <cmath>
#include <array>
#include "engine/engine.h"
#include "game_config.h"

static jammagame::assets::TileSet	sg_builtin_font;

int	
jammagame_initialise()
{
	sg_builtin_font	= jg::assets::assets(jammagame::assets::SLOT_BUILT_IN).get_tileset(0);


	return 0;
}

void
jammagame_shutdown()
{
}

void
jammagame_update()
{
}

void
jammagame_draw(jammagame::gfx::Surface & surface)
{
	surface.set_colour(jammagame::gfx::colour::DARK_GREY);
	surface.clear();

	surface.set_colour(jammagame::gfx::colour::WHITE);
	surface.text(sg_builtin_font,"Hello Jamma",{64,100});

	for(int i=0;i<32;++i)
	{
		surface.set_colour(jammagame::input::is_pressed(i) ? jammagame::gfx::colour::RED : jammagame::gfx::colour::BLACK);
		surface.solid_circle( {32+(i*5),32}, 2 );
	}

}


