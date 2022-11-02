//=============================================================================
//	FILE:					metadata.cpp
//	SYSTEM:				
//	DESCRIPTION:
//-----------------------------------------------------------------------------
//  COPYRIGHT:		(C)Copyright 2022 Adrian Purser. All Rights Reserved.
//	LICENCE:			MIT
//	MAINTAINER:		AJP - Adrian Purser <ade&arcadestuff.com>
//	CREATED:			19-JUN-2022 Adrian Purser <ade&arcadestuff.com>
//=============================================================================
#include <cstdint>
#include "engine/engine.h"


static const jammagame::MetaData sg_metadata =
{
	"BoilerPlate",
	"Blank Project",
	{ "boilerplate", nullptr },
	1,0,
	JG_API_MAJOR, 
	JG_API_MINOR
};

const jammagame::MetaData * 	
jammagame_get_metadata()
{
	return &sg_metadata;
}

