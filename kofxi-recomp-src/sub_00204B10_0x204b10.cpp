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

// Function: sub_00204B10
// Address: 0x204b10 - 0x204be0
void sub_00204B10_0x204b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204B10_0x204b10");
#endif

    switch (ctx->pc) {
        case 0x204b74u: goto label_204b74;
        case 0x204bc4u: goto label_204bc4;
        default: break;
    }

    ctx->pc = 0x204b10u;

    // 0x204b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x204b14: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x204b18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x204b1c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204b20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x204b24: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x204b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x204b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x204b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204b34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204b3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b40: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x204b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204b44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x204b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204b48: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204b4c: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x204b50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204b54: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x204b54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204b58: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204b5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204b60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204b64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204b68: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204b6c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x204B6Cu;
    SET_GPR_U32(ctx, 31, 0x204B74u);
    ctx->pc = 0x204B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B6Cu;
    // 0x204b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x204B6Cu, 0x204B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B74u;
label_204b74:
    // 0x204b74: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204B74u;
    {
        const bool branch_taken_0x204b74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B74u;
        // 0x204b78: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b74) {
            ctx->pc = 0x204B84u;
            goto label_204b84;
        }
    }
    ctx->pc = 0x204B7Cu;
    // 0x204b7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204b80: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x204b80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_204b84:
    // 0x204b84: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x204b88: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x204b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x204b8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x204b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x204b90: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x204b94: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204B94u;
    {
        const bool branch_taken_0x204b94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B94u;
        // 0x204b98: 0x2642023  subu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b94) {
            ctx->pc = 0x204BA8u;
            goto label_204ba8;
        }
    }
    ctx->pc = 0x204B9Cu;
    // 0x204b9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x204B9Cu;
    {
        const bool branch_taken_0x204b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b9c) {
            ctx->pc = 0x204BA8u;
            goto label_204ba8;
        }
    }
    ctx->pc = 0x204BA4u;
    // 0x204ba4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x204ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_204ba8:
    // 0x204ba8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x204BA8u;
    {
        const bool branch_taken_0x204ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ba8) {
            ctx->pc = 0x204BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204BA8u;
            // 0x204bac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204BB8u;
            goto label_204bb8;
        }
    }
    ctx->pc = 0x204BB0u;
    // 0x204bb0: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x204bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x204bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204bb8:
    // 0x204bb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x204bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bbc: 0xc081270  jal         func_2049C0
    ctx->pc = 0x204BBCu;
    SET_GPR_U32(ctx, 31, 0x204BC4u);
    ctx->pc = 0x204BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BBCu;
    // 0x204bc0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2049C0u, 0x204BBCu, 0x204BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BC4u;
label_204bc4:
    // 0x204bc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x204BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BD8u;
        // 0x204bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204BE0u;
}
