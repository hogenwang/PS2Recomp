#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CCD0
// Address: 0x25ccd0 - 0x25cd40
void sub_0025CCD0_0x25ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CCD0_0x25ccd0");
#endif

    switch (ctx->pc) {
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd24u: goto label_25cd24;
        default: break;
    }

    ctx->pc = 0x25ccd0u;

    // 0x25ccd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ccd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ccd8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x25ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x25ccdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cce0: 0x8e241750  lw          $a0, 0x1750($s1)
    ctx->pc = 0x25cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5968)));
    // 0x25cce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25cce8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CCE8u;
    SET_GPR_U32(ctx, 31, 0x25CCF0u);
    ctx->pc = 0x25CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CCE8u;
            // 0x25ccec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCF0u; }
        if (ctx->pc != 0x25CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CCF0u; }
        if (ctx->pc != 0x25CCF0u) { return; }
    }
    ctx->pc = 0x25CCF0u;
label_25ccf0:
    // 0x25ccf0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25ccf4: 0x8c63ae90  lw          $v1, -0x5170($v1)
    ctx->pc = 0x25ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946448)));
    // 0x25ccf8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CCF8u;
    {
        const bool branch_taken_0x25ccf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ccf8) {
            ctx->pc = 0x25CD1Cu;
            goto label_25cd1c;
        }
    }
    ctx->pc = 0x25CD00u;
label_25cd00:
    // 0x25cd00: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x25cd00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x25cd04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cd08: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x25cd08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cd0c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x25cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25cd10: 0x0  nop
    ctx->pc = 0x25cd10u;
    // NOP
    // 0x25cd14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25CD14u;
    {
        const bool branch_taken_0x25cd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cd14) {
            ctx->pc = 0x25CD00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25cd00;
        }
    }
    ctx->pc = 0x25CD1Cu;
label_25cd1c:
    // 0x25cd1c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CD1Cu;
    SET_GPR_U32(ctx, 31, 0x25CD24u);
    ctx->pc = 0x25CD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD1Cu;
            // 0x25cd20: 0x8e241750  lw          $a0, 0x1750($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD24u; }
        if (ctx->pc != 0x25CD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD24u; }
        if (ctx->pc != 0x25CD24u) { return; }
    }
    ctx->pc = 0x25CD24u;
label_25cd24:
    // 0x25cd24: 0x2402ffe9  addiu       $v0, $zero, -0x17
    ctx->pc = 0x25cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x25cd28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25cd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cd2c: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x25cd2cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25cd30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25cd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CD38u;
            // 0x25cd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CD40u;
    ctx->pc = 0x25cd40u;
}
