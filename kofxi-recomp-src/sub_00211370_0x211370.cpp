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

// Function: sub_00211370
// Address: 0x211370 - 0x211480
void sub_00211370_0x211370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211370_0x211370");
#endif

    switch (ctx->pc) {
        case 0x211380u: goto label_211380;
        case 0x2113b8u: goto label_2113b8;
        case 0x2113f0u: goto label_2113f0;
        case 0x211430u: goto label_211430;
        default: break;
    }

    ctx->pc = 0x211370u;

    // 0x211370: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x211374: 0x11c00040  beqz        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x211374u;
    {
        const bool branch_taken_0x211374 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x211378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211374u;
        // 0x211378: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211374) {
            ctx->pc = 0x211478u;
            goto label_211478;
        }
    }
    ctx->pc = 0x21137Cu;
    // 0x21137c: 0x1ee6023  subu        $t4, $t7, $t6
    ctx->pc = 0x21137cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_211380:
    // 0x211380: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211380u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211384: 0xcc5021  addu        $t2, $a2, $t4
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x211388: 0x8dedab58  lw          $t5, -0x54A8($t7)
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945624)));
    // 0x21138c: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21138cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x211390: 0x11e00037  beqz        $t7, . + 4 + (0x37 << 2)
    ctx->pc = 0x211390u;
    {
        const bool branch_taken_0x211390 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x211394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211390u;
        // 0x211394: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211390) {
            ctx->pc = 0x211470u;
            goto label_211470;
        }
    }
    ctx->pc = 0x211398u;
    // 0x211398: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x211398u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21139c: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x21139cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x2113a0: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2113a0u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2113a4: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2113a4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x2113a8: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x2113a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2113ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2113acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2113b0: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x2113b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2113b4: 0x1cf6823  subu        $t5, $t6, $t7
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_2113b8:
    // 0x2113b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2113bc: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2113c0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2113c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2113c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2113c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2113c8: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2113cc: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x2113ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2113d0: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x2113d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2113d4: 0x15e00024  bnez        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x2113D4u;
    {
        const bool branch_taken_0x2113d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D4u;
        // 0x2113d8: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113d4) {
            ctx->pc = 0x211468u;
            goto label_211468;
        }
    }
    ctx->pc = 0x2113DCu;
    // 0x2113dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2113dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2113e0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2113e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2113e4: 0x50cf000c  beql        $a2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2113E4u;
    {
        const bool branch_taken_0x2113e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        if (branch_taken_0x2113e4) {
            ctx->pc = 0x2113E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2113E4u;
            // 0x2113e8: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211418u;
            goto label_211418;
        }
    }
    ctx->pc = 0x2113ECu;
    // 0x2113ec: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2113ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2113f0:
    // 0x2113f0: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2113f4: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2113f8: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x2113f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x2113fc: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x2113fcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211400: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x211404: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x211404u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x211408: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x21140c: 0x14cbfff8  bne         $a2, $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21140Cu;
    {
        const bool branch_taken_0x21140c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x211410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21140Cu;
        // 0x211410: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21140c) {
            ctx->pc = 0x2113F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2113f0;
        }
    }
    ctx->pc = 0x211414u;
    // 0x211414: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211418:
    // 0x211418: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211418u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x21141c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211420: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x211420u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x211424: 0x118e0009  beq         $t4, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x211424u;
    {
        const bool branch_taken_0x211424 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 14));
        ctx->pc = 0x211428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211424u;
        // 0x211428: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211424) {
            ctx->pc = 0x21144Cu;
            goto label_21144c;
        }
    }
    ctx->pc = 0x21142Cu;
    // 0x21142c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21142cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211430:
    // 0x211430: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211434: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211434u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211438: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x211438u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21143c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21143cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x211440: 0x0  nop
    ctx->pc = 0x211440u;
    // NOP
    // 0x211444: 0x158dfffa  bne         $t4, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211444u;
    {
        const bool branch_taken_0x211444 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x211448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211444u;
        // 0x211448: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211444) {
            ctx->pc = 0x211430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211430;
        }
    }
    ctx->pc = 0x21144Cu;
label_21144c:
    // 0x21144c: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x21144cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x211450: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x211450u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211454: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x211454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211458: 0x1ea7823  subu        $t7, $t7, $t2
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x21145c: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x21145cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x211460: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211464: 0xadeeab60  sw          $t6, -0x54A0($t7)
    ctx->pc = 0x211464u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 14));
label_211468:
    // 0x211468: 0x3e00008  jr          $ra
    ctx->pc = 0x211468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211470u;
label_211470:
    // 0x211470: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x211470u;
    {
        const bool branch_taken_0x211470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211470u;
        // 0x211474: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211470) {
            ctx->pc = 0x2113B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2113b8;
        }
    }
    ctx->pc = 0x211478u;
label_211478:
    // 0x211478: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x211478u;
    {
        const bool branch_taken_0x211478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211478u;
        // 0x21147c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211478) {
            ctx->pc = 0x211380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211380;
        }
    }
    ctx->pc = 0x211480u;
}
