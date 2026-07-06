#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213198
// Address: 0x213198 - 0x213228
void sub_00213198_0x213198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213198_0x213198");
#endif

    switch (ctx->pc) {
        case 0x2131b4u: goto label_2131b4;
        case 0x2131c4u: goto label_2131c4;
        case 0x2131d4u: goto label_2131d4;
        case 0x2131e4u: goto label_2131e4;
        case 0x2131f4u: goto label_2131f4;
        case 0x213208u: goto label_213208;
        default: break;
    }

    ctx->pc = 0x213198u;

    // 0x213198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21319c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2131a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2131a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2131a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2131a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2131a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131ac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2131ACu;
    SET_GPR_U32(ctx, 31, 0x2131B4u);
    ctx->pc = 0x2131B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131ACu;
            // 0x2131b0: 0x24840638  addiu       $a0, $a0, 0x638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131B4u; }
        if (ctx->pc != 0x2131B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131B4u; }
        if (ctx->pc != 0x2131B4u) { return; }
    }
    ctx->pc = 0x2131B4u;
label_2131b4:
    // 0x2131b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2131b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2131BCu;
    SET_GPR_U32(ctx, 31, 0x2131C4u);
    ctx->pc = 0x2131C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131BCu;
            // 0x2131c0: 0x24840658  addiu       $a0, $a0, 0x658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131C4u; }
        if (ctx->pc != 0x2131C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131C4u; }
        if (ctx->pc != 0x2131C4u) { return; }
    }
    ctx->pc = 0x2131C4u;
label_2131c4:
    // 0x2131c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2131c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2131c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131cc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2131CCu;
    SET_GPR_U32(ctx, 31, 0x2131D4u);
    ctx->pc = 0x2131D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131CCu;
            // 0x2131d0: 0x24840668  addiu       $a0, $a0, 0x668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131D4u; }
        if (ctx->pc != 0x2131D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131D4u; }
        if (ctx->pc != 0x2131D4u) { return; }
    }
    ctx->pc = 0x2131D4u;
label_2131d4:
    // 0x2131d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131d8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2131d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2131dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2131DCu;
    SET_GPR_U32(ctx, 31, 0x2131E4u);
    ctx->pc = 0x2131E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131DCu;
            // 0x2131e0: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131E4u; }
        if (ctx->pc != 0x2131E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131E4u; }
        if (ctx->pc != 0x2131E4u) { return; }
    }
    ctx->pc = 0x2131E4u;
label_2131e4:
    // 0x2131e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131e8: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2131ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2131ECu;
    SET_GPR_U32(ctx, 31, 0x2131F4u);
    ctx->pc = 0x2131F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131ECu;
            // 0x2131f0: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131F4u; }
        if (ctx->pc != 0x2131F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131F4u; }
        if (ctx->pc != 0x2131F4u) { return; }
    }
    ctx->pc = 0x2131F4u;
label_2131f4:
    // 0x2131f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2131f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2131f8: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x2131f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2131fc: 0x24840678  addiu       $a0, $a0, 0x678
    ctx->pc = 0x2131fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1656));
    // 0x213200: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213200u;
    SET_GPR_U32(ctx, 31, 0x213208u);
    ctx->pc = 0x213204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213200u;
            // 0x213204: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213208u; }
        if (ctx->pc != 0x213208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213208u; }
        if (ctx->pc != 0x213208u) { return; }
    }
    ctx->pc = 0x213208u;
label_213208:
    // 0x213208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21320c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21320cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213210: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213218: 0x24840688  addiu       $a0, $a0, 0x688
    ctx->pc = 0x213218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1672));
    // 0x21321c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21321Cu;
    ctx->pc = 0x213220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21321Cu;
            // 0x213220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x213224u;
    // 0x213224: 0x0  nop
    ctx->pc = 0x213224u;
    // NOP
    ctx->pc = 0x213228u;
}
