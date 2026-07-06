#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DCC8
// Address: 0x22dcc8 - 0x22dd48
void sub_0022DCC8_0x22dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DCC8_0x22dcc8");
#endif

    switch (ctx->pc) {
        case 0x22dce8u: goto label_22dce8;
        case 0x22dd20u: goto label_22dd20;
        default: break;
    }

    ctx->pc = 0x22dcc8u;

    // 0x22dcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22dccc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22dcd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22dcd4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x22dcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x22dcd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dcdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22dce0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22DCE0u;
    SET_GPR_U32(ctx, 31, 0x22DCE8u);
    ctx->pc = 0x22DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCE0u;
            // 0x22dce4: 0x8e24fa00  lw          $a0, -0x600($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DCE8u; }
        if (ctx->pc != 0x22DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DCE8u; }
        if (ctx->pc != 0x22DCE8u) { return; }
    }
    ctx->pc = 0x22DCE8u;
label_22dce8:
    // 0x22dce8: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x22dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x22dcec: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22DCECu;
    {
        const bool branch_taken_0x22dcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dcec) {
            ctx->pc = 0x22DCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCECu;
            // 0x22dcf0: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DD28u;
            goto label_22dd28;
        }
    }
    ctx->pc = 0x22DCF4u;
    // 0x22dcf4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x22dcf8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22DCF8u;
    {
        const bool branch_taken_0x22dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dcf8) {
            ctx->pc = 0x22DCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCF8u;
            // 0x22dcfc: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DD28u;
            goto label_22dd28;
        }
    }
    ctx->pc = 0x22DD00u;
    // 0x22dd00: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x22dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x22dd04: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x22dd08: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22dd0c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22dd10: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x22dd14: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x22dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x22dd18: 0xc043320  jal         func_10CC80
    ctx->pc = 0x22DD18u;
    SET_GPR_U32(ctx, 31, 0x22DD20u);
    ctx->pc = 0x22DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD18u;
            // 0x22dd1c: 0x84a40044  lh          $a0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD20u; }
        if (ctx->pc != 0x22DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD20u; }
        if (ctx->pc != 0x22DD20u) { return; }
    }
    ctx->pc = 0x22DD20u;
label_22dd20:
    // 0x22dd20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DD20u;
    {
        const bool branch_taken_0x22dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD20u;
            // 0x22dd24: 0x8e24fa00  lw          $a0, -0x600($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd20) {
            ctx->pc = 0x22DD34u;
            goto label_22dd34;
        }
    }
    ctx->pc = 0x22DD28u;
label_22dd28:
    // 0x22dd28: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x22dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x22dd2c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x22dd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x22dd30: 0x8e24fa00  lw          $a0, -0x600($s1)
    ctx->pc = 0x22dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965760)));
label_22dd34:
    // 0x22dd34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dd38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22dd38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dd3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dd40: 0x8043320  j           func_10CC80
    ctx->pc = 0x22DD40u;
    ctx->pc = 0x22DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD40u;
            // 0x22dd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22DD48u;
    ctx->pc = 0x22dd48u;
}
