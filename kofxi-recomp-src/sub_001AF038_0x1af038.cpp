#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF038
// Address: 0x1af038 - 0x1af120
void sub_001AF038_0x1af038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF038_0x1af038");
#endif

    switch (ctx->pc) {
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af100u: goto label_1af100;
        default: break;
    }

    ctx->pc = 0x1af038u;

    // 0x1af038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af03c: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1af03cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1af040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af044: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1af044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1af048: 0x254a026f  addiu       $t2, $t2, 0x26F
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 623));
    // 0x1af04c: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x1af04cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1af050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af054: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1af058: 0x806bc18  j           func_1AF060
    ctx->pc = 0x1AF058u;
    ctx->pc = 0x1AF05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF058u;
            // 0x1af05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF060u;
    goto label_1af060;
    ctx->pc = 0x1AF060u;
label_1af060:
    // 0x1af060: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1af060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af06c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1af06cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af070: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x1af070u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af074: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1af074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af078: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x1af078u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af07c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1af07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af080: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1af080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af084: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1af084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af088: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1af088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x1af08c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1af08cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af090: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1af090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1af094: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1af094u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af09c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af0a0: 0xc06bd6a  jal         func_1AF5A8
    ctx->pc = 0x1AF0A0u;
    SET_GPR_U32(ctx, 31, 0x1AF0A8u);
    ctx->pc = 0x1AF0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0A0u;
            // 0x1af0a4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5A8u;
    if (runtime->hasFunction(0x1AF5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A8u; }
        if (ctx->pc != 0x1AF0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5A8_0x1af5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A8u; }
        if (ctx->pc != 0x1AF0A8u) { return; }
    }
    ctx->pc = 0x1AF0A8u;
label_1af0a8:
    // 0x1af0a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0ACu;
            // 0x1af0b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF0B4u;
    // 0x1af0b4: 0x0  nop
    ctx->pc = 0x1af0b4u;
    // NOP
label_1af0b8:
    // 0x1af0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af0c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af0d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af0d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af0dc: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF0DCu;
    SET_GPR_U32(ctx, 31, 0x1AF0E4u);
    ctx->pc = 0x1AF0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0DCu;
            // 0x1af0e0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E4u; }
        if (ctx->pc != 0x1AF0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E4u; }
        if (ctx->pc != 0x1AF0E4u) { return; }
    }
    ctx->pc = 0x1AF0E4u;
label_1af0e4:
    // 0x1af0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0f0: 0xc06bc48  jal         func_1AF120
    ctx->pc = 0x1AF0F0u;
    SET_GPR_U32(ctx, 31, 0x1AF0F8u);
    ctx->pc = 0x1AF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0F0u;
            // 0x1af0f4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (runtime->hasFunction(0x1AF120u)) {
        auto targetFn = runtime->lookupFunction(0x1AF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF120_0x1af120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    }
    ctx->pc = 0x1AF0F8u;
label_1af0f8:
    // 0x1af0f8: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF0F8u;
    SET_GPR_U32(ctx, 31, 0x1AF100u);
    ctx->pc = 0x1AF0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0F8u;
            // 0x1af0fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF100u; }
        if (ctx->pc != 0x1AF100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF100u; }
        if (ctx->pc != 0x1AF100u) { return; }
    }
    ctx->pc = 0x1AF100u;
label_1af100:
    // 0x1af100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af118: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF118u;
            // 0x1af11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF120u;
    ctx->pc = 0x1af120u;
}
