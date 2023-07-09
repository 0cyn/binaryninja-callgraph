// -===-=
// Bootstrap for callgraph when installed as a standalone plugin
// -===-=

#ifndef UI_BUILD
#warning "This plugin is exclusively for UI builds and will not provide any code when built for headless configurations"
#warning "You should build with -DUI_BUILD!"
#endif

#include <binaryninjaapi.h>
#ifdef UI_BUILD
#include "Callgraph.h"
#include "uitypes.h"
#endif


extern "C" {

BN_DECLARE_CORE_ABI_VERSION
#ifdef UI_BUILD
BN_DECLARE_UI_ABI_VERSION
#endif

#ifdef UI_BUILD
BINARYNINJAPLUGIN bool UIPluginInit() {
    CallgraphToolInit();

    return true;
}
#endif

}