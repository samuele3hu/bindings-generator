#ifndef __SIMPLE_CLASS_H__
#define __SIMPLE_CLASS_H__

#include <string>
#include <stdint.h>

namespace cocos2d {
enum someThingEnumerated {
	kValue1 = 1,
	kValue2,
	kValue3,
	kValue4
};
    
class SimpleFatherClass
{
    
};
    
class SimpleSecondClass
{
};

class SimpleNativeClass:public SimpleFatherClass
{
// protected:
// 	int m_someField;
// 	int m_someOtherField;
// 	char* m_anotherMoreComplexField;

public:
 //    static const uint32_t OBJECT_TYPE = 0x777;
 //    virtual uint32_t getObjectType() {
 //        return SimpleNativeClass::OBJECT_TYPE;
 //    };
	// static SimpleNativeClass* create(int aaa);
    SimpleNativeClass(int aaa = 0, int bbb = 1) { printf("SimpileNativeClass constructor..."); }
	// SimpleNativeClass(int m) : m_someField(m) {};
	// SimpleNativeClass(int m1, int m2) : m_someField(m1), m_someOtherField(m2) {};
	// ~SimpleNativeClass();

	// // these methods are simple, can be defined inline
	// int getSomeField() {
	// 	return m_someField;
	// }
	// int getSomeOtherField() {
	// 	return m_someOtherField;
	// }
	// const char *getAnotherMoreComplexField() {
	// 	return m_anotherMoreComplexField;
	// }
	int setSomeField(int f, int b) {
		// m_someField = f;
        printf("SimpleNativeClass method: setSomeField... %d, %d", f, b);
		return 1;
	}

	unsigned int setUnsignedint(unsigned int value,unsigned int b = 0)
	{
		printf("SimpleNativeClass method: setUnsignedint... %u,%u", value,b);
		return 2;
	}

	unsigned char setUnsignedchar(unsigned char value,unsigned int b = 0)
	{
		printf("SimpleNativeClass method: setUnsignedchar... %u,%u", value,b);
		return 3;
	}

	void setStringForKey(const std::string& strValue)
	{
		printf("SimpleNativeClass method: setStringForKey... %s", strValue.c_str());
		return ;
	}

	std::string fullPathForFilename(const char* filename)
	{
		printf("SimpleNativeClass method: fullPathForFilename... %s", filename);
		return filename;
	}

	SimpleFatherClass *setObject(int index,const SimpleFatherClass* object,const SimpleSecondClass* object1)
	{
		printf("SimpleNativeClass method: setObject... %s", "come in");
		return NULL;
	}

	// void setSomeField() {

	// }
	// void setSomeOtherField(int f) {
	// 	m_someOtherField = f;
	// }
	// void setAnotherMoreComplexField(const char *str);

	// long long thisReturnsALongLong();

	// static void func();
	// static void func(int a);
	// static void func(int a, float b);

	// long long receivesLongLong(long long someId);
	// std::string returnsAString();
	// const char *returnsACString();

	// int doSomeProcessing(std::string arg1, std::string arg2);
};

} // namespace cocos2d {

namespace SomeNamespace {
class AnotherClass {
protected:
	int justOneField;

public:
    static const uint32_t OBJECT_TYPE = 0x778;
    virtual uint32_t getObjectType() {
        return AnotherClass::OBJECT_TYPE;
    };
	int aPublicField;

	AnotherClass();
	~AnotherClass();

	// also simple methods, can be defined inline
	int getJustOneField() {
		return justOneField;
	}
	// wrong setter - won't work (needs ONLY one parameter in order to work)
	void setJustOneField() {
		justOneField = 999;
	}

	void doSomethingSimple();
};
};

#endif
