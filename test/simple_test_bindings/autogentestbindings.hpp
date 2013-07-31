#ifndef __autogentestbindings_h__
#define __autogentestbindings_h__

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

int register_all_autogentestbindings(lua_State* tolua_S);
// int lua_register_autogentestbindings_SimpleNativeClass(lua_State* tolua_S);
// int register_all_autogentestbindings(lua_State* tolua_S);
// int lua_autogentestbindings_SimpleNativeClass_setSomeField(lua_State* tolua_S);
// int lua_autogentestbindings_SimpleNativeClass_SimpleNativeClass(lua_State* tolua_S);

#endif // __autogentestbindings_h__
