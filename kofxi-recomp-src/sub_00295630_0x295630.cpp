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

// Function: sub_00295630
// Address: 0x295630 - 0x2957b8
void sub_00295630_0x295630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295630_0x295630");
#endif

    switch (ctx->pc) {
        case 0x295658u: goto label_295658;
        case 0x2956a0u: goto label_2956a0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956f8u: goto label_2956f8;
        default: break;
    }

    ctx->pc = 0x295630u;

    // 0x295630: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x295630u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x295634: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x295638: 0x25484cc8  addiu       $t0, $t2, 0x4CC8
    ctx->pc = 0x295638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 19656));
    // 0x29563c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295640: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x295640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x295644: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x295644u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295648: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x295648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29564c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29564Cu;
    {
        const bool branch_taken_0x29564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29564Cu;
        // 0x295650: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29564c) {
            ctx->pc = 0x295668u;
            goto label_295668;
        }
    }
    ctx->pc = 0x295654u;
    // 0x295654: 0x0  nop
    ctx->pc = 0x295654u;
    // NOP
label_295658:
    // 0x295658: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x295658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29565c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x29565cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x295660: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x295660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x295664: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x295664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_295668:
    // 0x295668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x295668u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29566c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29566Cu;
    {
        const bool branch_taken_0x29566c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x295670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29566Cu;
        // 0x295670: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29566c) {
            ctx->pc = 0x295680u;
            goto label_295680;
        }
    }
    ctx->pc = 0x295674u;
    // 0x295674: 0x5cc0fff8  bgtzl       $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x295674u;
    {
        const bool branch_taken_0x295674 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x295674) {
            ctx->pc = 0x295678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295674u;
            // 0x295678: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295658;
        }
    }
    ctx->pc = 0x29567Cu;
    // 0x29567c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x29567cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_295680:
    // 0x295680: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x295680u;
    {
        const bool branch_taken_0x295680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295680u;
        // 0x295684: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295680) {
            ctx->pc = 0x2956CCu;
            goto label_2956cc;
        }
    }
    ctx->pc = 0x295688u;
    // 0x295688: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x295688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29568c: 0x25484cc8  addiu       $t0, $t2, 0x4CC8
    ctx->pc = 0x29568cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 19656));
    // 0x295690: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x295690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x295694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295694u;
    {
        const bool branch_taken_0x295694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295694u;
        // 0x295698: 0x240400f3  addiu       $a0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295694) {
            ctx->pc = 0x2956B0u;
            goto label_2956b0;
        }
    }
    ctx->pc = 0x29569Cu;
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
label_2956a0:
    // 0x2956a0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2956a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2956a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2956A4u;
    {
        const bool branch_taken_0x2956a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2956A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956A4u;
        // 0x2956a8: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956a4) {
            ctx->pc = 0x2956C8u;
            goto label_2956c8;
        }
    }
    ctx->pc = 0x2956ACu;
    // 0x2956ac: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2956acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_2956b0:
    // 0x2956b0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2956b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2956b4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2956b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2956b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2956b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2956bc: 0x34420013  ori         $v0, $v0, 0x13
    ctx->pc = 0x2956bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    // 0x2956c0: 0x5044fff7  beql        $v0, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2956C0u;
    {
        const bool branch_taken_0x2956c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2956c0) {
            ctx->pc = 0x2956C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2956C0u;
            // 0x2956c4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2956A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956a0;
        }
    }
    ctx->pc = 0x2956C8u;
label_2956c8:
    // 0x2956c8: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x2956c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_2956cc:
    // 0x2956cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2956CCu;
    {
        const bool branch_taken_0x2956cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956cc) {
            ctx->pc = 0x2956DCu;
            goto label_2956dc;
        }
    }
    ctx->pc = 0x2956D4u;
label_2956d4:
    // 0x2956d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2956D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2956D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956D4u;
        // 0x2956d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2956DCu;
