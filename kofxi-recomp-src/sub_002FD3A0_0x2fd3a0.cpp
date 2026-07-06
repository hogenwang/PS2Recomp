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

// Function: sub_002FD3A0
// Address: 0x2fd3a0 - 0x2fd4a0
void sub_002FD3A0_0x2fd3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD3A0_0x2fd3a0");
#endif

    switch (ctx->pc) {
        case 0x2fd3b0u: goto label_2fd3b0;
        case 0x2fd3b8u: goto label_2fd3b8;
        default: break;
    }

    ctx->pc = 0x2fd3a0u;

    // 0x2fd3a0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2fd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fd3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3a8: 0x340aa565  ori         $t2, $zero, 0xA565
    ctx->pc = 0x2fd3a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42341);
    // 0x2fd3ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2fd3acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3b0:
    // 0x2fd3b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fd3b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3b4: 0x0  nop
    ctx->pc = 0x2fd3b4u;
    // NOP
label_2fd3b8:
    // 0x2fd3b8: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x2fd3b8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd3bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2fd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2fd3c0: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x2fd3c0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2fd3c4: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x2fd3c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2fd3c8: 0x6a302a  slt         $a2, $v1, $t2
    ctx->pc = 0x2fd3c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2fd3cc: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x2fd3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2fd3d0: 0x904c0003  lbu         $t4, 0x3($v0)
    ctx->pc = 0x2fd3d0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2fd3d4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2fd3d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd3d8: 0x904b0004  lbu         $t3, 0x4($v0)
    ctx->pc = 0x2fd3d8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fd3dc: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2fd3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fd3e0: 0x310d00ff  andi        $t5, $t0, 0xFF
    ctx->pc = 0x2fd3e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2fd3e4: 0x90490005  lbu         $t1, 0x5($v0)
    ctx->pc = 0x2fd3e4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2fd3e8: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x2fd3e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2fd3ec: 0x90480006  lbu         $t0, 0x6($v0)
    ctx->pc = 0x2fd3ecu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2fd3f0: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x2fd3f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x2fd3f4: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x2fd3f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x2fd3f8: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x2fd3f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x2fd3fc: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x2fd3fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x2fd400: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x2fd400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2fd404: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2fd404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2fd408: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x2fd408u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x2fd40c: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x2fd40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2fd410: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2fd410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd414: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2fd414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fd418: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2fd418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2fd41c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2fd41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fd420: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2FD420u;
    {
        const bool branch_taken_0x2fd420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD420u;
        // 0x2fd424: 0x30eb00ff  andi        $t3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd420) {
            ctx->pc = 0x2FD3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd3b8;
        }
    }
    ctx->pc = 0x2FD428u;
    // 0x2fd428: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2fd428u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd42c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2fd42cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd430: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2fd430u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2fd434: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x2fd434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2fd438: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x2fd438u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2fd43c: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x2fd43cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fd440: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2fd440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fd444: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2fd444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2fd448: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x2fd448u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2fd44c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2fd44cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd450: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x2fd450u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fd454: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2fd454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fd458: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2fd458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2fd45c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2fd45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fd460: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2fd460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fd464: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2fd464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2fd468: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2fd468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2fd46c: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD46Cu;
    {
        const bool branch_taken_0x2fd46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2FD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD46Cu;
        // 0x2fd470: 0x24420005  addiu       $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd46c) {
            ctx->pc = 0x2FD47Cu;
            goto label_2fd47c;
        }
    }
    ctx->pc = 0x2FD474u;
    // 0x2fd474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD474u;
    {
        const bool branch_taken_0x2fd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD474u;
        // 0x2fd478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd474) {
            ctx->pc = 0x2FD490u;
            goto label_2fd490;
        }
    }
    ctx->pc = 0x2FD47Cu;
label_2fd47c:
    // 0x2fd47c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd480: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2fd480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fd484: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2FD484u;
    {
        const bool branch_taken_0x2fd484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd484) {
            ctx->pc = 0x2FD488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD484u;
            // 0x2fd488: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd3b0;
        }
    }
    ctx->pc = 0x2FD48Cu;
    // 0x2fd48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd490:
    // 0x2fd490: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD498u;
    // 0x2fd498: 0x0  nop
    ctx->pc = 0x2fd498u;
    // NOP
    // 0x2fd49c: 0x0  nop
    ctx->pc = 0x2fd49cu;
    // NOP
    if (ctx->pc == 0x2fd49cu) { ctx->pc = 0x2fd4a0u; }
}
