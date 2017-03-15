#ifndef STRING_H
#define STRING_H

#include <godot/godot_string.h>

namespace godot {

class String
{
	godot_string _godot_string;
public:
	String();

	String(const char *contents);

	String(const wchar_t *contents);

	String(const wchar_t c);

	String(const String& other);

	~String();


	String substr(int p_from,int p_chars) const;


	wchar_t &operator [](const int idx);

	wchar_t operator [](const int idx) const;

	int length() const;

	bool operator ==(const String &s);

	bool operator !=(const String &s);

	String operator +(const String &s);

	void operator +=(const String &s);

	void operator +=(const wchar_t c);

	bool operator <(const String &s);

	bool operator <=(const String &s);

	bool operator >(const String &s);

	bool operator >=(const String &s);

	const wchar_t *c_string() const;

};

String operator +(const char *a, const String& b);


}



#endif // STRING_H
