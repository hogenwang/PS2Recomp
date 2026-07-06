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

// Function: sub_001654D0
// Address: 0x1654d0 - 0x165930
void sub_001654D0_0x1654d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001654D0_0x1654d0");
#endif

    switch (ctx->pc) {
        case 0x16552cu: goto label_16552c;
        case 0x1655e0u: goto label_1655e0;
        case 0x165870u: goto label_165870;
        case 0x16588cu: goto label_16588c;
        default: break;
    }

    ctx->pc = 0x1654d0u;

    // 0x1654d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1654d4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1654d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1654d8: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x1654d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1654dc: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x1654e0: 0x906ef35b  lbu         $t6, -0xCA5($v1)
    ctx->pc = 0x1654e0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x1654e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1654e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1654e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654ec: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x1654f0: 0x3c0c0008  lui         $t4, 0x8
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8 << 16));
    // 0x1654f4: 0x30e3000c  andi        $v1, $a3, 0xC
    ctx->pc = 0x1654f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x1654f8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1654fc: 0x30e30030  andi        $v1, $a3, 0x30
    ctx->pc = 0x1654fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
    // 0x165500: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x165500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x165504: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x165508: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16550c: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x16550cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x165510: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x165510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165514: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x165514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x165518: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x165518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16551c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x165520: 0xc97821  addu        $t7, $a2, $t1
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x165524: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x165524u;
    {
        const bool branch_taken_0x165524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165524u;
        // 0x165528: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165524) {
            ctx->pc = 0x165588u;
            goto label_165588;
        }
    }
    ctx->pc = 0x16552Cu;
label_16552c:
    // 0x16552c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x16552Cu;
    {
        const bool branch_taken_0x16552c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16552c) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x165534u;
    // 0x165534: 0x14840012  bne         $a0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x165534u;
    {
        const bool branch_taken_0x165534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 4));
        ctx->pc = 0x165538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165534u;
        // 0x165538: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165534) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x16553Cu;
    // 0x16553c: 0x14630010  bne         $v1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16553Cu;
    {
        const bool branch_taken_0x16553c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 3));
        if (branch_taken_0x16553c) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x165544u;
    // 0x165544: 0x8ccd0494  lw          $t5, 0x494($a2)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1172)));
    // 0x165548: 0x1ac5824  and         $t3, $t5, $t4
    ctx->pc = 0x165548u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x16554c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x16554Cu;
    {
        const bool branch_taken_0x16554c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x16554c) {
            ctx->pc = 0x165568u;
            goto label_165568;
        }
    }
    ctx->pc = 0x165554u;
    // 0x165554: 0x1aa3024  and         $a2, $t5, $t2
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x165558: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x165558u;
    {
        const bool branch_taken_0x165558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x165558) {
            ctx->pc = 0x165568u;
            goto label_165568;
        }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x165560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x165564: 0x0  nop
    ctx->pc = 0x165564u;
    // NOP
