/*
From:ITC
10
Simple type defects
10.8
sign
10.8.2
 subtraction between two signed int
*/
#include <limits.h>
#include <stddef.h>
#include <assert.h>
#include <inttypes.h>
void func_002(signed int si_a, signed int si_b) {
    signed int diff;
    if ((si_b > 0 && si_a < INT_MIN + si_b) ||
        (si_b < 0 && si_a > INT_MAX + si_b)) {
        /* Handle error */
    }
    else {
        diff = si_a - si_b;/*Tool should Not detect this line as error*/ /*ERROR:Simple type error*/
    }

    /* ... */
}
void sign_002() {
    signed int a;
    signed int b;
    ptintf(""�������������"");
    scanf(""%d %d"", &a, &b);
    func_002(a,b);
}
