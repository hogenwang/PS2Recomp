#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD160
// Address: 0x1dd160 - 0x1dd190
void sub_001DD160_0x1dd160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD160_0x1dd160");
#endif

    ctx->pc = 0x1dd160u;

    // 0x1dd160: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1dd160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1dd164: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1dd168: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1dd168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1dd16c: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x1dd16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1dd170: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1dd170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1dd174: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1dd174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1dd178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dd178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd17c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dd180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd184: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD184u;
            // 0x1dd188: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD18Cu;
    // 0x1dd18c: 0x0  nop
    ctx->pc = 0x1dd18cu;
    // NOP
    ctx->pc = 0x1dd190u;
}