label_165568:
    // 0x165568: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x165568u;
    {
        const bool branch_taken_0x165568 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x165568) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x165570u;
    // 0x165570: 0x1aa3024  and         $a2, $t5, $t2
    ctx->pc = 0x165570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x165574: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x165574) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x16557Cu;
    // 0x16557c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_165580:
    // 0x165580: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x165584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x165584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_165588:
    // 0x165588: 0x51c90002  beql        $t6, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x165588u;
    {
        const bool branch_taken_0x165588 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 9));
        if (branch_taken_0x165588) {
            ctx->pc = 0x16558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165588u;
            // 0x16558c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165594u;
            goto label_165594;
        }
    }
    ctx->pc = 0x165590u;
    // 0x165590: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x165590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_165594:
    // 0x165594: 0xa6302a  slt         $a2, $a1, $a2
    ctx->pc = 0x165594u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x165598: 0x54c0ffe4  bnel        $a2, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x165598u;
    {
        const bool branch_taken_0x165598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x165598) {
            ctx->pc = 0x16559Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165598u;
            // 0x16559c: 0x8de60100  lw          $a2, 0x100($t7) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16552Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16552c;
        }
    }
    ctx->pc = 0x1655A0u;
    // 0x1655a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1655A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1655A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1655A8u;
    // 0x1655a8: 0x0  nop
    ctx->pc = 0x1655a8u;
    // NOP
    // 0x1655ac: 0x0  nop
    ctx->pc = 0x1655acu;
    // NOP
    // 0x1655b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1655b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1655b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1655b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1655b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1655b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1655bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1655bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1655c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1655c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1655c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c8: 0x922500f7  lbu         $a1, 0xF7($s1)
    ctx->pc = 0x1655c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 247)));
    // 0x1655cc: 0x962600ec  lhu         $a2, 0xEC($s1)
    ctx->pc = 0x1655ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x1655d0: 0x96070000  lhu         $a3, 0x0($s0)
    ctx->pc = 0x1655d0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1655d4: 0x8e2800f8  lw          $t0, 0xF8($s1)
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1655d8: 0xc059f80  jal         func_167E00
    ctx->pc = 0x1655D8u;
    SET_GPR_U32(ctx, 31, 0x1655E0u);
    ctx->pc = 0x1655DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655D8u;
    // 0x1655dc: 0x948400ea  lhu         $a0, 0xEA($a0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167E00u, 0x1655D8u, 0x1655E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655E0u;
label_1655e0:
    // 0x1655e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1655e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1655e4: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1655e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1655e8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1655e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1655ec: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1655ECu;
    {
        const bool branch_taken_0x1655ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655ec) {
            ctx->pc = 0x1655F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655ECu;
            // 0x1655f0: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165610u;
            goto label_165610;
        }
    }
    ctx->pc = 0x1655F4u;
    // 0x1655f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1655f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1655f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1655f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1655fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1655FCu;
    {
        const bool branch_taken_0x1655fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1655fc) {
            ctx->pc = 0x16560Cu;
            goto label_16560c;
        }
    }
    ctx->pc = 0x165604u;
    // 0x165604: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x165604u;
    {
        const bool branch_taken_0x165604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165604u;
        // 0x165608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165604) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x16560Cu;
label_16560c:
    // 0x16560c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x16560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_165610:
    // 0x165610: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165610u;
    {
        const bool branch_taken_0x165610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165610) {
            ctx->pc = 0x165614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165610u;
            // 0x165614: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165634u;
            goto label_165634;
        }
    }
    ctx->pc = 0x165618u;
    // 0x165618: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x165618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16561c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x165620: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165620u;
    {
        const bool branch_taken_0x165620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165620) {
            ctx->pc = 0x165630u;
            goto label_165630;
        }
    }
    ctx->pc = 0x165628u;
    // 0x165628: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x165628u;
    {
        const bool branch_taken_0x165628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165628u;
        // 0x16562c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165628) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165630u;
label_165630:
    // 0x165630: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x165630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_165634:
    // 0x165634: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x165634u;
    {
        const bool branch_taken_0x165634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165634) {
            ctx->pc = 0x165638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165634u;
            // 0x165638: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656D8u;
            goto label_1656d8;
        }
    }
    ctx->pc = 0x16563Cu;
    // 0x16563c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x165640: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x165644: 0x8c63a20c  lw          $v1, -0x5DF4($v1)
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943244)));
    // 0x165648: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x165648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16564c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x16564Cu;
    {
        const bool branch_taken_0x16564c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16564c) {
            ctx->pc = 0x1656D4u;
            goto label_1656d4;
        }
    }
    ctx->pc = 0x165654u;
    // 0x165654: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x165654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x165658: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x165658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x16565c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16565Cu;
    {
        const bool branch_taken_0x16565c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16565c) {
            ctx->pc = 0x1656D4u;
            goto label_1656d4;
        }
    }
    ctx->pc = 0x165664u;
    // 0x165664: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x165668: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16566c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x16566cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x165670: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165670u;
    {
        const bool branch_taken_0x165670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x165670) {
            ctx->pc = 0x165674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165670u;
            // 0x165674: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165690u;
            goto label_165690;
        }
    }
    ctx->pc = 0x165678u;
    // 0x165678: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x16567c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165680: 0x9063b246  lbu         $v1, -0x4DBA($v1)
    ctx->pc = 0x165680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947398)));
    // 0x165684: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x165684u;
    {
        const bool branch_taken_0x165684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x165684) {
            ctx->pc = 0x1656D4u;
            goto label_1656d4;
        }
    }
    ctx->pc = 0x16568Cu;
    // 0x16568c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_165690:
    // 0x165690: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x165694: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x165698: 0x30850030  andi        $a1, $a0, 0x30
    ctx->pc = 0x165698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x16569c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x16569cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1656a0: 0x53102  srl         $a2, $a1, 4
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1656a4: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1656a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1656a8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1656ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1656b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1656b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1656b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1656b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1656bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1656c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1656c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1656c4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1656C4u;
    {
        const bool branch_taken_0x1656c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1656c4) {
            ctx->pc = 0x1656D4u;
            goto label_1656d4;
        }
    }
    ctx->pc = 0x1656CCu;
    // 0x1656cc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1656CCu;
    {
        const bool branch_taken_0x1656cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656CCu;
        // 0x1656d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656cc) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1656D4u;
label_1656d4:
    // 0x1656d4: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1656d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1656d8:
    // 0x1656d8: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1656D8u;
    {
        const bool branch_taken_0x1656d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656d8) {
            ctx->pc = 0x1656DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656D8u;
            // 0x1656dc: 0x30430010  andi        $v1, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165724u;
            goto label_165724;
        }
    }
    ctx->pc = 0x1656E0u;
    // 0x1656e0: 0x8e240494  lw          $a0, 0x494($s1)
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1656e4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1656e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1656ec: 0x50600088  beql        $v1, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x1656ECu;
    {
        const bool branch_taken_0x1656ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656ec) {
            ctx->pc = 0x1656F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656ECu;
            // 0x1656f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1656F4u;
    // 0x1656f4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1656f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1656f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1656fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1656FCu;
    {
        const bool branch_taken_0x1656fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656fc) {
            ctx->pc = 0x165714u;
            goto label_165714;
        }
    }
    ctx->pc = 0x165704u;
    // 0x165704: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165708: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16570c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16570Cu;
    {
        const bool branch_taken_0x16570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16570c) {
            ctx->pc = 0x165720u;
            goto label_165720;
        }
    }
    ctx->pc = 0x165714u;
