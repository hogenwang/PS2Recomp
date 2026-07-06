#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7960
// Address: 0x1f7960 - 0x1f79f8
void sub_001F7960_0x1f7960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7960_0x1f7960");
#endif

    switch (ctx->pc) {
        case 0x1f7988u: goto label_1f7988;
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79bcu: goto label_1f79bc;
        case 0x1f79d0u: goto label_1f79d0;
        default: break;
    }

    ctx->pc = 0x1f7960u;

    // 0x1f7960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f796c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f796cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f7974: 0x8e020a20  lw          $v0, 0xA20($s0)
    ctx->pc = 0x1f7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x1f7978: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7978u;
    {
        const bool branch_taken_0x1f7978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7978) {
            ctx->pc = 0x1F797Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7978u;
            // 0x1f797c: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79A8u;
            goto label_1f79a8;
        }
    }
    ctx->pc = 0x1F7980u;
    // 0x1f7980: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1F7980u;
    SET_GPR_U32(ctx, 31, 0x1F7988u);
    ctx->pc = 0x1F7984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7980u;
            // 0x1f7984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (runtime->hasFunction(0x1EADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1EADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7988u; }
        if (ctx->pc != 0x1F7988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EADE0_0x1eade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7988u; }
        if (ctx->pc != 0x1F7988u) { return; }
    }
    ctx->pc = 0x1F7988u;
label_1f7988:
    // 0x1f7988: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7988u;
    {
        const bool branch_taken_0x1f7988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7988) {
            ctx->pc = 0x1F798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7988u;
            // 0x1f798c: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79A8u;
            goto label_1f79a8;
        }
    }
    ctx->pc = 0x1F7990u;
    // 0x1f7990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7994: 0xc07ab70  jal         func_1EADC0
    ctx->pc = 0x1F7994u;
    SET_GPR_U32(ctx, 31, 0x1F799Cu);
    ctx->pc = 0x1F7998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7994u;
            // 0x1f7998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EADC0u;
    if (runtime->hasFunction(0x1EADC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F799Cu; }
        if (ctx->pc != 0x1F799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EADC0_0x1eadc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F799Cu; }
        if (ctx->pc != 0x1F799Cu) { return; }
    }
    ctx->pc = 0x1F799Cu;
label_1f799c:
    // 0x1f799c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F799Cu;
    {
        const bool branch_taken_0x1f799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f799c) {
            ctx->pc = 0x1F79A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F799Cu;
            // 0x1f79a0: 0xae000a20  sw          $zero, 0xA20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F79A4u;
label_1f79a4:
    // 0x1f79a4: 0x8e060a24  lw          $a2, 0xA24($s0)
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
label_1f79a8:
    // 0x1f79a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f79ac: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F79ACu;
    {
        const bool branch_taken_0x1f79ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F79B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79ACu;
            // 0x1f79b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79ac) {
            ctx->pc = 0x1F79E4u;
            goto label_1f79e4;
        }
    }
    ctx->pc = 0x1F79B4u;
    // 0x1f79b4: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1F79B4u;
    SET_GPR_U32(ctx, 31, 0x1F79BCu);
    ctx->pc = 0x1F79B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79B4u;
            // 0x1f79b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (runtime->hasFunction(0x1EADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1EADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79BCu; }
        if (ctx->pc != 0x1F79BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EADE0_0x1eade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79BCu; }
        if (ctx->pc != 0x1F79BCu) { return; }
    }
    ctx->pc = 0x1F79BCu;
label_1f79bc:
    // 0x1f79bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F79BCu;
    {
        const bool branch_taken_0x1f79bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f79bc) {
            ctx->pc = 0x1F79C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79BCu;
            // 0x1f79c0: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79E0u;
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F79C4u;
    // 0x1f79c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f79c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79c8: 0xc07ab70  jal         func_1EADC0
    ctx->pc = 0x1F79C8u;
    SET_GPR_U32(ctx, 31, 0x1F79D0u);
    ctx->pc = 0x1F79CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79C8u;
            // 0x1f79cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EADC0u;
    if (runtime->hasFunction(0x1EADC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79D0u; }
        if (ctx->pc != 0x1F79D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EADC0_0x1eadc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79D0u; }
        if (ctx->pc != 0x1F79D0u) { return; }
    }
    ctx->pc = 0x1F79D0u;
label_1f79d0:
    // 0x1f79d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79D0u;
    {
        const bool branch_taken_0x1f79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f79d0) {
            ctx->pc = 0x1F79D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79D0u;
            // 0x1f79d4: 0x8e060a24  lw          $a2, 0xA24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79E0u;
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F79D8u;
    // 0x1f79d8: 0xae000a24  sw          $zero, 0xA24($s0)
    ctx->pc = 0x1f79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2596), GPR_U32(ctx, 0));
    // 0x1f79dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f79dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f79e0:
    // 0x1f79e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f79e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f79e4:
    // 0x1f79e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f79e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f79e8: 0x8c850a20  lw          $a1, 0xA20($a0)
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x1f79ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f79ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f79f0: 0x807e884  j           func_1FA210
    ctx->pc = 0x1F79F0u;
    ctx->pc = 0x1F79F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79F0u;
            // 0x1f79f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA210u;
    {
        auto targetFn = runtime->lookupFunction(0x1FA210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F79F8u;
    ctx->pc = 0x1f79f8u;
}
