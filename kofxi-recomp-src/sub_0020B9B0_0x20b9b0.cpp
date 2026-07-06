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

// Function: sub_0020B9B0
// Address: 0x20b9b0 - 0x20ba90
void sub_0020B9B0_0x20b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9B0_0x20b9b0");
#endif

    switch (ctx->pc) {
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba60u: goto label_20ba60;
        default: break;
    }

    ctx->pc = 0x20b9b0u;

    // 0x20b9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b9b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20b9b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20b9bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20b9c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20b9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20b9c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20b9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20b9d0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20b9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20b9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9d8: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x20b9d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20b9dc: 0x94e60006  lhu         $a2, 0x6($a3)
    ctx->pc = 0x20b9dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x20b9e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20b9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9e4: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20b9e8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20b9ec: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x20b9ecu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20b9f0: 0x94ea0002  lhu         $t2, 0x2($a3)
    ctx->pc = 0x20b9f0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x20b9f4: 0x94eb0004  lhu         $t3, 0x4($a3)
    ctx->pc = 0x20b9f4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20b9f8: 0xc082c08  jal         func_20B020
    ctx->pc = 0x20B9F8u;
    SET_GPR_U32(ctx, 31, 0x20BA00u);
    ctx->pc = 0x20B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9F8u;
    // 0x20b9fc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B020u, 0x20B9F8u, 0x20BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA00u;
label_20ba00:
    // 0x20ba00: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x20ba00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20ba04: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20BA04u;
    {
        const bool branch_taken_0x20ba04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba04) {
            ctx->pc = 0x20BA70u;
            goto label_20ba70;
        }
    }
    ctx->pc = 0x20BA0Cu;
    // 0x20ba0c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x20ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20ba10:
    // 0x20ba10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ba14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BA14u;
    {
        const bool branch_taken_0x20ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba14) {
            ctx->pc = 0x20BA28u;
            goto label_20ba28;
        }
    }
    ctx->pc = 0x20BA1Cu;
    // 0x20ba1c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x20ba1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20ba20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20BA20u;
    {
        const bool branch_taken_0x20ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA20u;
        // 0x20ba24: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba20) {
            ctx->pc = 0x20BA30u;
            goto label_20ba30;
        }
    }
    ctx->pc = 0x20BA28u;
label_20ba28:
    // 0x20ba28: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x20ba28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20ba2c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x20ba2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_20ba30:
    // 0x20ba30: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x20ba30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x20ba34: 0x96270008  lhu         $a3, 0x8($s1)
    ctx->pc = 0x20ba34u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20ba38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba3c: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x20ba3cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20ba40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba44: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20ba48: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20ba4c: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x20ba4cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20ba50: 0x962a0002  lhu         $t2, 0x2($s1)
    ctx->pc = 0x20ba50u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20ba54: 0x962b0004  lhu         $t3, 0x4($s1)
    ctx->pc = 0x20ba54u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20ba58: 0xc082c08  jal         func_20B020
    ctx->pc = 0x20BA58u;
    SET_GPR_U32(ctx, 31, 0x20BA60u);
    ctx->pc = 0x20BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA58u;
    // 0x20ba5c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B020u, 0x20BA58u, 0x20BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA60u;
label_20ba60:
    // 0x20ba60: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x20ba60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20ba64: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20BA64u;
    {
        const bool branch_taken_0x20ba64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ba64) {
            ctx->pc = 0x20BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BA64u;
            // 0x20ba68: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ba10;
        }
    }
    ctx->pc = 0x20BA6Cu;
    // 0x20ba6c: 0x0  nop
    ctx->pc = 0x20ba6cu;
    // NOP
label_20ba70:
    // 0x20ba70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20ba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ba74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20ba74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ba78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ba78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ba7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ba80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA84u;
        // 0x20ba88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA8Cu;
    // 0x20ba8c: 0x0  nop
    ctx->pc = 0x20ba8cu;
    // NOP
    if (ctx->pc == 0x20ba8cu) { ctx->pc = 0x20ba90u; }
}
