#include <memory>
#include <string>

#include <fbjni/fbjni.h>
#include <jsi/jsi.h>

#include "NativeProxy.h"

void NativeProxy::registerNatives()
{
    registerHybrid({
                           makeNativeMethod("initHybrid", NativeProxy::initHybrid),
                           makeNativeMethod("installJSIBindings", NativeProxy::installJSIBindings),
                           makeNativeMethod("isAnyHandlerWaitingForEvent", NativeProxy::isAnyHandlerWaitingForEvent)
                   });
}
