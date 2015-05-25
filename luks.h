/*
	luksipc - Tool to convert block devices to LUKS in-place.
	Copyright (C) 2011-2015 Johannes Bauer

	This file is part of luksipc.

	luksipc is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; this program is ONLY licensed under
	version 3 of the License, later versions are explicitly excluded.

	luksipc is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with luksipc; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

	Johannes Bauer <JohannesBauer@gmx.de>
*/

#ifndef __LUKS_H__
#define __LUKS_H__

#include <stdbool.h>

/*************** AUTO GENERATED SECTION FOLLOWS ***************/
bool isLuks(const char *aBlockDevice);
bool isLuksMapperAvailable(const char *aMapperName);
bool luksFormat(const char *aBlkDevice, const char *aKeyFile, const char *aOptionalParams);
bool luksOpen(const char *aBlkDevice, const char *aKeyFile, const char *aHandle);
bool luksClose(const char *aMapperHandle);
bool dmCreateAlias(const char *aSrcDevice, const char *aMapperHandle);
char *dmCreateDynamicAlias(const char *aSrcDevice, const char *aAliasPrefix);
bool dmRemoveAlias(const char *aMapperHandle);
/***************  AUTO GENERATED SECTION ENDS   ***************/

#endif
