#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211480
// Address: 0x211480 - 0x211598
void sub_00211480_0x211480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211480_0x211480");
#endif

    switch (ctx->pc) {
        case 0x211490u: goto label_211490;
        case 0x2114ccu: goto label_2114cc;
        case 0x211500u: goto label_211500;
        case 0x211540u: goto label_211540;
        case 0x211588u: goto label_211588;
        default: break;
    }

    ctx->pc = 0x211480u;

    // 0x211480: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x211480u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x211484: 0x11c00042  beqz        $t6, . + 4 + (0x42 << 2)
    ctx->pc = 0x211484u;
    {
        const bool branch_taken_0x211484 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x211488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211484u;
            // 0x211488: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211484) {
            ctx->pc = 0x211590u;
            goto label_211590;
        }
    }
    ctx->pc = 0x21148Cu;
    // 0x21148c: 0x1ee6023  subu        $t4, $t7, $t6
    ctx->pc = 0x21148cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_211490:
    // 0x211490: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211490u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211494: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211498: 0x8dedab58  lw          $t5, -0x54A8($t7)
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945624)));
    // 0x21149c: 0xcc5021  addu        $t2, $a2, $t4
    ctx->pc = 0x21149cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2114a0: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x2114a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2114a4: 0x11e00038  beqz        $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x2114A4u;
    {
        const bool branch_taken_0x2114a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2114A4u;
            // 0x2114a8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114a4) {
            ctx->pc = 0x211588u;
            goto label_211588;
        }
    }
    ctx->pc = 0x2114ACu;
    // 0x2114ac: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x2114acu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2114b0: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x2114b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x2114b4: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2114b4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2114b8: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2114b8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x2114bc: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x2114bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2114c0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2114c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2114c4: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x2114c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2114c8: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_2114cc:
    // 0x2114cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2114d0: 0x12e7021  addu        $t6, $t1, $t6
    ctx->pc = 0x2114d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2114d4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2114d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2114d8: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x2114d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x2114dc: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2114e0: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x2114e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2114e4: 0x15e00026  bnez        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x2114E4u;
    {
        const bool branch_taken_0x2114e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2114E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2114E4u;
            // 0x2114e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114e4) {
            ctx->pc = 0x211580u;
            goto label_211580;
        }
    }
    ctx->pc = 0x2114ECu;
    // 0x2114ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2114ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2114f0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2114f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2114f4: 0x50cf000c  beql        $a2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2114F4u;
    {
        const bool branch_taken_0x2114f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        if (branch_taken_0x2114f4) {
            ctx->pc = 0x2114F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2114F4u;
            // 0x2114f8: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211528u;
            goto label_211528;
        }
    }
    ctx->pc = 0x2114FCu;
    // 0x2114fc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2114fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211500:
    // 0x211500: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x211500u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211504: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211508: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x211508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x21150c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x21150cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211510: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x211510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x211514: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x211514u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x211518: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x21151c: 0x14cbfff8  bne         $a2, $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21151Cu;
    {
        const bool branch_taken_0x21151c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x211520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21151Cu;
            // 0x211520: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21151c) {
            ctx->pc = 0x211500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211500;
        }
    }
    ctx->pc = 0x211524u;
    // 0x211524: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211528:
    // 0x211528: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x21152c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211530: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x211530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x211534: 0x118e0009  beq         $t4, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x211534u;
    {
        const bool branch_taken_0x211534 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 14));
        ctx->pc = 0x211538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211534u;
            // 0x211538: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211534) {
            ctx->pc = 0x21155Cu;
            goto label_21155c;
        }
    }
    ctx->pc = 0x21153Cu;
    // 0x21153c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211540:
    // 0x211540: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211544: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211548: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x211548u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21154c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x211550: 0x0  nop
    ctx->pc = 0x211550u;
    // NOP
    // 0x211554: 0x158dfffa  bne         $t4, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211554u;
    {
        const bool branch_taken_0x211554 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x211558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211554u;
            // 0x211558: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211554) {
            ctx->pc = 0x211540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211540;
        }
    }
    ctx->pc = 0x21155Cu;
label_21155c:
    // 0x21155c: 0x912e0000  lbu         $t6, 0x0($t1)
    ctx->pc = 0x21155cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x211560: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x211560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211564: 0xad0e0000  sw          $t6, 0x0($t0)
    ctx->pc = 0x211564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 14));
    // 0x211568: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x211568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21156c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x21156cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211570: 0x1ea7823  subu        $t7, $t7, $t2
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x211574: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x211574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x211578: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21157c: 0xadeeab60  sw          $t6, -0x54A0($t7)
    ctx->pc = 0x21157cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 14));
label_211580:
    // 0x211580: 0x3e00008  jr          $ra
    ctx->pc = 0x211580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211588u;
label_211588:
    // 0x211588: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x211588u;
    {
        const bool branch_taken_0x211588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211588u;
            // 0x21158c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211588) {
            ctx->pc = 0x2114CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2114cc;
        }
    }
    ctx->pc = 0x211590u;
label_211590:
    // 0x211590: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x211590u;
    {
        const bool branch_taken_0x211590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211590u;
            // 0x211594: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211590) {
            ctx->pc = 0x211490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211490;
        }
    }
    ctx->pc = 0x211598u;
    ctx->pc = 0x211598u;
}
