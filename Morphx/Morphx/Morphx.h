#pragma once

#include "resource.h"
#include <lua/lua.hpp>


class LuaMorphx
{
public:

	// Constructor
	LuaMorphx();

	// Destructor
	~LuaMorphx();

	// Interface
	bool tick();

private:
	// LUA VM
	lua_State* m_ptrLuaState = nullptr;
	bool m_luaOk = false;
};