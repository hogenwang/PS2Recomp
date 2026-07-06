#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF240
// Address: 0x1af240 - 0x1af2f0
void sub_001AF240_0x1af240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF240_0x1af240");
#endif

    switch (ctx->pc) {
        case 0x1af268u: goto label_1af268;
        case 0x1af2a4u: goto label_1af2a4;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2c8u: goto label_1af2c8;
        default: break;
    }

    ctx->pc = 0x1af240u;

    // 0x1af240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af244: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1af244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1af248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af24c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1af24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1af250: 0x2508026f  addiu       $t0, $t0, 0x26F
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 623));
    // 0x1af254: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1af258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af25c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1af25cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1af260: 0x806bd5a  j           func_1AF568
    ctx->pc = 0x1AF260u;
    ctx->pc = 0x1AF264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF260u;
            // 0x1af264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF568u;
    if (runtime->hasFunction(0x1AF568u)) {
        auto targetFn = runtime->lookupFunction(0x1AF568u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AF568_0x1af568(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF268u;
label_1af268:
    // 0x1af268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af27c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af280: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af288: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1af288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af28c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1af28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1af290: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1af290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af294: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1af294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1af298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af29c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF29Cu;
    SET_GPR_U32(ctx, 31, 0x1AF2A4u);
    ctx->pc = 0x1AF2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF29Cu;
            // 0x1af2a0: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2A4u; }
        if (ctx->pc != 0x1AF2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2A4u; }
        if (ctx->pc != 0x1AF2A4u) { return; }
    }
    ctx->pc = 0x1AF2A4u;
label_1af2a4:
    // 0x1af2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1af2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2b4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1af2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2b8: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x1AF2B8u;
    SET_GPR_U32(ctx, 31, 0x1AF2C0u);
    ctx->pc = 0x1AF2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2B8u;
            // 0x1af2bc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (runtime->hasFunction(0x1AF2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C0u; }
        if (ctx->pc != 0x1AF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF2F0_0x1af2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C0u; }
        if (ctx->pc != 0x1AF2C0u) { return; }
    }
    ctx->pc = 0x1AF2C0u;
label_1af2c0:
    // 0x1af2c0: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF2C0u;
    SET_GPR_U32(ctx, 31, 0x1AF2C8u);
    ctx->pc = 0x1AF2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2C0u;
            // 0x1af2c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C8u; }
        if (ctx->pc != 0x1AF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C8u; }
        if (ctx->pc != 0x1AF2C8u) { return; }
    }
    ctx->pc = 0x1AF2C8u;
label_1af2c8:
    // 0x1af2c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af2d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af2dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af2dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af2e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af2e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2E8u;
            // 0x1af2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF2F0u;
    ctx->pc = 0x1af2f0u;
}
