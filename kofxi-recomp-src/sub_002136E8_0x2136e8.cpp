#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002136E8
// Address: 0x2136e8 - 0x213798
void sub_002136E8_0x2136e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002136E8_0x2136e8");
#endif

    switch (ctx->pc) {
        case 0x213724u: goto label_213724;
        case 0x213738u: goto label_213738;
        case 0x21374cu: goto label_21374c;
        case 0x213760u: goto label_213760;
        case 0x213770u: goto label_213770;
        default: break;
    }

    ctx->pc = 0x2136e8u;

    // 0x2136e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2136e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2136ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2136ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2136f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2136f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2136f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2136f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2136f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2136f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2136fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2136fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213708: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21370c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21370cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213710: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213714: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x213714u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213718: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21371c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21371Cu;
    SET_GPR_U32(ctx, 31, 0x213724u);
    ctx->pc = 0x213720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21371Cu;
            // 0x213720: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213724u; }
        if (ctx->pc != 0x213724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213724u; }
        if (ctx->pc != 0x213724u) { return; }
    }
    ctx->pc = 0x213724u;
label_213724:
    // 0x213724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21372c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21372cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213730: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213730u;
    SET_GPR_U32(ctx, 31, 0x213738u);
    ctx->pc = 0x213734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213730u;
            // 0x213734: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213738u; }
        if (ctx->pc != 0x213738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213738u; }
        if (ctx->pc != 0x213738u) { return; }
    }
    ctx->pc = 0x213738u;
label_213738:
    // 0x213738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21373c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213740: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213744: 0xc08449a  jal         func_211268
    ctx->pc = 0x213744u;
    SET_GPR_U32(ctx, 31, 0x21374Cu);
    ctx->pc = 0x213748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213744u;
            // 0x213748: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21374Cu; }
        if (ctx->pc != 0x21374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21374Cu; }
        if (ctx->pc != 0x21374Cu) { return; }
    }
    ctx->pc = 0x21374Cu;
label_21374c:
    // 0x21374c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213750: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213758: 0xc08449a  jal         func_211268
    ctx->pc = 0x213758u;
    SET_GPR_U32(ctx, 31, 0x213760u);
    ctx->pc = 0x21375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213758u;
            // 0x21375c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213760u; }
        if (ctx->pc != 0x213760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213760u; }
        if (ctx->pc != 0x213760u) { return; }
    }
    ctx->pc = 0x213760u;
label_213760:
    // 0x213760: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x213760u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213768: 0xc084d9e  jal         func_213678
    ctx->pc = 0x213768u;
    SET_GPR_U32(ctx, 31, 0x213770u);
    ctx->pc = 0x21376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213768u;
            // 0x21376c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213678u;
    if (runtime->hasFunction(0x213678u)) {
        auto targetFn = runtime->lookupFunction(0x213678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213770u; }
        if (ctx->pc != 0x213770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213678_0x213678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213770u; }
        if (ctx->pc != 0x213770u) { return; }
    }
    ctx->pc = 0x213770u;
label_213770:
    // 0x213770: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x213770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21377c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21377cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213780: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213784: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213788: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21378c: 0x3e00008  jr          $ra
    ctx->pc = 0x21378Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21378Cu;
            // 0x213790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213794u;
    // 0x213794: 0x0  nop
    ctx->pc = 0x213794u;
    // NOP
    ctx->pc = 0x213798u;
}
