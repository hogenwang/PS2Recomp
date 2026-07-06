#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF2F0
// Address: 0x1af2f0 - 0x1af3c8
void sub_001AF2F0_0x1af2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF2F0_0x1af2f0");
#endif

    switch (ctx->pc) {
        case 0x1af330u: goto label_1af330;
        case 0x1af340u: goto label_1af340;
        case 0x1af37cu: goto label_1af37c;
        case 0x1af398u: goto label_1af398;
        case 0x1af3a0u: goto label_1af3a0;
        default: break;
    }

    ctx->pc = 0x1af2f0u;

    // 0x1af2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af2f4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1af2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1af2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af300: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x1af304: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af304u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af308: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1af308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1af30c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1af30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af310: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1af310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1af314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af31c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1af31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af320: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1af320u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1af324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af328: 0xc06bd6a  jal         func_1AF5A8
    ctx->pc = 0x1AF328u;
    SET_GPR_U32(ctx, 31, 0x1AF330u);
    ctx->pc = 0x1AF32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF328u;
            // 0x1af32c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5A8u;
    if (runtime->hasFunction(0x1AF5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF330u; }
        if (ctx->pc != 0x1AF330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5A8_0x1af5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF330u; }
        if (ctx->pc != 0x1AF330u) { return; }
    }
    ctx->pc = 0x1AF330u;
label_1af330:
    // 0x1af330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af334: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF334u;
            // 0x1af338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x0  nop
    ctx->pc = 0x1af33cu;
    // NOP
label_1af340:
    // 0x1af340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af34c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af358: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af35c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af360: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1af360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af364: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1af364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1af368: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1af368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af36c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1af36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1af370: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af374: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF374u;
    SET_GPR_U32(ctx, 31, 0x1AF37Cu);
    ctx->pc = 0x1AF378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF374u;
            // 0x1af378: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF37Cu; }
        if (ctx->pc != 0x1AF37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF37Cu; }
        if (ctx->pc != 0x1AF37Cu) { return; }
    }
    ctx->pc = 0x1AF37Cu;
label_1af37c:
    // 0x1af37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af388: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1af388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af38c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1af38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af390: 0xc06bcf2  jal         func_1AF3C8
    ctx->pc = 0x1AF390u;
    SET_GPR_U32(ctx, 31, 0x1AF398u);
    ctx->pc = 0x1AF394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF390u;
            // 0x1af394: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3C8u;
    if (runtime->hasFunction(0x1AF3C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF398u; }
        if (ctx->pc != 0x1AF398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF3C8_0x1af3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF398u; }
        if (ctx->pc != 0x1AF398u) { return; }
    }
    ctx->pc = 0x1AF398u;
label_1af398:
    // 0x1af398: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF398u;
    SET_GPR_U32(ctx, 31, 0x1AF3A0u);
    ctx->pc = 0x1AF39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF398u;
            // 0x1af39c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3A0u; }
        if (ctx->pc != 0x1AF3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3A0u; }
        if (ctx->pc != 0x1AF3A0u) { return; }
    }
    ctx->pc = 0x1AF3A0u;
label_1af3a0:
    // 0x1af3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af3a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af3b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af3b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af3b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af3b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af3b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3C0u;
            // 0x1af3c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF3C8u;
    ctx->pc = 0x1af3c8u;
}
