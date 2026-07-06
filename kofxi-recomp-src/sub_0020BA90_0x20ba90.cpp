#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020BA90
// Address: 0x20ba90 - 0x20bb80
void sub_0020BA90_0x20ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA90_0x20ba90");
#endif

    switch (ctx->pc) {
        case 0x20baecu: goto label_20baec;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb54u: goto label_20bb54;
        default: break;
    }

    ctx->pc = 0x20ba90u;

    // 0x20ba90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20ba94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20ba98: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x20ba9c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20baa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20baa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20baa4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20baa8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20baa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20baac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20baacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20bab0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20bab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20bab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20bab8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x20bab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20babc: 0x95070008  lhu         $a3, 0x8($t0)
    ctx->pc = 0x20babcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x20bac0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20bac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bac4: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x20bac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x20bac8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20bacc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20baccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bad0: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20bad4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20bad8: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x20bad8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20badc: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x20badcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x20bae0: 0x950b0004  lhu         $t3, 0x4($t0)
    ctx->pc = 0x20bae0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20bae4: 0xc0829bc  jal         func_20A6F0
    ctx->pc = 0x20BAE4u;
    SET_GPR_U32(ctx, 31, 0x20BAECu);
    ctx->pc = 0x20BAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAE4u;
            // 0x20bae8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A6F0u;
    if (runtime->hasFunction(0x20A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BAECu; }
        if (ctx->pc != 0x20BAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A6F0_0x20a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BAECu; }
        if (ctx->pc != 0x20BAECu) { return; }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x20baecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20baf0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20BB60u;
            goto label_20bb60;
        }
    }
    ctx->pc = 0x20BAF8u;
    // 0x20baf8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x20baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20bafc:
    // 0x20bafc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20bb00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BB00u;
    {
        const bool branch_taken_0x20bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb00) {
            ctx->pc = 0x20BB18u;
            goto label_20bb18;
        }
    }
    ctx->pc = 0x20BB08u;
    // 0x20bb08: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x20bb08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20bb0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20BB0Cu;
    {
        const bool branch_taken_0x20bb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB0Cu;
            // 0x20bb10: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb0c) {
            ctx->pc = 0x20BB20u;
            goto label_20bb20;
        }
    }
    ctx->pc = 0x20BB14u;
    // 0x20bb14: 0x0  nop
    ctx->pc = 0x20bb14u;
    // NOP
label_20bb18:
    // 0x20bb18: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x20bb18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20bb1c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x20bb1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20bb20:
    // 0x20bb20: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x20bb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x20bb24: 0x96270008  lhu         $a3, 0x8($s1)
    ctx->pc = 0x20bb24u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20bb28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb2c: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x20bb2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20bb30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb34: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20bb38: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20bb3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20bb40: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x20bb40u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20bb44: 0x962a0002  lhu         $t2, 0x2($s1)
    ctx->pc = 0x20bb44u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20bb48: 0x962b0004  lhu         $t3, 0x4($s1)
    ctx->pc = 0x20bb48u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20bb4c: 0xc0829bc  jal         func_20A6F0
    ctx->pc = 0x20BB4Cu;
    SET_GPR_U32(ctx, 31, 0x20BB54u);
    ctx->pc = 0x20BB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB4Cu;
            // 0x20bb50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A6F0u;
    if (runtime->hasFunction(0x20A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB54u; }
        if (ctx->pc != 0x20BB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A6F0_0x20a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB54u; }
        if (ctx->pc != 0x20BB54u) { return; }
    }
    ctx->pc = 0x20BB54u;
label_20bb54:
    // 0x20bb54: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x20bb54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20bb58: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20BB58u;
    {
        const bool branch_taken_0x20bb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bb58) {
            ctx->pc = 0x20BB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB58u;
            // 0x20bb5c: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BAFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20bafc;
        }
    }
    ctx->pc = 0x20BB60u;
label_20bb60:
    // 0x20bb60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20bb64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20bb64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20bb68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20bb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20bb6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20bb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20bb70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20bb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20bb74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20bb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20bb78: 0x3e00008  jr          $ra
    ctx->pc = 0x20BB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB78u;
            // 0x20bb7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20BB80u;
    ctx->pc = 0x20bb80u;
}