label_165714:
    // 0x165714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165718: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x165718u;
    {
        const bool branch_taken_0x165718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165718) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165720u;
label_165720:
    // 0x165720: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x165720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_165724:
    // 0x165724: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x165724u;
    {
        const bool branch_taken_0x165724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165724) {
            ctx->pc = 0x165728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165724u;
            // 0x165728: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165790u;
            goto label_165790;
        }
    }
    ctx->pc = 0x16572Cu;
    // 0x16572c: 0x8e240494  lw          $a0, 0x494($s1)
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165730: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x165730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x165734: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165738: 0x50600075  beql        $v1, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x165738u;
    {
        const bool branch_taken_0x165738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165738) {
            ctx->pc = 0x16573Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165738u;
            // 0x16573c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165740u;
    // 0x165740: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x165744: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165748: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x165748u;
    {
        const bool branch_taken_0x165748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165748) {
            ctx->pc = 0x165780u;
            goto label_165780;
        }
    }
    ctx->pc = 0x165750u;
    // 0x165750: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x165754: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165758: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x165758u;
    {
        const bool branch_taken_0x165758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165758) {
            ctx->pc = 0x165780u;
            goto label_165780;
        }
    }
    ctx->pc = 0x165760u;
    // 0x165760: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x165760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x165764: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165768: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165768u;
    {
        const bool branch_taken_0x165768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165768) {
            ctx->pc = 0x165780u;
            goto label_165780;
        }
    }
    ctx->pc = 0x165770u;
    // 0x165770: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165774: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165778: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165778u;
    {
        const bool branch_taken_0x165778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165778) {
            ctx->pc = 0x16578Cu;
            goto label_16578c;
        }
    }
    ctx->pc = 0x165780u;
