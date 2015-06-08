do {
    // Lambda binding for lua is not supported.
    // assert(false);
\#if COCOS2D_DEBUG >= 1
    if (!toluafix_isfunction(tolua_S, ${arg_idx},"LUA_FUNCTION",0,&tolua_err))
    {
        goto tolua_lerror;
    }
\#endif

    LUA_FUNCTION handler = toluafix_ref_function(tolua_S, ${arg_idx}, 0);
    ${out_value}= [=](${lambda_parameters}) -> ${ret_type.name}{
        #set $arg_count = len($param_types)
        #if $arg_count > 0
            #set arg_list = ""
        #end if
        #set $count = 0
        #while $count < $arg_count
            #set $arg = $param_types[$count]
    	${arg.from_native({"generator": $generator,
                           "in_value": "larg" + str(count),
                           "class_name": $class_name,
                           "level": 2,
                           "ntype": $arg.get_whole_name($generator),
                           "scriptname": $generator.scriptname_from_native($arg.namespaced_name, $arg.namespace_name)}
                               )};
            #set $count = $count + 1
        #end while
        #if $ret_type.name != "void"
        int rval = LuaEngine::getInstance()->getLuaStack()->executeFunctionByHandler(handler, $arg_count);
        ${ret_type.get_whole_name($generator)} ret;
        ${ret_type.to_native({"generator": $generator,
                              "in_value": "rval",
                              "out_value": "ret",
                              "ntype": str($ret_type),
                              "level": 2})};
            return ret;
        #else
        LuaEngine::getInstance()->getLuaStack()->executeFunctionByHandler(handler, $arg_count);
        #end if
    };

    #if not $static
    ScriptHandlerMgr::getInstance()->addCustomHandler((void*)cobj, handler);
    #end if
} while(0)
