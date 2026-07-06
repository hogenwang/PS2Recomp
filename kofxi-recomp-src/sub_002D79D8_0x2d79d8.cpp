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

// Function: sub_002D79D8
// Address: 0x2d79d8 - 0x2d7b30
void sub_002D79D8_0x2d79d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D79D8_0x2d79d8");
#endif

    switch (ctx->pc) {
        case 0x2d7a18u: goto label_2d7a18;
        case 0x2d7a44u: goto label_2d7a44;
        case 0x2d7a4cu: goto label_2d7a4c;
        case 0x2d7ad0u: goto label_2d7ad0;
        case 0x2d7b08u: goto label_2d7b08;
        case 0x2d7b10u: goto label_2d7b10;
        default: break;
    }

    ctx->pc = 0x2d79d8u;

    // 0x2d79d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d79dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d79dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d79e0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2d79e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d79e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d79e8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d79e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d79ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d79f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d79f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79f4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d79f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d79f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d79fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d7a00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d7a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a0c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d7a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d7a10: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7A10u;
    SET_GPR_U32(ctx, 31, 0x2D7A18u);
    ctx->pc = 0x2D7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A10u;
    // 0x2d7a14: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D7A10u, 0x2D7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A18u;
label_2d7a18:
    // 0x2d7a18: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7a1c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7a20: 0x24849710  addiu       $a0, $a0, -0x68F0
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940432));
    // 0x2d7a24: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7a28: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d7a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a34: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x2d7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x2d7a38: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x2d7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x2d7a3c: 0xc0b34de  jal         func_2CD378
    ctx->pc = 0x2D7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A44u);
    ctx->pc = 0x2D7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A3Cu;
    // 0x2d7a40: 0xafbd001c  sw          $sp, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD378u, 0x2D7A3Cu, 0x2D7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A44u;
label_2d7a44:
    // 0x2d7a44: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D7A44u;
    SET_GPR_U32(ctx, 31, 0x2D7A4Cu);
    ctx->pc = 0x2D7A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A44u;
    // 0x2d7a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7E0u, 0x2D7A44u, 0x2D7A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A4Cu;
label_2d7a4c:
    // 0x2d7a4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7A4Cu;
    {
        const bool branch_taken_0x2d7a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A4Cu;
        // 0x2d7a50: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a4c) {
            ctx->pc = 0x2D7A78u;
            goto label_2d7a78;
        }
    }
    ctx->pc = 0x2D7A54u;
    // 0x2d7a54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7a58: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7A58u;
    {
        const bool branch_taken_0x2d7a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a58) {
            ctx->pc = 0x2D7A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7A58u;
            // 0x2d7a5c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7A68u;
            goto label_2d7a68;
        }
    }
    ctx->pc = 0x2D7A60u;
    // 0x2d7a60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7A60u;
    {
        const bool branch_taken_0x2d7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A60u;
        // 0x2d7a64: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a60) {
            ctx->pc = 0x2D7A78u;
            goto label_2d7a78;
        }
    }
    ctx->pc = 0x2D7A68u;
label_2d7a68:
    // 0x2d7a68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d7a6c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2d7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2d7a70: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2d7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x2d7a74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d7a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7a78:
    // 0x2d7a78: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d7a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7a7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d7a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7a80: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d7a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d7a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7a88: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d7a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d7a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A8Cu;
        // 0x2d7a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7A94u;
    // 0x2d7a94: 0x0  nop
    ctx->pc = 0x2d7a94u;
    // NOP
    // 0x2d7a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d7a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d7a9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d7a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d7aa0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d7aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aa4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d7aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d7aa8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d7aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d7aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d7ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ab4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d7ab8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d7ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7abc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ac0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d7ac4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7ac8: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7AC8u;
    SET_GPR_U32(ctx, 31, 0x2D7AD0u);
    ctx->pc = 0x2D7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7AC8u;
    // 0x2d7acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D7AC8u, 0x2D7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AD0u;
label_2d7ad0:
    // 0x2d7ad0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d7ad4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d7ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7ad8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7adc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ae8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2d7ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aec: 0x24429868  addiu       $v0, $v0, -0x6798
    ctx->pc = 0x2d7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940776));
    // 0x2d7af0: 0x248497a0  addiu       $a0, $a0, -0x6860
    ctx->pc = 0x2d7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940576));
    // 0x2d7af4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2d7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x2d7af8: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x2d7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x2d7afc: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2d7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x2d7b00: 0xc0b34de  jal         func_2CD378
    ctx->pc = 0x2D7B00u;
    SET_GPR_U32(ctx, 31, 0x2D7B08u);
    ctx->pc = 0x2D7B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B00u;
    // 0x2d7b04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD378u, 0x2D7B00u, 0x2D7B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B08u;
label_2d7b08:
    // 0x2d7b08: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D7B08u;
    SET_GPR_U32(ctx, 31, 0x2D7B10u);
    ctx->pc = 0x2D7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B08u;
    // 0x2d7b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7E0u, 0x2D7B08u, 0x2D7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B10u;
label_2d7b10:
    // 0x2d7b10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d7b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7b14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d7b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d7b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7b1c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d7b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7b20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B24u;
        // 0x2d7b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B2Cu;
    // 0x2d7b2c: 0x0  nop
    ctx->pc = 0x2d7b2cu;
    // NOP
}