label_165780:
    // 0x165780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165784: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x165784u;
    {
        const bool branch_taken_0x165784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165784) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x16578Cu;
label_16578c:
    // 0x16578c: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x16578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_165790:
    // 0x165790: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x165790u;
    {
        const bool branch_taken_0x165790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165790) {
            ctx->pc = 0x165794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165790u;
            // 0x165794: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1657DCu;
            goto label_1657dc;
        }
    }
    ctx->pc = 0x165798u;
    // 0x165798: 0x8e240494  lw          $a0, 0x494($s1)
    ctx->pc = 0x165798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x16579c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x16579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1657a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1657a4: 0x5060005a  beql        $v1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1657A4u;
    {
        const bool branch_taken_0x1657a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657a4) {
            ctx->pc = 0x1657A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1657A4u;
            // 0x1657a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1657ACu;
    // 0x1657ac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1657b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1657b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1657B4u;
    {
        const bool branch_taken_0x1657b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657b4) {
            ctx->pc = 0x1657CCu;
            goto label_1657cc;
        }
    }
    ctx->pc = 0x1657BCu;
    // 0x1657bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1657bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1657c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1657c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1657C4u;
    {
        const bool branch_taken_0x1657c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657c4) {
            ctx->pc = 0x1657D8u;
            goto label_1657d8;
        }
    }
    ctx->pc = 0x1657CCu;
label_1657cc:
    // 0x1657cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1657ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1657D0u;
    {
        const bool branch_taken_0x1657d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657d0) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1657D8u;
