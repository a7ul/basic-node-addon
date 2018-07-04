#include "test.h"

std::string test::hello()
{
    return "Hello World123";
}

Napi::String test::HelloWrapped(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::String returnValue = Napi::String::New(env, test::hello());

    return returnValue;
}

Napi::Object test::Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(
        "hello", Napi::Function::New(env, test::HelloWrapped)
    );

    return exports;
}