label_2956dc:
    // 0x2956dc: 0x18c00034  blez        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2956DCu;
    {
        const bool branch_taken_0x2956dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2956E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956DCu;
        // 0x2956e0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956dc) {
            ctx->pc = 0x2957B0u;
            goto label_2957b0;
        }
    }
    ctx->pc = 0x2956E4u;
    // 0x2956e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2956e8: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2956ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2956ECu;
    {
        const bool branch_taken_0x2956ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956ECu;
        // 0x2956f0: 0x244b4cc8  addiu       $t3, $v0, 0x4CC8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 19656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956ec) {
            ctx->pc = 0x2956FCu;
            goto label_2956fc;
        }
    }
    ctx->pc = 0x2956F4u;
    // 0x2956f4: 0x0  nop
    ctx->pc = 0x2956f4u;
    // NOP
label_2956f8:
    // 0x2956f8: 0x9107ffff  lbu         $a3, -0x1($t0)
    ctx->pc = 0x2956f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967295)));
label_2956fc:
    // 0x2956fc: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x2956fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x295700: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x295700u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x295704: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x295704u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x295708: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x295708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x29570c: 0x91050002  lbu         $a1, 0x2($t0)
    ctx->pc = 0x29570cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x295710: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x295710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x295714: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x295714u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295718: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x295718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x29571c: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x29571cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x295720: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x295720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x295724: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x295728: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x295728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x29572c: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x29572cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295730: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x295730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x295734: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x295734u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295738: 0x31420080  andi        $v0, $t2, 0x80
    ctx->pc = 0x295738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)128);
    // 0x29573c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x29573Cu;
    {
        const bool branch_taken_0x29573c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29573Cu;
        // 0x295740: 0x90a50000  lbu         $a1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29573c) {
            ctx->pc = 0x2956D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956d4;
        }
    }
    ctx->pc = 0x295744u;
    // 0x295744: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x295744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x295748: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x295748u;
    {
        const bool branch_taken_0x295748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295748u;
        // 0x29574c: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295748) {
            ctx->pc = 0x2956D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956d4;
        }
    }
    ctx->pc = 0x295750u;
    // 0x295750: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x295750u;
    {
        const bool branch_taken_0x295750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295750u;
        // 0x295754: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295750) {
            ctx->pc = 0x2956D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956d4;
        }
    }
    ctx->pc = 0x295758u;
    // 0x295758: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x295758u;
    {
        const bool branch_taken_0x295758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295758u;
        // 0x29575c: 0x411b8  dsll        $v0, $a0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295758) {
            ctx->pc = 0x2956D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956d4;
        }
    }
    ctx->pc = 0x295760u;
    // 0x295760: 0xa1cb8  dsll        $v1, $t2, 18
    ctx->pc = 0x295760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 18);
    // 0x295764: 0x72338  dsll        $a0, $a3, 12
    ctx->pc = 0x295764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 12);
    // 0x295768: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x295768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29576c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x295770: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x295770u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x295774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x295778: 0x25ad0003  addiu       $t5, $t5, 0x3
    ctx->pc = 0x295778u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x29577c: 0x3143a  dsrl        $v0, $v1, 16
    ctx->pc = 0x29577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 16);
    // 0x295780: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x295780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
    // 0x295784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x295784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x295788: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x295788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x29578c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x29578cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295790: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x295790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295794: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x295798: 0x186102a  slt         $v0, $t4, $a2
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29579c: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x29579cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2957a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2957a4: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x2957a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2957a8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2957A8u;
    {
        const bool branch_taken_0x2957a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957A8u;
        // 0x2957ac: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957a8) {
            ctx->pc = 0x2956F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2956f8;
        }
    }
    ctx->pc = 0x2957B0u;
label_2957b0:
    // 0x2957b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2957B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2957B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957B0u;
        // 0x2957b4: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2957B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2957B8u;
}
