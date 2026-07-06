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

// Function: sub_001DEC10
// Address: 0x1dec10 - 0x1decd0
void sub_001DEC10_0x1dec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC10_0x1dec10");
#endif

    switch (ctx->pc) {
        case 0x1decacu: goto label_1decac;
        default: break;
    }

    ctx->pc = 0x1dec10u;

    // 0x1dec10: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dec14: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEC14u;
    {
        const bool branch_taken_0x1dec14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC14u;
        // 0x1dec18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec14) {
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC1Cu;
    // 0x1dec1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dec20: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DEC20u;
    {
        const bool branch_taken_0x1dec20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dec20) {
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC28u;
    // 0x1dec28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec2c: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEC2Cu;
    {
        const bool branch_taken_0x1dec2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dec2c) {
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC34u;
    // 0x1dec34: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1dec34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dec38: 0x24022ee0  addiu       $v0, $zero, 0x2EE0
    ctx->pc = 0x1dec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    // 0x1dec3c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEC3Cu;
    {
        const bool branch_taken_0x1dec3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC3Cu;
        // 0x1dec40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec3c) {
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC44u;
    // 0x1dec44: 0x28822ee1  slti        $v0, $a0, 0x2EE1
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12001) ? 1 : 0);
    // 0x1dec48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEC48u;
    {
        const bool branch_taken_0x1dec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC48u;
        // 0x1dec4c: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec48) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DEC50u;
    // 0x1dec50: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DEC50u;
    {
        const bool branch_taken_0x1dec50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec50) {
            ctx->pc = 0x1DEC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEC50u;
            // 0x1dec54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC58u;
    // 0x1dec58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEC58u;
    {
        const bool branch_taken_0x1dec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC58u;
        // 0x1dec5c: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec58) {
            ctx->pc = 0x1DEC6Cu;
            goto label_1dec6c;
        }
    }
    ctx->pc = 0x1DEC60u;
label_1dec60:
    // 0x1dec60: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEC60u;
    {
        const bool branch_taken_0x1dec60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC60u;
        // 0x1dec64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec60) {
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC68u;
    // 0x1dec68: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1dec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1dec6c:
    // 0x1dec6c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEC6Cu;
    {
        const bool branch_taken_0x1dec6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dec6c) {
            ctx->pc = 0x1DEC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEC6Cu;
            // 0x1dec70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC80u;
            goto label_1dec80;
        }
    }
    ctx->pc = 0x1DEC74u;
    // 0x1dec74: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC74u;
        // 0x1dec78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC7Cu;
    // 0x1dec7c: 0x0  nop
    ctx->pc = 0x1dec7cu;
    // NOP
label_1dec80:
    // 0x1dec80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC88u;
    // 0x1dec88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dec8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dec90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dec90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dec98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dec98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1deca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1deca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1deca4: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1DECA4u;
    SET_GPR_U32(ctx, 31, 0x1DECACu);
    ctx->pc = 0x1DECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DECA4u;
    // 0x1deca8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1DECA4u, 0x1DECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DECACu;
label_1decac:
    // 0x1decac: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1decacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x1decb0: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x1decb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x1decb4: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x1decb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x1decb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1decb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1decbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1decbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1decc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1decc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1decc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1decc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1decc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECC8u;
        // 0x1deccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DECD0u;
}
