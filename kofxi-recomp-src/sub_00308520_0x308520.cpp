#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308520
// Address: 0x308520 - 0x308670
void sub_00308520_0x308520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308520_0x308520");
#endif

    switch (ctx->pc) {
        case 0x308530u: goto label_308530;
        case 0x308580u: goto label_308580;
        case 0x30860cu: goto label_30860c;
        default: break;
    }

    ctx->pc = 0x308520u;

    // 0x308520: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x308520u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x308524: 0x3143000f  andi        $v1, $t2, 0xF
    ctx->pc = 0x308524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x308528: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x308528u;
    {
        const bool branch_taken_0x308528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308528) {
            ctx->pc = 0x308550u;
            goto label_308550;
        }
    }
    ctx->pc = 0x308530u;
label_308530:
    // 0x308530: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x308530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x308534: 0x3143000f  andi        $v1, $t2, 0xF
    ctx->pc = 0x308534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x308538: 0x0  nop
    ctx->pc = 0x308538u;
    // NOP
    // 0x30853c: 0x0  nop
    ctx->pc = 0x30853cu;
    // NOP
    // 0x308540: 0x0  nop
    ctx->pc = 0x308540u;
    // NOP
    // 0x308544: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308544u;
    {
        const bool branch_taken_0x308544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308544) {
            ctx->pc = 0x308530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308530;
        }
    }
    ctx->pc = 0x30854Cu;
    // 0x30854c: 0x0  nop
    ctx->pc = 0x30854cu;
    // NOP
label_308550:
    // 0x308550: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308554: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x308554u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x308558: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x308558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x30855c: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x308560: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x308560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308564: 0xac6a3ba0  sw          $t2, 0x3BA0($v1)
    ctx->pc = 0x308564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15264), GPR_U32(ctx, 10));
    // 0x308568: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x308568u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30856c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x30856cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x308570: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x308570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x308574: 0x25083aa0  addiu       $t0, $t0, 0x3AA0
    ctx->pc = 0x308574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15008));
    // 0x308578: 0x24e73a20  addiu       $a3, $a3, 0x3A20
    ctx->pc = 0x308578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14880));
    // 0x30857c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_308580:
    // 0x308580: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x308580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x308584: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x308584u;
    {
        const bool branch_taken_0x308584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308584) {
            ctx->pc = 0x3085D0u;
            goto label_3085d0;
        }
    }
    ctx->pc = 0x30858Cu;
    // 0x30858c: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x30858cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x308590: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x308590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x308594: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x308594u;
    {
        const bool branch_taken_0x308594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x308594) {
            ctx->pc = 0x3085A8u;
            goto label_3085a8;
        }
    }
    ctx->pc = 0x30859Cu;
    // 0x30859c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30859Cu;
    {
        const bool branch_taken_0x30859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30859Cu;
            // 0x3085a0: 0x254a0400  addiu       $t2, $t2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30859c) {
            ctx->pc = 0x3085B0u;
            goto label_3085b0;
        }
    }
    ctx->pc = 0x3085A4u;
    // 0x3085a4: 0x0  nop
    ctx->pc = 0x3085a4u;
    // NOP
label_3085a8:
    // 0x3085a8: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x3085a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x3085ac: 0x0  nop
    ctx->pc = 0x3085acu;
    // NOP
label_3085b0:
    // 0x3085b0: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x3085b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x3085b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3085b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3085b8: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3085B8u;
    {
        const bool branch_taken_0x3085b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3085b8) {
            ctx->pc = 0x3085C8u;
            goto label_3085c8;
        }
    }
    ctx->pc = 0x3085C0u;
    // 0x3085c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3085C0u;
    {
        const bool branch_taken_0x3085c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085C0u;
            // 0x3085c4: 0x254a0400  addiu       $t2, $t2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085c0) {
            ctx->pc = 0x3085D8u;
            goto label_3085d8;
        }
    }
    ctx->pc = 0x3085C8u;
label_3085c8:
    // 0x3085c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3085C8u;
    {
        const bool branch_taken_0x3085c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085C8u;
            // 0x3085cc: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085c8) {
            ctx->pc = 0x3085D8u;
            goto label_3085d8;
        }
    }
    ctx->pc = 0x3085D0u;
label_3085d0:
    // 0x3085d0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3085d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3085d4: 0x0  nop
    ctx->pc = 0x3085d4u;
    // NOP
label_3085d8:
    // 0x3085d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3085dc: 0x2d630020  sltiu       $v1, $t3, 0x20
    ctx->pc = 0x3085dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3085e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3085e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3085e4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3085e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3085e8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3085E8u;
    {
        const bool branch_taken_0x3085e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3085ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085E8u;
            // 0x3085ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085e8) {
            ctx->pc = 0x308580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308580;
        }
    }
    ctx->pc = 0x3085F0u;
    // 0x3085f0: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x3085f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3085f4: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x3085f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x3085f8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x3085f8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x3085fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3085fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308600: 0x25083b20  addiu       $t0, $t0, 0x3B20
    ctx->pc = 0x308600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15136));
    // 0x308604: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x308604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308608: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_30860c:
    // 0x30860c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x30860cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x308610: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x308610u;
    {
        const bool branch_taken_0x308610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308610) {
            ctx->pc = 0x308640u;
            goto label_308640;
        }
    }
    ctx->pc = 0x308618u;
    // 0x308618: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x308618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x30861c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x30861cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x308620: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x308620u;
    {
        const bool branch_taken_0x308620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x308620) {
            ctx->pc = 0x308630u;
            goto label_308630;
        }
    }
    ctx->pc = 0x308628u;
    // 0x308628: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x308628u;
    {
        const bool branch_taken_0x308628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308628u;
            // 0x30862c: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308628) {
            ctx->pc = 0x308648u;
            goto label_308648;
        }
    }
    ctx->pc = 0x308630u;
label_308630:
    // 0x308630: 0x25437fff  addiu       $v1, $t2, 0x7FFF
    ctx->pc = 0x308630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 32767));
    // 0x308634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x308634u;
    {
        const bool branch_taken_0x308634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308634u;
            // 0x308638: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308634) {
            ctx->pc = 0x308648u;
            goto label_308648;
        }
    }
    ctx->pc = 0x30863Cu;
    // 0x30863c: 0x0  nop
    ctx->pc = 0x30863cu;
    // NOP
label_308640:
    // 0x308640: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x308640u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x308644: 0x0  nop
    ctx->pc = 0x308644u;
    // NOP
label_308648:
    // 0x308648: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x308648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30864c: 0x2ce30020  sltiu       $v1, $a3, 0x20
    ctx->pc = 0x30864cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x308650: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x308650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x308654: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x308654u;
    {
        const bool branch_taken_0x308654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308654u;
            // 0x308658: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308654) {
            ctx->pc = 0x30860Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30860c;
        }
    }
    ctx->pc = 0x30865Cu;
    // 0x30865c: 0x3e00008  jr          $ra
    ctx->pc = 0x30865Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30865Cu;
            // 0x308660: 0xac8a0000  sw          $t2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308664u;
    // 0x308664: 0x0  nop
    ctx->pc = 0x308664u;
    // NOP
    // 0x308668: 0x0  nop
    ctx->pc = 0x308668u;
    // NOP
    // 0x30866c: 0x0  nop
    ctx->pc = 0x30866cu;
    // NOP
    ctx->pc = 0x308670u;
}
