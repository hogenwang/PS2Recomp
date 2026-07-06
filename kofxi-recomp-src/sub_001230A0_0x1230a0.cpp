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

// Function: sub_001230A0
// Address: 0x1230a0 - 0x123140
void sub_001230A0_0x1230a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001230A0_0x1230a0");
#endif

    switch (ctx->pc) {
        case 0x1230b8u: goto label_1230b8;
        case 0x123118u: goto label_123118;
        default: break;
    }

    ctx->pc = 0x1230a0u;

    // 0x1230a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1230a4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1230a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1230a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1230a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1230acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1230b0: 0xc048998  jal         func_122660
    ctx->pc = 0x1230B0u;
    SET_GPR_U32(ctx, 31, 0x1230B8u);
    ctx->pc = 0x1230B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230B0u;
    // 0x1230b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x1230B0u, 0x1230B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230B8u;
label_1230b8:
    // 0x1230b8: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x1230b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1230bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1230bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230c0: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x1230c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x1230c4: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x1230C4u;
    {
        const bool branch_taken_0x1230c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230C4u;
        // 0x1230c8: 0x2dac0002  sltiu       $t4, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230c4) {
            ctx->pc = 0x123120u;
            goto label_123120;
        }
    }
    ctx->pc = 0x1230CCu;
    // 0x1230cc: 0x15800015  bnez        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1230CCu;
    {
        const bool branch_taken_0x1230cc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230CCu;
        // 0x1230d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230cc) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x1230D4u;
    // 0x1230d4: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1230d8: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1230D8u;
    {
        const bool branch_taken_0x1230d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1230DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230D8u;
        // 0x1230dc: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230d8) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x1230E0u;
    // 0x1230e0: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1230E0u;
    {
        const bool branch_taken_0x1230e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230E0u;
        // 0x1230e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e0) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x1230E8u;
    // 0x1230e8: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x1230e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1230ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1230ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f0: 0x5a0000c  bltz        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x1230F0u;
    {
        const bool branch_taken_0x1230f0 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x1230F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F0u;
        // 0x1230f4: 0x29af0020  slti        $t7, $t5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230f0) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x1230F8u;
    // 0x1230f8: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1230F8u;
    {
        const bool branch_taken_0x1230f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F8u;
        // 0x1230fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230f8) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x123100u;
    // 0x123100: 0x29af003d  slti        $t7, $t5, 0x3D
    ctx->pc = 0x123100u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x123104: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x123104u;
    {
        const bool branch_taken_0x123104 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123104u;
        // 0x123108: 0x240e003c  addiu       $t6, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123104) {
            ctx->pc = 0x12312Cu;
            goto label_12312c;
        }
    }
    ctx->pc = 0x12310Cu;
    // 0x12310c: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123110: 0x25aeffc4  addiu       $t6, $t5, -0x3C
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967236));
    // 0x123114: 0x1cf7814  dsllv       $t7, $t7, $t6
    ctx->pc = 0x123114u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 14) & 0x3F));
label_123118:
    // 0x123118: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x123118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12311c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12311cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_123120:
    // 0x123120: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123124:
    // 0x123124: 0x3e00008  jr          $ra
    ctx->pc = 0x123124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123124u;
        // 0x123128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12312Cu;
label_12312c:
    // 0x12312c: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12312cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123130: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x123134: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x123134u;
    {
        const bool branch_taken_0x123134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123134u;
        // 0x123138: 0x1cf7816  dsrlv       $t7, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 14) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123134) {
            ctx->pc = 0x123118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123118;
        }
    }
    ctx->pc = 0x12313Cu;
    // 0x12313c: 0x0  nop
    ctx->pc = 0x12313cu;
    // NOP
}
