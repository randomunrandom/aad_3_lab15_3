/*
 * created by Danil Kireev, PFUR NFI-201, 8.11.18, 09:00
 */

#include "stack.h"

/*
 *  №3
 *
 */



int main() {
    stack s(4);
    s.push(13);
    s.push(20);
    s.push(-1);
    s.print();
    cout << "min: " << s.min() << endl;

    int t = s.pop();
    cout << "poped: " << t << endl;
    s.print();

    cout << "min: " << s.min() << endl;
    return 0;
}