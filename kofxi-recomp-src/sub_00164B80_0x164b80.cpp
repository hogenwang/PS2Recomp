#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164B80
// Address: 0x164b80 - 0x164b90
void sub_00164B80_0x164b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164B80_0x164b80");
#endif

    ctx->pc = 0x164b80u;

    // 0x164b80: 0x8055728  j           func_155CA0
    ctx->pc = 0x164B80u;
    ctx->pc = 0x155CA0u;
    sub_00155CA0_0x155ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x164B88u;
    // 0x164b88: 0x0  nop
    ctx->pc = 0x164b88u;
    // NOP
    // 0x164b8c: 0x0  nop
    ctx->pc = 0x164b8cu;
    // NOP
    if (ctx->pc == 0x164b8cu) { ctx->pc = 0x164b90u; }
}
