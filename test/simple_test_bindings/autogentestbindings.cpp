#include "autogentestbindings.hpp"
#include "simple_class.h"
#include "tolua_fix.h"



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
static int lua_autogentestbindings_SimpleNativeClass_fullPathForFilename(lua_State* tolua_S)
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
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_fullPathForFilename'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 1) {
		const char* arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isstring(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (const char*)tolua_tostring(tolua_S,2,0);
		std::string ret = cobj->fullPathForFilename(arg0);
		tolua_pushcppstring(tolua_S,(const char*)ret);
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_fullPathForFilename'.",&tolua_err);
	return 0;
#endif
}
static int lua_autogentestbindings_SimpleNativeClass_setObject(lua_State* tolua_S)
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
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_setObject'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 3) {
		int arg0;
		cocos2d::SimpleFatherClass* arg1;
		cocos2d::SimpleSecondClass* arg2;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (int)tolua_tonumber(tolua_S,2,0);
		if (!tolua_isusertype(tolua_S,3,"cocos2d::SimpleFatherClass*",0,&tolua_err)) goto tolua_lerror;
		arg1 = (cocos2d::SimpleFatherClass*)tolua_tousertype(tolua_S,3,0);;
		if (!tolua_isusertype(tolua_S,4,"cocos2d::SimpleSecondClass*",0,&tolua_err)) goto tolua_lerror;
		arg2 = (cocos2d::SimpleSecondClass*)tolua_tousertype(tolua_S,4,0);;
		cocos2d::SimpleFatherClass* ret = cobj->setObject(arg0, arg1, arg2);
		tolua_pushusertype(tolua_S,ret,"cocos2d::SimpleFatherClass*");
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_setObject'.",&tolua_err);
	return 0;
#endif
}
static int lua_autogentestbindings_SimpleNativeClass_setUnsignedint(lua_State* tolua_S)
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
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_setUnsignedint'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 1) {
		unsigned int arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (unsigned int)tolua_tonumber(tolua_S,2,0);
		unsigned int ret = cobj->setUnsignedint(arg0);
		tolua_pushnumber(tolua_S,(lua_Number)ret);
		return 1;
	}
	if (argc == 2) {
		unsigned int arg0;
		unsigned int arg1;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (unsigned int)tolua_tonumber(tolua_S,2,0);
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,3,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg1 = (unsigned int)tolua_tonumber(tolua_S,3,0);
		unsigned int ret = cobj->setUnsignedint(arg0, arg1);
		tolua_pushnumber(tolua_S,(lua_Number)ret);
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_setUnsignedint'.",&tolua_err);
	return 0;
#endif
}
static int lua_autogentestbindings_SimpleNativeClass_setUnsignedchar(lua_State* tolua_S)
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
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_setUnsignedchar'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 1) {
		uint16_t arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (unsigned char)tolua_tonumber(tolua_S,2,0);
		unsigned char ret = cobj->setUnsignedchar(arg0);
		tolua_pushnumber(tolua_S,(lua_Number)ret);
		return 1;
	}
	if (argc == 2) {
		uint16_t arg0;
		unsigned int arg1;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (unsigned char)tolua_tonumber(tolua_S,2,0);
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,3,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg1 = (unsigned int)tolua_tonumber(tolua_S,3,0);
		unsigned char ret = cobj->setUnsignedchar(arg0, arg1);
		tolua_pushnumber(tolua_S,(lua_Number)ret);
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_setUnsignedchar'.",&tolua_err);
	return 0;
#endif
}
static int lua_autogentestbindings_SimpleNativeClass_setStringForKey(lua_State* tolua_S)
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
		tolua_error(tolua_S,"invalid 'cobj' in function 'lua_autogentestbindings_SimpleNativeClass_setStringForKey'", NULL);
		return 0;
	}
#endif
	argc = lua_gettop(tolua_S)-1;
	if (argc == 1) {
		std::string arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_iscppstring(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = tolua_tocppstring(tolua_S,2,0);
		cobj->setStringForKey(arg0);
		return 1;
	}
#if COCOS2D_DEBUG >= 1
	tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'lua_autogentestbindings_SimpleNativeClass_setStringForKey'.",&tolua_err);
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
		cobj = new cocos2d::SimpleNativeClass();
	    tolua_pushusertype(tolua_S,(void*)cobj,"SimpleNativeClass");
		return 1;
	}
	if (argc == 1) {
		int arg0;
		#if COCOS2D_DEBUG >= 1
		if (!tolua_isnumber(tolua_S,2,0,&tolua_err)) goto tolua_lerror;
		#endif
		arg0 = (int)tolua_tonumber(tolua_S,2,0);
		cobj = new cocos2d::SimpleNativeClass(arg0);
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
		cobj = new cocos2d::SimpleNativeClass(arg0, arg1);
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
	tolua_cclass(tolua_S,"SimpleNativeClass","SimpleNativeClass","SimpleFatherClass",NULL);

	tolua_beginmodule(tolua_S,"SimpleNativeClass");
		tolua_function(tolua_S,"setSomeField",lua_autogentestbindings_SimpleNativeClass_setSomeField);
		tolua_function(tolua_S,"fullPathForFilename",lua_autogentestbindings_SimpleNativeClass_fullPathForFilename);
		tolua_function(tolua_S,"setObject",lua_autogentestbindings_SimpleNativeClass_setObject);
		tolua_function(tolua_S,"setUnsignedint",lua_autogentestbindings_SimpleNativeClass_setUnsignedint);
		tolua_function(tolua_S,"setUnsignedchar",lua_autogentestbindings_SimpleNativeClass_setUnsignedchar);
		tolua_function(tolua_S,"setStringForKey",lua_autogentestbindings_SimpleNativeClass_setStringForKey);
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

