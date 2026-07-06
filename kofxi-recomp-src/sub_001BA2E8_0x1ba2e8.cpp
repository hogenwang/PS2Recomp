#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA2E8
// Address: 0x1ba2e8 - 0x1ba3a8
void sub_001BA2E8_0x1ba2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA2E8_0x1ba2e8");
#endif

    switch (ctx->pc) {
        case 0x1ba314u: goto label_1ba314;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba34cu: goto label_1ba34c;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba370u: goto label_1ba370;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba394u: goto label_1ba394;
        default: break;
    }

    ctx->pc = 0x1ba2e8u;

    // 0x1ba2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba2ec: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ba2f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ba2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ba2f4: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1ba2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1ba2f8: 0x26105330  addiu       $s0, $s0, 0x5330
    ctx->pc = 0x1ba2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21296));
    // 0x1ba2fc: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x1ba2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ba300: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ba300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba304: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1ba304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ba308: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ba308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ba30c: 0xc06b6d6  jal         func_1ADB58
    ctx->pc = 0x1BA30Cu;
    SET_GPR_U32(ctx, 31, 0x1BA314u);
    ctx->pc = 0x1BA310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA30Cu;
            // 0x1ba310: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    if (runtime->hasFunction(0x1ADB58u)) {
        auto targetFn = runtime->lookupFunction(0x1ADB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA314u; }
        if (ctx->pc != 0x1BA314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADB58_0x1adb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA314u; }
        if (ctx->pc != 0x1BA314u) { return; }
    }
    ctx->pc = 0x1BA314u;
label_1ba314:
    // 0x1ba314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba318: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1ba318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ba31c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ba31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba320: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1ba320u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1ba324: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ba324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba328: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA328u;
            // 0x1ba32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba344: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA344u;
    SET_GPR_U32(ctx, 31, 0x1BA34Cu);
    ctx->pc = 0x1BA348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA344u;
            // 0x1ba348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA34Cu; }
        if (ctx->pc != 0x1BA34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA34Cu; }
        if (ctx->pc != 0x1BA34Cu) { return; }
    }
    ctx->pc = 0x1BA34Cu;
label_1ba34c:
    // 0x1ba34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba350: 0xc06e8ea  jal         func_1BA3A8
    ctx->pc = 0x1BA350u;
    SET_GPR_U32(ctx, 31, 0x1BA358u);
    ctx->pc = 0x1BA354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA350u;
            // 0x1ba354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA3A8u;
    if (runtime->hasFunction(0x1BA3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA358u; }
        if (ctx->pc != 0x1BA358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA3A8_0x1ba3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA358u; }
        if (ctx->pc != 0x1BA358u) { return; }
    }
    ctx->pc = 0x1BA358u;
label_1ba358:
    // 0x1ba358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba364: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA364u;
    ctx->pc = 0x1BA368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA364u;
            // 0x1ba368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BA36Cu;
    // 0x1ba36c: 0x0  nop
    ctx->pc = 0x1ba36cu;
    // NOP
label_1ba370:
    // 0x1ba370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba37c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA37Cu;
    SET_GPR_U32(ctx, 31, 0x1BA384u);
    ctx->pc = 0x1BA380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA37Cu;
            // 0x1ba380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA384u; }
        if (ctx->pc != 0x1BA384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA384u; }
        if (ctx->pc != 0x1BA384u) { return; }
    }
    ctx->pc = 0x1BA384u;
label_1ba384:
    // 0x1ba384: 0xc06e8ec  jal         func_1BA3B0
    ctx->pc = 0x1BA384u;
    SET_GPR_U32(ctx, 31, 0x1BA38Cu);
    ctx->pc = 0x1BA388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA384u;
            // 0x1ba388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA3B0u;
    if (runtime->hasFunction(0x1BA3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA38Cu; }
        if (ctx->pc != 0x1BA38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA3B0_0x1ba3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA38Cu; }
        if (ctx->pc != 0x1BA38Cu) { return; }
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA38Cu;
    SET_GPR_U32(ctx, 31, 0x1BA394u);
    ctx->pc = 0x1BA390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA38Cu;
            // 0x1ba390: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA394u; }
        if (ctx->pc != 0x1BA394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA394u; }
        if (ctx->pc != 0x1BA394u) { return; }
    }
    ctx->pc = 0x1BA394u;
label_1ba394:
    // 0x1ba394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3A0u;
            // 0x1ba3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA3A8u;
    ctx->pc = 0x1ba3a8u;
}
