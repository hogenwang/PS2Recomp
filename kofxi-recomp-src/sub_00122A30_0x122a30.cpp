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

// Function: sub_00122A30
// Address: 0x122a30 - 0x122c28
void sub_00122A30_0x122a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122A30_0x122a30");
#endif

    switch (ctx->pc) {
        case 0x122a6cu: goto label_122a6c;
        case 0x122a88u: goto label_122a88;
        case 0x122aa4u: goto label_122aa4;
        case 0x122b98u: goto label_122b98;
        case 0x122bf0u: goto label_122bf0;
        default: break;
    }

    ctx->pc = 0x122a30u;

    // 0x122a30: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122a34: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x122a34u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a38: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x122a38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122a3c: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122A3Cu;
    {
        const bool branch_taken_0x122a3c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A3Cu;
        // 0x122a40: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a3c) {
            ctx->pc = 0x122A6Cu;
            goto label_122a6c;
        }
    }
    ctx->pc = 0x122A44u;
    // 0x122a44: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x122a44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122a48: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x122a48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122a4c: 0x55e00015  bnel        $t7, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x122A4Cu;
    {
        const bool branch_taken_0x122a4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a4c) {
            ctx->pc = 0x122A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122A4Cu;
            // 0x122a50: 0x8c8f0004  lw          $t7, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122AA4u;
            goto label_122aa4;
        }
    }
    ctx->pc = 0x122A54u;
    // 0x122a54: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x122a58: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x122A58u;
    {
        const bool branch_taken_0x122a58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A58u;
        // 0x122a5c: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a58) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x122A60u;
    // 0x122a60: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x122a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x122a64: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122A64u;
    {
        const bool branch_taken_0x122a64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A64u;
        // 0x122a68: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a64) {
            ctx->pc = 0x122A88u;
            goto label_122a88;
        }
    }
    ctx->pc = 0x122A6Cu;
label_122a6c:
    // 0x122a6c: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x122a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x122a70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x122a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a74: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x122a74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122a78: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x122a7c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x122a7cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x122a80: 0x3e00008  jr          $ra
    ctx->pc = 0x122A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A80u;
        // 0x122a84: 0xac8f0004  sw          $t7, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122A88u;
label_122a88:
    // 0x122a88: 0x3e00008  jr          $ra
    ctx->pc = 0x122A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A88u;
        // 0x122a8c: 0x25e2b730  addiu       $v0, $t7, -0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122A90u;
label_122a90:
    // 0x122a90: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x122A90u;
    {
        const bool branch_taken_0x122a90 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A90u;
        // 0x122a94: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a90) {
            ctx->pc = 0x122ABCu;
            goto label_122abc;
        }
    }
    ctx->pc = 0x122A98u;
    // 0x122a98: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x122A98u;
    {
        const bool branch_taken_0x122a98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A98u;
        // 0x122a9c: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a98) {
            ctx->pc = 0x122A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122a88;
        }
    }
    ctx->pc = 0x122AA0u;
    // 0x122aa0: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x122aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_122aa4:
    // 0x122aa4: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x122aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122aa8: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x122aac: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x122aacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x122ab0: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x122ab0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x122ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x122AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AB4u;
        // 0x122ab8: 0xad8f0004  sw          $t7, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122ABCu;
