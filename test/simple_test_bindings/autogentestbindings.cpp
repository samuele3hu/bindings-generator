#include "autogentestbindings.hpp"
#include "simple_class.h"



//JSClass  *jsb_SimpleNativeClass_class;
//JSObject *jsb_SimpleNativeClass_prototype;

static int lua_autogentestbindings_SimpleNativeClass_setSomeField(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::SimpleNativeClass* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S,1,"SimpleNativeClass",0,&tolua_err)) goto tolua_lerror;
#endif
	cobj = (cocos2d::SimpleNativeClass*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
	if (!cobj) {
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_setSomeField'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 2) {
		int arg0;
		int arg1;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (int)tolua_tonumber(tolua_S,2,0);
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,3,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg1 = (int)tolua_tonumber(tolua_S,3,0);
		int ret = cobj->setSomeField(arg0, arg1);
		tolua_pushnumber(tolua_S,(lua_Number)ret);
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_setSomeField'.",&tolua_err);
	return 0;
#endif
}
static int lua_autogentestbindings_SimpleNativeClass_constructor(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::SimpleNativeClass* cobj = nullptr;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 0) {
		cocos2d::SimpleNativeClass* cobj = new cocos2d::SimpleNativeClass();
	    tolua_pushusertype(tolua_S,(void*)cobj,"SimpleNativeClass");
		return 1;
	}
	if (argc == 1) {
		int arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (int)tolua_tonumber(tolua_S,2,0);
		cocos2d::SimpleNativeClass* cobj = new cocos2d::SimpleNativeClass(arg0);
	    tolua_pushusertype(tolua_S,(void*)cobj,"SimpleNativeClass");
		return 1;
	}
	if (argc == 2) {
		int arg0;
		int arg1;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (int)tolua_tonumber(tolua_S,2,0);
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,3,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg1 = (int)tolua_tonumber(tolua_S,3,0);
		cocos2d::SimpleNativeClass* cobj = new cocos2d::SimpleNativeClass(arg0, arg1);
	    tolua_pushusertype(tolua_S,(void*)cobj,"SimpleNativeClass");
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_constructor'.",&tolua_err);
	return 0;
#endif
}

static int lua_autogentestbindings_SimpleNativeClass_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SimpleNativeClass)");
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleNativeClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::SimpleNativeClass* self = (cocos2d::SimpleNativeClass*)  tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  delete self;
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
	return 0;
}

int lua_register_autogentestbindings_SimpleNativeClass(lua_State* tolua_S)
{
	tolua_usertype(tolua_S,"SimpleNativeClass");
	tolua_cclass(tolua_S,"SimpleNativeClass","SimpleNativeClass","",NULL);

	tolua_beginmodule(tolua_S,"SimpleNativeClass");
		tolua_function(tolua_S,"setSomeField",lua_autogentestbindings_SimpleNativeClass_setSomeField);
		tolua_function(tolua_S,"new",lua_autogentestbindings_SimpleNativeClass_constructor);
	tolua_endmodule(tolua_S);
	return 1;
}

TOLUA_API int register_all_autogentestbindings(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_autogentestbindings_SimpleNativeClass(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

