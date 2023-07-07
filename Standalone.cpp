//
// Created by kat on 7/7/23.
//

#include "UI/Callgraph/Callgraph.h"
#include <binaryninjaapi.h>
#include "uitypes.h"


extern "C" {

BN_DECLARE_CORE_ABI_VERSION
BN_DECLARE_UI_ABI_VERSION

BINARYNINJAPLUGIN bool UIPluginInit() {
    CallgraphToolInit();

    return true;
}

}