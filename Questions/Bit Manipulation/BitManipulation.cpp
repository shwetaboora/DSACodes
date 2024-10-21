#include <iostream>
using namespace std;
// (1<<n) = 2^n

// we have a no and a position we have to get the bit of that position of the no
// so we left shift 1 as position is given and do and/& with that no and return if its 0 0 otherwise 1
int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

// we have a no and a position we have to set the bit at that position of the no
// so we left shift 1 as position is given and do or/| with that no
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

// we have a no and a position we have to clear the bit at that position of the no
// so we make mask of flipped left shift 1 as position is given and do and/& with that no nd mask
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

// we have a no and a position we have to update the bit at that position of the no
// so we first clear bit and then set bit
int updateBit(int n, int pos, int value)
{
    // clearing bit
    int mask = ~(1 << pos);
    n = n & mask;

    // setting bit
    return (n | (value << pos));
}

int main()
{
    // get bit
    cout << "get bit " << getBit(5, 2) << endl;
    // set bit
    cout << "set bit " << setBit(5, 1) << endl;
    // clear bit
    cout << "clear bit " << clearBit(5, 2) << endl;
    // update bit
    cout << "update bit " << updateBit(5, 1, 1) << endl;

    return 0;
}
