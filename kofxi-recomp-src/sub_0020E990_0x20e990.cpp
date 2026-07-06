#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020E990
// Address: 0x20e990 - 0x20eaa0
void sub_0020E990_0x20e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E990_0x20e990");
#endif

    switch (ctx->pc) {
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea7cu: goto label_20ea7c;
        default: break;
    }

    ctx->pc = 0x20e990u;

    // 0x20e990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20e998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20e998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e99c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e9a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e9a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20e9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e9b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20e9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e9b8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20E9B8u;
    {
        const bool branch_taken_0x20e9b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B8u;
        // 0x20e9bc: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9b8) {
            ctx->pc = 0x20E9CCu;
            goto label_20e9cc;
        }
    }
    ctx->pc = 0x20E9C0u;
    // 0x20e9c0: 0x96660010  lhu         $a2, 0x10($s3)
    ctx->pc = 0x20e9c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20e9c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20E9C4u;
    {
        const bool branch_taken_0x20e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9C4u;
        // 0x20e9c8: 0x96700000  lhu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9c4) {
            ctx->pc = 0x20E9D4u;
            goto label_20e9d4;
        }
    }
    ctx->pc = 0x20E9CCu;
label_20e9cc:
    // 0x20e9cc: 0x96700002  lhu         $s0, 0x2($s3)
    ctx->pc = 0x20e9ccu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x20e9d0: 0x96660012  lhu         $a2, 0x12($s3)
    ctx->pc = 0x20e9d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_20e9d4:
    // 0x20e9d4: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x20e9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20e9d8: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20e9dc: 0x50830028  beql        $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x20E9DCu;
    {
        const bool branch_taken_0x20e9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e9dc) {
            ctx->pc = 0x20E9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E9DCu;
            // 0x20e9e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA80u;
            goto label_20ea80;
        }
    }
    ctx->pc = 0x20E9E4u;
    // 0x20e9e4: 0x9664000c  lhu         $a0, 0xC($s3)
    ctx->pc = 0x20e9e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x20e9e8: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x20e9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x20e9ec: 0x9665000e  lhu         $a1, 0xE($s3)
    ctx->pc = 0x20e9ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x20e9f0: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x20e9f4: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E9F4u;
    SET_GPR_U32(ctx, 31, 0x20E9FCu);
    ctx->pc = 0x20E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9F4u;
    // 0x20e9f8: 0x27a9006c  addiu       $t1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E9F4u, 0x20E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9FCu;
label_20e9fc:
    // 0x20e9fc: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x20e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x20ea00: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x20EA00u;
    {
        const bool branch_taken_0x20ea00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea00) {
            ctx->pc = 0x20EA7Cu;
            goto label_20ea7c;
        }
    }
    ctx->pc = 0x20EA08u;
    // 0x20ea08: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x20ea08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20ea0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20ea10: 0x96650006  lhu         $a1, 0x6($s3)
    ctx->pc = 0x20ea10u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x20ea14: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x20ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20ea18: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20ea1c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x20ea20: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x20ea20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x20ea24: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x20ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x20ea28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20EA28u;
    {
        const bool branch_taken_0x20ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea28) {
            ctx->pc = 0x20EA58u;
            goto label_20ea58;
        }
    }
    ctx->pc = 0x20EA30u;
    // 0x20ea30: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20ea30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20ea34: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x20ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20ea38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ea3c: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x20ea3cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x20ea40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ea44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ea48: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20EA48u;
    SET_GPR_U32(ctx, 31, 0x20EA50u);
    ctx->pc = 0x20EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA48u;
    // 0x20ea4c: 0x2824821  addu        $t1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20EA48u, 0x20EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA50u;
label_20ea50:
    // 0x20ea50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20EA50u;
    {
        const bool branch_taken_0x20ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea50) {
            ctx->pc = 0x20EA7Cu;
            goto label_20ea7c;
        }
    }
    ctx->pc = 0x20EA58u;
label_20ea58:
    // 0x20ea58: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x20ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x20ea5c: 0x9668000a  lhu         $t0, 0xA($s3)
    ctx->pc = 0x20ea5cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x20ea60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ea64: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20ea64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ea6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ea70: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x20ea70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea74: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20EA74u;
    SET_GPR_U32(ctx, 31, 0x20EA7Cu);
    ctx->pc = 0x20EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA74u;
    // 0x20ea78: 0x2824021  addu        $t0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20EA74u, 0x20EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA7Cu;
label_20ea7c:
    // 0x20ea7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20ea80:
    // 0x20ea80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ea80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ea84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ea84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ea88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ea88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ea8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ea8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ea90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ea90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea94: 0x3e00008  jr          $ra
    ctx->pc = 0x20EA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA94u;
        // 0x20ea98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EA9Cu;
    // 0x20ea9c: 0x0  nop
    ctx->pc = 0x20ea9cu;
    // NOP
    if (ctx->pc == 0x20ea9cu) { ctx->pc = 0x20eaa0u; }
}