label_122abc:
    // 0x122abc: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x122ABCu;
    {
        const bool branch_taken_0x122abc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122ABCu;
        // 0x122ac0: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122abc) {
            ctx->pc = 0x122A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122a6c;
        }
    }
    ctx->pc = 0x122AC4u;
    // 0x122ac4: 0x51e0fff7  beql        $t7, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x122AC4u;
    {
        const bool branch_taken_0x122ac4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122ac4) {
            ctx->pc = 0x122AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122AC4u;
            // 0x122ac8: 0x8c8f0004  lw          $t7, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122aa4;
        }
    }
    ctx->pc = 0x122ACCu;
    // 0x122acc: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x122accu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122ad0: 0xdcae0010  ld          $t6, 0x10($a1)
    ctx->pc = 0x122ad0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x122ad4: 0xd303f  dsra32      $a2, $t5, 0
    ctx->pc = 0x122ad4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x122ad8: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x122ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x122adc: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x122ae0: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122ae4: 0xe403f  dsra32      $t0, $t6, 0
    ctx->pc = 0x122ae4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x122ae8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x122ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122aec: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x122aecu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x122af0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x122af0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122af4: 0x10d0019  multu       $t0, $t5
    ctx->pc = 0x122af4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122af8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x122af8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122afc: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x122afcu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x122b00: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x122b04: 0x1455026  xor         $t2, $t2, $a1
    ctx->pc = 0x122b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 5));
    // 0x122b08: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x122b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x122b0c: 0xa502b  sltu        $t2, $zero, $t2
    ctx->pc = 0x122b0cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x122b10: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x122b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x122b14: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x122b14u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x122b18: 0x20582d  daddu       $t3, $at, $zero
    ctx->pc = 0x122b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b1c: 0x1c60019  multu       $t6, $a2
    ctx->pc = 0x122b1cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 14) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122b20: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x122b20u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x122b24: 0x20782d  daddu       $t7, $at, $zero
    ctx->pc = 0x122b24u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b28: 0x1cd0019  multu       $t6, $t5
    ctx->pc = 0x122b28u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 14) * (uint64_t)GPR_U32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122b2c: 0x16f782d  daddu       $t7, $t3, $t7
    ctx->pc = 0x122b2cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 15));
    // 0x122b30: 0x1eb602b  sltu        $t4, $t7, $t3
    ctx->pc = 0x122b30u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x122b34: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x122b38: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x122b38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x122b3c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x122b3cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x122b40: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x122b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x122b44: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x122b44u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x122b48: 0x20702d  daddu       $t6, $at, $zero
    ctx->pc = 0x122b48u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b4c: 0x1060019  multu       $t0, $a2
    ctx->pc = 0x122b4cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122b50: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x122b50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x122b54: 0x1cb682d  daddu       $t5, $t6, $t3
    ctx->pc = 0x122b54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 11));
    // 0x122b58: 0x1ae702b  sltu        $t6, $t5, $t6
    ctx->pc = 0x122b58u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x122b5c: 0x18e602d  daddu       $t4, $t4, $t6
    ctx->pc = 0x122b5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 14));
    // 0x122b60: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x122b60u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x122b64: 0x20402d  daddu       $t0, $at, $zero
    ctx->pc = 0x122b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b68: 0x1e8782d  daddu       $t7, $t7, $t0
    ctx->pc = 0x122b68u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 8));
    // 0x122b6c: 0x18f602d  daddu       $t4, $t4, $t7
    ctx->pc = 0x122b6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 15));
    // 0x122b70: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x122b70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x122b74: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x122b74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x122b78: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x122b78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x122b7c: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x122B7Cu;
    {
        const bool branch_taken_0x122b7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B7Cu;
        // 0x122b80: 0xac4a0004  sw          $t2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b7c) {
            ctx->pc = 0x122BC8u;
            goto label_122bc8;
        }
    }
    ctx->pc = 0x122B84u;
    // 0x122b84: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x122b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122b88: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x122b88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x122b8c: 0x94ffc  dsll32      $t1, $t1, 31
    ctx->pc = 0x122b8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 31));
    // 0x122b90: 0xa50fa  dsrl        $t2, $t2, 3
    ctx->pc = 0x122b90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 3);
    // 0x122b94: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x122b94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122b98:
    // 0x122b98: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x122b98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x122b9c: 0xc607a  dsrl        $t4, $t4, 1
    ctx->pc = 0x122b9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 1);
    // 0x122ba0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x122ba0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122ba4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x122ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x122ba8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x122ba8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x122bac: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x122bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x122bb0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x122BB0u;
    {
        const bool branch_taken_0x122bb0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BB0u;
        // 0x122bb4: 0x14c582b  sltu        $t3, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bb0) {
            ctx->pc = 0x122BC0u;
            goto label_122bc0;
        }
    }
    ctx->pc = 0x122BB8u;
    // 0x122bb8: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x122bb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x122bbc: 0x1a96825  or          $t5, $t5, $t1
    ctx->pc = 0x122bbcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
label_122bc0:
    // 0x122bc0: 0x5560fff5  bnel        $t3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x122BC0u;
    {
        const bool branch_taken_0x122bc0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x122bc0) {
            ctx->pc = 0x122BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122BC0u;
            // 0x122bc4: 0x8c4f0008  lw          $t7, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122b98;
        }
    }
    ctx->pc = 0x122BC8u;
label_122bc8:
    // 0x122bc8: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x122bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x122bcc: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x122bccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x122bd0: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x122bd0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x122bd4: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x122BD4u;
    {
        const bool branch_taken_0x122bd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BD4u;
        // 0x122bd8: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bd4) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122BDCu;
    // 0x122bdc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x122bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122be0: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x122be0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122be4: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x122be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x122be8: 0x94ffc  dsll32      $t1, $t1, 31
    ctx->pc = 0x122be8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 31));
    // 0x122bec: 0xa513a  dsrl        $t2, $t2, 4
    ctx->pc = 0x122becu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 4);
label_122bf0:
    // 0x122bf0: 0xc6078  dsll        $t4, $t4, 1
    ctx->pc = 0x122bf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 1);
    // 0x122bf4: 0x1a97024  and         $t6, $t5, $t1
    ctx->pc = 0x122bf4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 9));
    // 0x122bf8: 0x358f0001  ori         $t7, $t4, 0x1
    ctx->pc = 0x122bf8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x122bfc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x122bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x122c00: 0x1ee600b  movn        $t4, $t7, $t6
    ctx->pc = 0x122c00u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
    // 0x122c04: 0x14c782b  sltu        $t7, $t2, $t4
    ctx->pc = 0x122c04u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x122c08: 0x11e0fff9  beqz        $t7, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122C08u;
    {
        const bool branch_taken_0x122c08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C08u;
        // 0x122c0c: 0xd6878  dsll        $t5, $t5, 1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c08) {
            ctx->pc = 0x122BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122bf0;
        }
    }
    ctx->pc = 0x122C10u;
    // 0x122c10: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x122c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x122c14: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x122c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_122c18:
    // 0x122c18: 0xfc4c0010  sd          $t4, 0x10($v0)
    ctx->pc = 0x122c18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 12));
    // 0x122c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x122C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C1Cu;
        // 0x122c20: 0xac4f0000  sw          $t7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122C24u;
    // 0x122c24: 0x0  nop
    ctx->pc = 0x122c24u;
    // NOP
}
