#include <lua.h>
#include <lauxlib.h>

// C function that adds two integers
static int add(lua_State *L) {
    // Get the arguments from the Lua stack
    int arg1 = luaL_checkinteger(L, 1);
    int arg2 = luaL_checkinteger(L, 2);

    // Perform the addition
    int result = arg1 + arg2;

    // Push the result onto the Lua stack
    lua_pushinteger(L, result);

    // Indicate the number of return values
    return 1;
}

// Lua module initialization function
int luaopen_add(lua_State *L) {
    luaL_Reg mylib[] = {
        {"add", add},
        {NULL, NULL}
    };
    luaL_newlib(L, mylib);
    return 1;
}
