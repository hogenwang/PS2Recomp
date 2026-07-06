#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CD30
// Address: 0x21cd30 - 0x21cd78
void sub_0021CD30_0x21cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD30_0x21cd30");
#endif

    switch (ctx->pc) {
        case 0x21cd4cu: goto label_21cd4c;
        case 0x21cd5cu: goto label_21cd5c;
        default: break;
    }

    ctx->pc = 0x21cd30u;

    // 0x21cd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cd44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CD44u;
    SET_GPR_U32(ctx, 31, 0x21CD4Cu);
    ctx->pc = 0x21CD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD44u;
            // 0x21cd48: 0x248417c0  addiu       $a0, $a0, 0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD4Cu; }
        if (ctx->pc != 0x21CD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD4Cu; }
        if (ctx->pc != 0x21CD4Cu) { return; }
    }
    ctx->pc = 0x21CD4Cu;
label_21cd4c:
    // 0x21cd4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cd50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cd54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CD54u;
    SET_GPR_U32(ctx, 31, 0x21CD5Cu);
    ctx->pc = 0x21CD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD54u;
            // 0x21cd58: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD5Cu; }
        if (ctx->pc != 0x21CD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD5Cu; }
        if (ctx->pc != 0x21CD5Cu) { return; }
    }
    ctx->pc = 0x21CD5Cu;
label_21cd5c:
    // 0x21cd5c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21cd60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cd64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cd68: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21cd6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd70: 0x8043e52  j           func_10F948
    ctx->pc = 0x21CD70u;
    ctx->pc = 0x21CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD70u;
            // 0x21cd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21CD78u;
    ctx->pc = 0x21cd78u;
}
