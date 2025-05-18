#include "keyfinder_c_api.h"

KeyFinder::KeyFinder *KeyFinder_KeyFinder_new() {
    return new KeyFinder::KeyFinder();
}
void KeyFinder_KeyFinder_delete(KeyFinder::KeyFinder *p) { delete p; }
