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

// Function: sub_002FD2C0
// Address: 0x2fd2c0 - 0x2fd3a0
void sub_002FD2C0_0x2fd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD2C0_0x2fd2c0");
#endif

    switch (ctx->pc) {
        case 0x2fd2ccu: goto label_2fd2cc;
        case 0x2fd2d8u: goto label_2fd2d8;
        default: break;
    }

    ctx->pc = 0x2fd2c0u;

    // 0x2fd2c0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2fd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fd2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fd2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd2c8: 0x340ca565  ori         $t4, $zero, 0xA565
    ctx->pc = 0x2fd2c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42341);
label_2fd2cc:
    // 0x2fd2cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2fd2ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd2d4: 0x0  nop
    ctx->pc = 0x2fd2d4u;
    // NOP
label_2fd2d8:
    // 0x2fd2d8: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x2fd2d8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd2dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2fd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2fd2e0: 0x90690001  lbu         $t1, 0x1($v1)
    ctx->pc = 0x2fd2e0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2fd2e4: 0x90680002  lbu         $t0, 0x2($v1)
    ctx->pc = 0x2fd2e4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2fd2e8: 0xac382a  slt         $a3, $a1, $t4
    ctx->pc = 0x2fd2e8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2fd2ec: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2fd2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2fd2f0: 0x906d0003  lbu         $t5, 0x3($v1)
    ctx->pc = 0x2fd2f0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2fd2f4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2fd2f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2fd2f8: 0x906b0004  lbu         $t3, 0x4($v1)
    ctx->pc = 0x2fd2f8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd2fc: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2fd2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2fd300: 0x312e00ff  andi        $t6, $t1, 0xFF
    ctx->pc = 0x2fd300u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd304: 0x906a0005  lbu         $t2, 0x5($v1)
    ctx->pc = 0x2fd304u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x2fd308: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x2fd308u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x2fd30c: 0x90690006  lbu         $t1, 0x6($v1)
    ctx->pc = 0x2fd30cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2fd310: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x2fd310u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x2fd314: 0x90680007  lbu         $t0, 0x7($v1)
    ctx->pc = 0x2fd314u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x2fd318: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x2fd318u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2fd31c: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x2fd31cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x2fd320: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x2fd320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2fd324: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2fd324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2fd328: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x2fd328u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x2fd32c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2fd32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2fd330: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2fd330u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2fd334: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2fd334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2fd338: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2fd338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd33c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2fd33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fd340: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2FD340u;
    {
        const bool branch_taken_0x2fd340 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD340u;
        // 0x2fd344: 0x310b00ff  andi        $t3, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd340) {
            ctx->pc = 0x2FD2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd2d8;
        }
    }
    ctx->pc = 0x2FD348u;
    // 0x2fd348: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x2fd348u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd34c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fd34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fd350: 0x906a0001  lbu         $t2, 0x1($v1)
    ctx->pc = 0x2fd350u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2fd354: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x2fd354u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fd358: 0x90690002  lbu         $t1, 0x2($v1)
    ctx->pc = 0x2fd358u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2fd35c: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x2fd35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2fd360: 0x90680003  lbu         $t0, 0x3($v1)
    ctx->pc = 0x2fd360u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2fd364: 0x30eb00ff  andi        $t3, $a3, 0xFF
    ctx->pc = 0x2fd364u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fd368: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2fd36c: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x2fd36cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd370: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2fd370u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2fd374: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2fd374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2fd378: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2fd378u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2fd37c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2fd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2fd380: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x2fd380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2fd384: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2fd384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2fd388: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2fd388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fd38c: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x2fd38cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fd390: 0x14a0ffce  bnez        $a1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2FD390u;
    {
        const bool branch_taken_0x2fd390 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD390u;
        // 0x2fd394: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd390) {
            ctx->pc = 0x2FD2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd2cc;
        }
    }
    ctx->pc = 0x2FD398u;
    // 0x2fd398: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD3A0u;
}
