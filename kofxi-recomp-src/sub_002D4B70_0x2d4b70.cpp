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

// Function: sub_002D4B70
// Address: 0x2d4b70 - 0x2d4d20
void sub_002D4B70_0x2d4b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4B70_0x2d4b70");
#endif

    switch (ctx->pc) {
        case 0x2d4bc8u: goto label_2d4bc8;
        case 0x2d4bf8u: goto label_2d4bf8;
        case 0x2d4c08u: goto label_2d4c08;
        case 0x2d4c18u: goto label_2d4c18;
        case 0x2d4cc0u: goto label_2d4cc0;
        default: break;
    }

    ctx->pc = 0x2d4b70u;

    // 0x2d4b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d4b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d4b74: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d4b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d4b78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d4b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b7c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d4b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d4b80: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d4b80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b84: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d4b88: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2d4b88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d4b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d4b90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d4b94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d4b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d4b98: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d4b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d4b9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d4ba0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d4ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d4ba4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d4ba8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d4bac: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2d4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2d4bb0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d4bb4: 0x8ef20008  lw          $s2, 0x8($s7)
    ctx->pc = 0x2d4bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2d4bb8: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D4BB8u;
    {
        const bool branch_taken_0x2d4bb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BB8u;
        // 0x2d4bbc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bb8) {
            ctx->pc = 0x2D4C8Cu;
            goto label_2d4c8c;
        }
    }
    ctx->pc = 0x2D4BC0u;
    // 0x2d4bc0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2d4bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d4bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d4bc8:
    // 0x2d4bc8: 0xdeb20000  ld          $s2, 0x0($s5)
    ctx->pc = 0x2d4bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d4bcc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2d4bccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2d4bd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4bd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4bd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d4bdc: 0x2439824  and         $s3, $s2, $v1
    ctx->pc = 0x2d4bdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2d4be0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2d4be0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2d4be4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2d4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2d4be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d4becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bf0: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4BF0u;
    SET_GPR_U32(ctx, 31, 0x2D4BF8u);
    ctx->pc = 0x2D4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BF0u;
    // 0x2d4bf4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D4BF0u, 0x2D4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BF8u;
label_2d4bf8:
    // 0x2d4bf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c00: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4C00u;
    SET_GPR_U32(ctx, 31, 0x2D4C08u);
    ctx->pc = 0x2D4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C00u;
    // 0x2d4c04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D4C00u, 0x2D4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C08u;
label_2d4c08:
    // 0x2d4c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d4c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c10: 0xc048082  jal         func_120208
    ctx->pc = 0x2D4C10u;
    SET_GPR_U32(ctx, 31, 0x2D4C18u);
    ctx->pc = 0x2D4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C10u;
    // 0x2d4c14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D4C10u, 0x2D4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C18u;
label_2d4c18:
    // 0x2d4c18: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d4c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d4c1c: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x2d4c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x2d4c20: 0x23878  dsll        $a3, $v0, 1
    ctx->pc = 0x2d4c20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 1);
    // 0x2d4c24: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x2d4c24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d4c28: 0x203302d  daddu       $a2, $s0, $v1
    ctx->pc = 0x2d4c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d4c2c: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x2d4c2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4c30: 0x7283e  dsrl32      $a1, $a3, 0
    ctx->pc = 0x2d4c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2d4c34: 0x2387c  dsll32      $a3, $v0, 1
    ctx->pc = 0x2d4c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2d4c38: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x2d4c38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x2d4c3c: 0x227882d  daddu       $s1, $s1, $a3
    ctx->pc = 0x2d4c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2d4c40: 0x227182b  sltu        $v1, $s1, $a3
    ctx->pc = 0x2d4c40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d4c44: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2d4c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2d4c48: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x2d4c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x2d4c4c: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x2d4c4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d4c50: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2d4c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d4c54: 0xde830008  ld          $v1, 0x8($s4)
    ctx->pc = 0x2d4c54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d4c58: 0x236882d  daddu       $s1, $s1, $s6
    ctx->pc = 0x2d4c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 22));
    // 0x2d4c5c: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x2d4c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2d4c60: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x2d4c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2d4c64: 0xfe910000  sd          $s1, 0x0($s4)
    ctx->pc = 0x2d4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 17));
    // 0x2d4c68: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2d4c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d4c6c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2d4c6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2d4c70: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x2d4c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d4c74: 0xfe900008  sd          $s0, 0x8($s4)
    ctx->pc = 0x2d4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 16));
    // 0x2d4c78: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2d4c78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2d4c7c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d4c80: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x2d4c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4c84: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D4C84u;
    {
        const bool branch_taken_0x2d4c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C84u;
        // 0x2d4c88: 0x203b02b  sltu        $s6, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c84) {
            ctx->pc = 0x2D4BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4bc8;
        }
    }
    ctx->pc = 0x2D4C8Cu;
label_2d4c8c:
    // 0x2d4c8c: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D4C8Cu;
    {
        const bool branch_taken_0x2d4c8c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C8Cu;
        // 0x2d4c90: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c8c) {
            ctx->pc = 0x2D4CF0u;
            goto label_2d4cf0;
        }
    }
    ctx->pc = 0x2D4C94u;
    // 0x2d4c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4c98: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d4c9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4ca0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2d4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d4ca4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d4ca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4ca8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4CA8u;
    {
        const bool branch_taken_0x2d4ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CA8u;
        // 0x2d4cac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ca8) {
            ctx->pc = 0x2D4CE0u;
            goto label_2d4ce0;
        }
    }
    ctx->pc = 0x2D4CB0u;
    // 0x2d4cb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d4cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4cb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4cbc: 0x0  nop
    ctx->pc = 0x2d4cbcu;
    // NOP
label_2d4cc0:
    // 0x2d4cc0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2d4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2d4cc4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2d4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d4cc8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d4ccc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4cd0: 0x0  nop
    ctx->pc = 0x2d4cd0u;
    // NOP
    // 0x2d4cd4: 0x1046fffa  beq         $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4CD4u;
    {
        const bool branch_taken_0x2d4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CD4u;
        // 0x2d4cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cd4) {
            ctx->pc = 0x2D4CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4cc0;
        }
    }
    ctx->pc = 0x2D4CDCu;
    // 0x2d4cdc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4ce0:
    // 0x2d4ce0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d4ce4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d4ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4ce8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2d4ce8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2d4cec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2d4cf0:
    // 0x2d4cf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d4cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4cf4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d4cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4cf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d4cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4cfc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d4cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d4d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4d04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d4d04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4d08: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4d0c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d4d10: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d4d10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4d14: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d4d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d4d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D18u;
        // 0x2d4d1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4D20u;
}
