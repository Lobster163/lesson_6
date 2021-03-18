#pragma once
#include <iostream>
using namespace std;

template <class _Elem, class _Traits>
basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL endll(
    basic_ostream<_Elem, _Traits>& _Ostr){
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.flush();
    return _Ostr;
}