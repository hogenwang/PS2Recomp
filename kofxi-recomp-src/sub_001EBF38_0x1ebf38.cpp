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

// Function: sub_001EBF38
// Address: 0x1ebf38 - 0x1ec020
void sub_001EBF38_0x1ebf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBF38_0x1ebf38");
#endif

    switch (ctx->pc) {
        case 0x1ebf74u: goto label_1ebf74;
        case 0x1ebf94u: goto label_1ebf94;
        case 0x1ebfb4u: goto label_1ebfb4;
        case 0x1ebff4u: goto label_1ebff4;
        default: break;
    }

    ctx->pc = 0x1ebf38u;

    // 0x1ebf38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebf3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ebf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ebf40: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ebf40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ebf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ebf48: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1ebf48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1ebf4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ebf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ebf50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ebf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ebf54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ebf54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ebf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ebf5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ebf5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ebf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ebf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ebf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ebf68: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ebf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ebf6c: 0xc07b0c0  jal         func_1EC300
    ctx->pc = 0x1EBF6Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF74u);
    ctx->pc = 0x1EBF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF6Cu;
    // 0x1ebf70: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC300u, 0x1EBF6Cu, 0x1EBF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF74u;
label_1ebf74:
    // 0x1ebf74: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1ebf78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ebf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf7c: 0x2339023  subu        $s2, $s1, $s3
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ebf80: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ebf84: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBF84u;
    {
        const bool branch_taken_0x1ebf84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF84u;
        // 0x1ebf88: 0x292a823  subu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf84) {
            ctx->pc = 0x1EBFF8u;
            goto label_1ebff8;
        }
    }
    ctx->pc = 0x1EBF8Cu;
    // 0x1ebf8c: 0xc07b0c0  jal         func_1EC300
    ctx->pc = 0x1EBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF94u);
    ctx->pc = 0x1EBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF8Cu;
    // 0x1ebf90: 0x26a5ffff  addiu       $a1, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC300u, 0x1EBF8Cu, 0x1EBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF94u;
label_1ebf94:
    // 0x1ebf94: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1ebf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1ebf98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ebf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf9c: 0x2131823  subu        $v1, $s0, $s3
    ctx->pc = 0x1ebf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1ebfa0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1ebfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ebfa4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EBFA4u;
    {
        const bool branch_taken_0x1ebfa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFA4u;
        // 0x1ebfa8: 0x2832823  subu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfa4) {
            ctx->pc = 0x1EBFF8u;
            goto label_1ebff8;
        }
    }
    ctx->pc = 0x1EBFACu;
    // 0x1ebfac: 0xc07b0c0  jal         func_1EC300
    ctx->pc = 0x1EBFACu;
    SET_GPR_U32(ctx, 31, 0x1EBFB4u);
    ctx->pc = 0x1EBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFACu;
    // 0x1ebfb0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC300u, 0x1EBFACu, 0x1EBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFB4u;
label_1ebfb4:
    // 0x1ebfb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfb8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EBFB8u;
    {
        const bool branch_taken_0x1ebfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFB8u;
        // 0x1ebfbc: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfb8) {
            ctx->pc = 0x1EBFF8u;
            goto label_1ebff8;
        }
    }
    ctx->pc = 0x1EBFC0u;
    // 0x1ebfc0: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1ebfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ebfc4: 0x1604000c  bne         $s0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EBFC4u;
    {
        const bool branch_taken_0x1ebfc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFC4u;
        // 0x1ebfc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfc4) {
            ctx->pc = 0x1EBFF8u;
            goto label_1ebff8;
        }
    }
    ctx->pc = 0x1EBFCCu;
    // 0x1ebfcc: 0x250001a  div         $zero, $s2, $s0
    ctx->pc = 0x1ebfccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ebfd0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EBFD0u;
    {
        const bool branch_taken_0x1ebfd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfd0) {
            ctx->pc = 0x1EBFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBFD0u;
            // 0x1ebfd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFD8u;
            goto label_1ebfd8;
        }
    }
    ctx->pc = 0x1EBFD8u;
label_1ebfd8:
    // 0x1ebfd8: 0x1810  mfhi        $v1
    ctx->pc = 0x1ebfd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ebfdc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBFDCu;
    {
        const bool branch_taken_0x1ebfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfdc) {
            ctx->pc = 0x1EBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBFDCu;
            // 0x1ebfe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFFCu;
            goto label_1ebffc;
        }
    }
    ctx->pc = 0x1EBFE4u;
    // 0x1ebfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfe8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ebfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfec: 0xc07b008  jal         func_1EC020
    ctx->pc = 0x1EBFECu;
    SET_GPR_U32(ctx, 31, 0x1EBFF4u);
    ctx->pc = 0x1EBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFECu;
    // 0x1ebff0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC020u, 0x1EBFECu, 0x1EBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFF4u;
label_1ebff4:
    // 0x1ebff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ebff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebff8:
    // 0x1ebff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebffc:
    // 0x1ebffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ebffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec00c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ec00cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec010: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ec010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec014: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ec014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec018: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC018u;
        // 0x1ec01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC020u;
}
