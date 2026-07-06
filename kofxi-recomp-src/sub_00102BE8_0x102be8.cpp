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

// Function: sub_00102BE8
// Address: 0x102be8 - 0x102d30
void sub_00102BE8_0x102be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102BE8_0x102be8");
#endif

    switch (ctx->pc) {
        case 0x102c14u: goto label_102c14;
        case 0x102c74u: goto label_102c74;
        case 0x102c94u: goto label_102c94;
        case 0x102c9cu: goto label_102c9c;
        default: break;
    }

    ctx->pc = 0x102be8u;

    // 0x102be8: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x102be8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
    // 0x102bec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x102becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x102bf0: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x102bf0u;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
    // 0x102bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x102BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102BFCu;
    // 0x102bfc: 0x0  nop
    ctx->pc = 0x102bfcu;
    // NOP
    // 0x102c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102c0c: 0xc040b4c  jal         func_102D30
    ctx->pc = 0x102C0Cu;
    SET_GPR_U32(ctx, 31, 0x102C14u);
    ctx->pc = 0x102C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C0Cu;
    // 0x102c10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D30u, 0x102C0Cu, 0x102C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C14u;
label_102c14:
    // 0x102c14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c18: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x102c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x102c1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x102C1Cu;
    {
        const bool branch_taken_0x102c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C1Cu;
        // 0x102c20: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c1c) {
            ctx->pc = 0x102C4Cu;
            goto label_102c4c;
        }
    }
    ctx->pc = 0x102C24u;
    // 0x102c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102c28: 0x24429f30  addiu       $v0, $v0, -0x60D0
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942512));
    // 0x102c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102c30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102c34: 0x800008  jr          $a0
    ctx->pc = 0x102C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102C3Cu: goto label_102c3c;
            case 0x102C48u: goto label_102c48;
            case 0x102C4Cu: goto label_102c4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x102C3Cu;
label_102c3c:
    // 0x102c3c: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x102c3cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
    // 0x102c40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x102c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x102c44: 0x48c2e000  ctc2.ni     $v0, $vi28
    ctx->pc = 0x102c44u;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
label_102c48:
    // 0x102c48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c4c:
    // 0x102c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x102c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102c58: 0x3e00008  jr          $ra
    ctx->pc = 0x102C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C58u;
        // 0x102c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C60u;
    // 0x102c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102c6c: 0xc040b4c  jal         func_102D30
    ctx->pc = 0x102C6Cu;
    SET_GPR_U32(ctx, 31, 0x102C74u);
    ctx->pc = 0x102C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C6Cu;
    // 0x102c70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D30u, 0x102C6Cu, 0x102C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C74u;
label_102c74:
    // 0x102c74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c78: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x102c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x102c7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102C7Cu;
    {
        const bool branch_taken_0x102c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C7Cu;
        // 0x102c80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c7c) {
            ctx->pc = 0x102CA0u;
            goto label_102ca0;
        }
    }
    ctx->pc = 0x102C84u;
    // 0x102c84: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x102C84u;
    {
        const bool branch_taken_0x102c84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x102C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C84u;
        // 0x102c88: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c84) {
            ctx->pc = 0x102CA4u;
            goto label_102ca4;
        }
    }
    ctx->pc = 0x102C8Cu;
    // 0x102c8c: 0xc040b60  jal         func_102D80
    ctx->pc = 0x102C8Cu;
    SET_GPR_U32(ctx, 31, 0x102C94u);
    ctx->pc = 0x102C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C8Cu;
    // 0x102c90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D80u, 0x102C8Cu, 0x102C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C94u;
label_102c94:
    // 0x102c94: 0xc040b5c  jal         func_102D70
    ctx->pc = 0x102C94u;
    SET_GPR_U32(ctx, 31, 0x102C9Cu);
    ctx->pc = 0x102C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C94u;
    // 0x102c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D70u, 0x102C94u, 0x102C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C9Cu;
label_102c9c:
    // 0x102c9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x102c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102ca0:
    // 0x102ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_102ca4:
    // 0x102ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x102CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA8u;
        // 0x102cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102CB0u;
    // 0x102cb0: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x102cb0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
    // 0x102cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102cb8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102CB8u;
    {
        const bool branch_taken_0x102cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x102cb8) {
            ctx->pc = 0x102CC8u;
            goto label_102cc8;
        }
    }
    ctx->pc = 0x102CC0u;
    // 0x102cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102CC0u;
    {
        const bool branch_taken_0x102cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CC0u;
        // 0x102cc4: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cc0) {
            ctx->pc = 0x102CD4u;
            goto label_102cd4;
        }
    }
    ctx->pc = 0x102CC8u;
label_102cc8:
    // 0x102cc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102ccc: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x102cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x102cd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x102cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_102cd4:
    // 0x102cd4: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x102cd4u;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
    // 0x102cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x102CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102CE0u;
    // 0x102ce0: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x102ce0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
    // 0x102ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ce8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102CE8u;
    {
        const bool branch_taken_0x102ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x102ce8) {
            ctx->pc = 0x102CF8u;
            goto label_102cf8;
        }
    }
    ctx->pc = 0x102CF0u;
    // 0x102cf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102CF0u;
    {
        const bool branch_taken_0x102cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF0u;
        // 0x102cf4: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cf0) {
            ctx->pc = 0x102D04u;
            goto label_102d04;
        }
    }
    ctx->pc = 0x102CF8u;
label_102cf8:
    // 0x102cf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102cfc: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x102cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x102d00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x102d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_102d04:
    // 0x102d04: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x102d04u;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
    // 0x102d08: 0x3e00008  jr          $ra
    ctx->pc = 0x102D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D10u;
    // 0x102d10: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x102d10u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
    // 0x102d14: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x102d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x102d18: 0x3e00008  jr          $ra
    ctx->pc = 0x102D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D18u;
        // 0x102d1c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D20u;
    // 0x102d20: 0x4842e000  cfc2.ni     $v0, $vi28
    ctx->pc = 0x102d20u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
    // 0x102d24: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x102d28: 0x3e00008  jr          $ra
    ctx->pc = 0x102D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D28u;
        // 0x102d2c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D30u;
}
