#include <iostream>
#include <locale>
#include <clocale>
#include <codecvt>
#include"Header1.h"

استعمال;
auto urdu = U"شماریہ داخل کریں";
void urdu_output() {
    wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
    باہر (urdu) << اختتام
}

شماریہ شروع;

شماریہ شروع
{
    شماریہ i;
    شماریہ اختیار = 0;
    urdu_output();
    داخله i;
    باہر"Fibonacci Sequence" << اختتام
    شماریہ j, k,temp;
    j = 0;
    k = 1;
    کیلیے(; اختیار <= i; اختیار++) {
        j += k;
        باہر k<< اختتام
        temp = j;
        j = k;
        k = temp;
    }
}
