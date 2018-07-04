/* cppsrc/main.cpp */
#include <napi.h>
#include "./cppsrc/test.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return test::Init(env, exports);
}

NODE_API_MODULE(testaddon, InitAll)