label_1657d8:
    // 0x1657d8: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x1657d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1657dc:
    // 0x1657dc: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1657DCu;
    {
        const bool branch_taken_0x1657dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657dc) {
            ctx->pc = 0x1657E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1657DCu;
            // 0x1657e0: 0x30420080  andi        $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165848u;
            goto label_165848;
        }
    }
    ctx->pc = 0x1657E4u;
    // 0x1657e4: 0x8e240494  lw          $a0, 0x494($s1)
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1657e8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1657ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1657f0: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1657F0u;
    {
        const bool branch_taken_0x1657f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657f0) {
            ctx->pc = 0x1657F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1657F0u;
            // 0x1657f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1657F8u;
    // 0x1657f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1657f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1657fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165800: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x165800u;
    {
        const bool branch_taken_0x165800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165800) {
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x165808u;
    // 0x165808: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x165808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x16580c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165810: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x165810u;
    {
        const bool branch_taken_0x165810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165810) {
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x165818u;
    // 0x165818: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16581c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165820: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165820u;
    {
        const bool branch_taken_0x165820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165820) {
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x165828u;
    // 0x165828: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16582c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16582cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165830: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165830u;
    {
        const bool branch_taken_0x165830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165830) {
            ctx->pc = 0x165844u;
            goto label_165844;
        }
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16583c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x16583Cu;
    {
        const bool branch_taken_0x16583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16583c) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165844u;
label_165844:
    // 0x165844: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x165844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_165848:
    // 0x165848: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x165848u;
    {
        const bool branch_taken_0x165848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165848) {
            ctx->pc = 0x16584Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165848u;
            // 0x16584c: 0x9603001c  lhu         $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x165850u;
    // 0x165850: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x165850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x165854: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165858: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165858u;
    {
        const bool branch_taken_0x165858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165858) {
            ctx->pc = 0x16585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165858u;
            // 0x16585c: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165880u;
            goto label_165880;
        }
    }
    ctx->pc = 0x165860u;
    // 0x165860: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x165860u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165868: 0xc05999c  jal         func_166670
    ctx->pc = 0x165868u;
    SET_GPR_U32(ctx, 31, 0x165870u);
    ctx->pc = 0x16586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165868u;
    // 0x16586c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166670u, 0x165868u, 0x165870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165870u;
label_165870:
    // 0x165870: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165870u;
    {
        const bool branch_taken_0x165870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165870) {
            ctx->pc = 0x16589Cu;
            goto label_16589c;
        }
    }
    ctx->pc = 0x165878u;
    // 0x165878: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x165878u;
    {
        const bool branch_taken_0x165878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165878u;
        // 0x16587c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165878) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165884: 0xc05999c  jal         func_166670
    ctx->pc = 0x165884u;
    SET_GPR_U32(ctx, 31, 0x16588Cu);
    ctx->pc = 0x165888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165884u;
    // 0x165888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166670u, 0x165884u, 0x16588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16588Cu;
label_16588c:
    // 0x16588c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16588Cu;
    {
        const bool branch_taken_0x16588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16588c) {
            ctx->pc = 0x16589Cu;
            goto label_16589c;
        }
    }
    ctx->pc = 0x165894u;
    // 0x165894: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x165894u;
    {
        const bool branch_taken_0x165894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165894u;
        // 0x165898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165894) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x16589Cu;
label_16589c:
    // 0x16589c: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x16589cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_1658a0:
    // 0x1658a0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1658a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1658a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1658A4u;
    {
        const bool branch_taken_0x1658a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658a4) {
            ctx->pc = 0x1658A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1658A4u;
            // 0x1658a8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1658C8u;
            goto label_1658c8;
        }
    }
    ctx->pc = 0x1658ACu;
    // 0x1658ac: 0x922200fc  lbu         $v0, 0xFC($s1)
    ctx->pc = 0x1658acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1658b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1658b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1658b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1658B4u;
    {
        const bool branch_taken_0x1658b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1658b4) {
            ctx->pc = 0x1658C4u;
            goto label_1658c4;
        }
    }
    ctx->pc = 0x1658BCu;
    // 0x1658bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1658BCu;
    {
        const bool branch_taken_0x1658bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658BCu;
        // 0x1658c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658bc) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1658C4u;
label_1658c4:
    // 0x1658c4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1658c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1658c8:
    // 0x1658c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1658C8u;
    {
        const bool branch_taken_0x1658c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658c8) {
            ctx->pc = 0x1658CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1658C8u;
            // 0x1658cc: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1658ECu;
            goto label_1658ec;
        }
    }
    ctx->pc = 0x1658D0u;
    // 0x1658d0: 0x922200fc  lbu         $v0, 0xFC($s1)
    ctx->pc = 0x1658d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1658d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1658d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1658d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1658D8u;
    {
        const bool branch_taken_0x1658d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658d8) {
            ctx->pc = 0x1658E8u;
            goto label_1658e8;
        }
    }
    ctx->pc = 0x1658E0u;
    // 0x1658e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1658E0u;
    {
        const bool branch_taken_0x1658e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658E0u;
        // 0x1658e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658e0) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1658E8u;
label_1658e8:
    // 0x1658e8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1658e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1658ec:
    // 0x1658ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1658ECu;
    {
        const bool branch_taken_0x1658ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658ec) {
            ctx->pc = 0x1658F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1658ECu;
            // 0x1658f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x1658F4u;
    // 0x1658f4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1658f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1658f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1658f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1658fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1658FCu;
    {
        const bool branch_taken_0x1658fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1658fc) {
            ctx->pc = 0x16590Cu;
            goto label_16590c;
        }
    }
    ctx->pc = 0x165904u;
    // 0x165904: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165904u;
    {
        const bool branch_taken_0x165904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165904u;
        // 0x165908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165904) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x16590Cu;
label_16590c:
    // 0x16590c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165910:
    // 0x165910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16591c: 0x3e00008  jr          $ra
    ctx->pc = 0x16591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16591Cu;
        // 0x165920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165924u;
    // 0x165924: 0x0  nop
    ctx->pc = 0x165924u;
    // NOP
    // 0x165928: 0x0  nop
    ctx->pc = 0x165928u;
    // NOP
    // 0x16592c: 0x0  nop
    ctx->pc = 0x16592cu;
    // NOP
    if (ctx->pc == 0x16592cu) { ctx->pc = 0x165930u; }
}
