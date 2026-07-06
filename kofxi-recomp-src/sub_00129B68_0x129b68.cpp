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

// Function: sub_00129B68
// Address: 0x129b68 - 0x129c98
void sub_00129B68_0x129b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129B68_0x129b68");
#endif

    switch (ctx->pc) {
        case 0x129becu: goto label_129bec;
        case 0x129c3cu: goto label_129c3c;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c80u: goto label_129c80;
        default: break;
    }

    ctx->pc = 0x129b68u;

    // 0x129b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b74: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x129b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x129b78: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x129B78u;
    {
        const bool branch_taken_0x129b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B78u;
        // 0x129b7c: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b78) {
            ctx->pc = 0x129C5Cu;
            goto label_129c5c;
        }
    }
    ctx->pc = 0x129B80u;
    // 0x129b80: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x129b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x129b84: 0x3c030101  lui         $v1, 0x101
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)257 << 16));
    // 0x129b88: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x129b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x129b8c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x129b90: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x129b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x129b94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x129b98: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x129b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x129b9c: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x129b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x129ba0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129ba4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x129ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x129ba8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129bac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x129bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x129bb0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129bb4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x129BB4u;
    {
        const bool branch_taken_0x129bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB4u;
        // 0x129bb8: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bb4) {
            ctx->pc = 0x129C18u;
            goto label_129c18;
        }
    }
    ctx->pc = 0x129BBCu;
    // 0x129bbc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x129bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129bc0: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x129bc0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x129bc4: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x129bc4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x129bc8: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x129bc8u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x129bcc: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x129bccu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x129bd0: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x129bd0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x129bd4: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x129bd4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x129bd8: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x129bd8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x129bdc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x129bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129be0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x129BE0u;
    {
        const bool branch_taken_0x129be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE0u;
        // 0x129be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129be0) {
            ctx->pc = 0x129C5Cu;
            goto label_129c5c;
        }
    }
    ctx->pc = 0x129BE8u;
    // 0x129be8: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x129be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_129bec:
    // 0x129bec: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x129becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x129bf0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x129bf0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x129bf4: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x129bf4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x129bf8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x129bf8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129bfc: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x129bfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x129c00: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x129c00u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x129c04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129c08: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x129C08u;
    {
        const bool branch_taken_0x129c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c08) {
            ctx->pc = 0x129C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C08u;
            // 0x129c0c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129bec;
        }
    }
    ctx->pc = 0x129C10u;
    // 0x129c10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x129C10u;
    {
        const bool branch_taken_0x129c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C10u;
        // 0x129c14: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c10) {
            ctx->pc = 0x129C5Cu;
            goto label_129c5c;
        }
    }
    ctx->pc = 0x129C18u;
label_129c18:
    // 0x129c18: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x129c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c1c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c20: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x129c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x129c24: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x129c24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x129c28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x129c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x129c2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x129c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x129c30: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x129C30u;
    {
        const bool branch_taken_0x129c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C30u;
        // 0x129c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c30) {
            ctx->pc = 0x129C5Cu;
            goto label_129c5c;
        }
    }
    ctx->pc = 0x129C38u;
    // 0x129c38: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x129c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_129c3c:
    // 0x129c3c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x129c3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x129c40: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x129c40u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129c44: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x129c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x129c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x129c4c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x129c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x129c50: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129C50u;
    {
        const bool branch_taken_0x129c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c50) {
            ctx->pc = 0x129C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C50u;
            // 0x129c54: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129c3c;
        }
    }
    ctx->pc = 0x129C58u;
    // 0x129c58: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x129c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129c5c:
    // 0x129c5c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129c60: 0x0  nop
    ctx->pc = 0x129c60u;
    // NOP
    // 0x129c64: 0x0  nop
    ctx->pc = 0x129c64u;
    // NOP
    // 0x129c68: 0x0  nop
    ctx->pc = 0x129c68u;
    // NOP
    // 0x129c6c: 0x0  nop
    ctx->pc = 0x129c6cu;
    // NOP
    // 0x129c70: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129C70u;
    {
        const bool branch_taken_0x129c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c70) {
            ctx->pc = 0x129C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C70u;
            // 0x129c74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129c5c;
        }
    }
    ctx->pc = 0x129C78u;
    // 0x129c78: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x129C78u;
    SET_GPR_U32(ctx, 31, 0x129C80u);
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x129C78u, 0x129C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C80u;
label_129c80:
    // 0x129c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c84: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x129c84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x129C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C8Cu;
        // 0x129c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129C94u;
    // 0x129c94: 0x0  nop
    ctx->pc = 0x129c94u;
    // NOP
}
