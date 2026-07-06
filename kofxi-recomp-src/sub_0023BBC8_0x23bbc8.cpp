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

// Function: sub_0023BBC8
// Address: 0x23bbc8 - 0x23bcb8
void sub_0023BBC8_0x23bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BBC8_0x23bbc8");
#endif

    switch (ctx->pc) {
        case 0x23bc0cu: goto label_23bc0c;
        default: break;
    }

    ctx->pc = 0x23bbc8u;

    // 0x23bbc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23bbcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23bbd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23bbd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23bbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bbdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23bbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x23bbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23bbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bbf0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23bbf4: 0xac510164  sw          $s1, 0x164($v0)
    ctx->pc = 0x23bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 17));
    // 0x23bbf8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x23bbf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23bbfc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23bc00: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x23bc04: 0xc08a08c  jal         func_228230
    ctx->pc = 0x23BC04u;
    SET_GPR_U32(ctx, 31, 0x23BC0Cu);
    ctx->pc = 0x23BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC04u;
    // 0x23bc08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23BC04u, 0x23BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC0Cu;
label_23bc0c:
    // 0x23bc0c: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x23bc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23bc10: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23BC10u;
    {
        const bool branch_taken_0x23bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC10u;
        // 0x23bc14: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc10) {
            ctx->pc = 0x23BCA0u;
            goto label_23bca0;
        }
    }
    ctx->pc = 0x23BC18u;
    // 0x23bc18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23bc1c: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
    // 0x23bc20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bc24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bc28: 0x800008  jr          $a0
    ctx->pc = 0x23BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCA0u: goto label_23bca0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BC30u;
label_23bc30:
    // 0x23bc30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23bc34: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
    // 0x23bc38: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BC38u;
    {
        const bool branch_taken_0x23bc38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC38u;
        // 0x23bc3c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc38) {
            ctx->pc = 0x23BC4Cu;
            goto label_23bc4c;
        }
    }
    ctx->pc = 0x23BC40u;
    // 0x23bc40: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
    // 0x23bc44: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BC44u;
    {
        const bool branch_taken_0x23bc44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC44u;
        // 0x23bc48: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc44) {
            ctx->pc = 0x23BC54u;
            goto label_23bc54;
        }
    }
    ctx->pc = 0x23BC4Cu;
label_23bc4c:
    // 0x23bc4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23BC4Cu;
    {
        const bool branch_taken_0x23bc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC4Cu;
        // 0x23bc50: 0x8e4502d0  lw          $a1, 0x2D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc4c) {
            ctx->pc = 0x23BC70u;
            goto label_23bc70;
        }
    }
    ctx->pc = 0x23BC54u;
label_23bc54:
    // 0x23bc54: 0x24425138  addiu       $v0, $v0, 0x5138
    ctx->pc = 0x23bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20792));
    // 0x23bc58: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BC58u;
    {
        const bool branch_taken_0x23bc58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC58u;
        // 0x23bc5c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc58) {
            ctx->pc = 0x23BC6Cu;
            goto label_23bc6c;
        }
    }
    ctx->pc = 0x23BC60u;
    // 0x23bc60: 0x24425180  addiu       $v0, $v0, 0x5180
    ctx->pc = 0x23bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
    // 0x23bc64: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23BC64u;
    {
        const bool branch_taken_0x23bc64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bc64) {
            ctx->pc = 0x23BC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BC64u;
            // 0x23bc68: 0x8e4502a4  lw          $a1, 0x2A4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BC70u;
            goto label_23bc70;
        }
    }
    ctx->pc = 0x23BC6Cu;
label_23bc6c:
    // 0x23bc6c: 0x8e454240  lw          $a1, 0x4240($s2)
    ctx->pc = 0x23bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16960)));
label_23bc70:
    // 0x23bc70: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x23bc70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23bc74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23bc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc78: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x23bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23bc7c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23bc80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bc84: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x23bc88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23bc88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bc8c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x23bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x23bc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23bc94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bc98: 0x808a058  j           func_228160
    ctx->pc = 0x23BC98u;
    ctx->pc = 0x23BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC98u;
    // 0x23bc9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    sub_00228160_0x228160(rdram, ctx, runtime); return;
    ctx->pc = 0x23BCA0u;
label_23bca0:
    // 0x23bca0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23bca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23bca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB0u;
        // 0x23bcb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCB8u;
}
