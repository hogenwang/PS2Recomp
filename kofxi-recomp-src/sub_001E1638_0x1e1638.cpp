#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1638
// Address: 0x1e1638 - 0x1e16e8
void sub_001E1638_0x1e1638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1638_0x1e1638");
#endif

    switch (ctx->pc) {
        case 0x1e166cu: goto label_1e166c;
        case 0x1e1698u: goto label_1e1698;
        case 0x1e16a0u: goto label_1e16a0;
        case 0x1e16a8u: goto label_1e16a8;
        case 0x1e16c8u: goto label_1e16c8;
        case 0x1e16d0u: goto label_1e16d0;
        default: break;
    }

    ctx->pc = 0x1e1638u;

    // 0x1e1638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e163c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1644: 0x8078594  j           func_1E1650
    ctx->pc = 0x1E1644u;
    ctx->pc = 0x1E1648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1644u;
            // 0x1e1648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1650u;
    goto label_1e1650;
    ctx->pc = 0x1E164Cu;
    // 0x1e164c: 0x0  nop
    ctx->pc = 0x1e164cu;
    // NOP
label_1e1650:
    // 0x1e1650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e165c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1664: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E1664u;
    SET_GPR_U32(ctx, 31, 0x1E166Cu);
    ctx->pc = 0x1E1668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1664u;
            // 0x1e1668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E166Cu; }
        if (ctx->pc != 0x1E166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E166Cu; }
        if (ctx->pc != 0x1E166Cu) { return; }
    }
    ctx->pc = 0x1E166Cu;
label_1e166c:
    // 0x1e166c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1670: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1670u;
    {
        const bool branch_taken_0x1e1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1670u;
            // 0x1e1674: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1670) {
            ctx->pc = 0x1E1698u;
            goto label_1e1698;
        }
    }
    ctx->pc = 0x1E1678u;
    // 0x1e1678: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e167c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e167cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1684: 0x2484d278  addiu       $a0, $a0, -0x2D88
    ctx->pc = 0x1e1684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955640));
    // 0x1e1688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e168c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E168Cu;
    ctx->pc = 0x1E1690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E168Cu;
            // 0x1e1690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E1694u;
    // 0x1e1694: 0x0  nop
    ctx->pc = 0x1e1694u;
    // NOP
label_1e1698:
    // 0x1e1698: 0xc079e92  jal         func_1E7A48
    ctx->pc = 0x1E1698u;
    SET_GPR_U32(ctx, 31, 0x1E16A0u);
    ctx->pc = 0x1E7A48u;
    if (runtime->hasFunction(0x1E7A48u)) {
        auto targetFn = runtime->lookupFunction(0x1E7A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A0u; }
        if (ctx->pc != 0x1E16A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7A48_0x1e7a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A0u; }
        if (ctx->pc != 0x1E16A0u) { return; }
    }
    ctx->pc = 0x1E16A0u;
label_1e16a0:
    // 0x1e16a0: 0xc0785ba  jal         func_1E16E8
    ctx->pc = 0x1E16A0u;
    SET_GPR_U32(ctx, 31, 0x1E16A8u);
    ctx->pc = 0x1E16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16A0u;
            // 0x1e16a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E16E8u;
    if (runtime->hasFunction(0x1E16E8u)) {
        auto targetFn = runtime->lookupFunction(0x1E16E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A8u; }
        if (ctx->pc != 0x1E16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E16E8_0x1e16e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A8u; }
        if (ctx->pc != 0x1E16A8u) { return; }
    }
    ctx->pc = 0x1E16A8u;
label_1e16a8:
    // 0x1e16a8: 0xae1103c0  sw          $s1, 0x3C0($s0)
    ctx->pc = 0x1e16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 17));
    // 0x1e16ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e16b0: 0xae0003d8  sw          $zero, 0x3D8($s0)
    ctx->pc = 0x1e16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 0));
    // 0x1e16b4: 0xae0203d4  sw          $v0, 0x3D4($s0)
    ctx->pc = 0x1e16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 2));
    // 0x1e16b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16bc: 0xae0003dc  sw          $zero, 0x3DC($s0)
    ctx->pc = 0x1e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 988), GPR_U32(ctx, 0));
    // 0x1e16c0: 0xc0784ac  jal         func_1E12B0
    ctx->pc = 0x1E16C0u;
    SET_GPR_U32(ctx, 31, 0x1E16C8u);
    ctx->pc = 0x1E16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16C0u;
            // 0x1e16c4: 0xae0003e0  sw          $zero, 0x3E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E12B0u;
    if (runtime->hasFunction(0x1E12B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E12B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16C8u; }
        if (ctx->pc != 0x1E16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E12B0_0x1e12b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16C8u; }
        if (ctx->pc != 0x1E16C8u) { return; }
    }
    ctx->pc = 0x1E16C8u;
label_1e16c8:
    // 0x1e16c8: 0xc079e92  jal         func_1E7A48
    ctx->pc = 0x1E16C8u;
    SET_GPR_U32(ctx, 31, 0x1E16D0u);
    ctx->pc = 0x1E16CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16C8u;
            // 0x1e16cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (runtime->hasFunction(0x1E7A48u)) {
        auto targetFn = runtime->lookupFunction(0x1E7A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D0u; }
        if (ctx->pc != 0x1E16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7A48_0x1e7a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D0u; }
        if (ctx->pc != 0x1E16D0u) { return; }
    }
    ctx->pc = 0x1E16D0u;
label_1e16d0:
    // 0x1e16d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e16d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e16d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e16d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e16dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e16dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e16e0: 0x80774d6  j           func_1DD358
    ctx->pc = 0x1E16E0u;
    ctx->pc = 0x1E16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16E0u;
            // 0x1e16e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD358u;
    if (runtime->hasFunction(0x1DD358u)) {
        auto targetFn = runtime->lookupFunction(0x1DD358u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001DD358_0x1dd358(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E16E8u;
    ctx->pc = 0x1e16e8u;
}
