// keyfinder_c_api.h
#pragma once
#include "keyfinder.h"

extern "C" {
    KeyFinder::KeyFinder *KeyFinder_KeyFinder_new();
    void KeyFinder_KeyFinder_delete(KeyFinder::KeyFinder *);
}
