#include "keyfinder.h"

extern "C" {

// opaque handle so Rust never sees the C++ class
typedef void* KFHandle;

KFHandle KeyFinder_KeyFinder_new() {
    return new KeyFinder::KeyFinder();
}

void KeyFinder_KeyFinder_delete(KFHandle h) {
    delete static_cast<KeyFinder::KeyFinder*>(h);
}

// …add whatever other helpers your bindings expect…
}
