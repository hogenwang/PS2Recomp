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

// Function: sub_0033B4F0
// Address: 0x33b4f0 - 0x33ba10
void sub_0033B4F0_0x33b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B4F0_0x33b4f0");
#endif

    switch (ctx->pc) {
        case 0x33b648u: goto label_33b648;
        case 0x33b6bcu: goto label_33b6bc;
        case 0x33b704u: goto label_33b704;
        case 0x33b758u: goto label_33b758;
        case 0x33b7c4u: goto label_33b7c4;
        case 0x33b978u: goto label_33b978;
        default: break;
    }

    ctx->pc = 0x33b4f0u;

    // 0x33b4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33b4f4: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x33b4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x33b4f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33b4fc: 0x240204b4  addiu       $v0, $zero, 0x4B4
    ctx->pc = 0x33b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33b500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33b504: 0x24c68b10  addiu       $a2, $a2, -0x74F0
    ctx->pc = 0x33b504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937360));
    // 0x33b508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b50c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b514: 0x2623818  mult        $a3, $s3, $v0
    ctx->pc = 0x33b514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x33b518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b51c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b520: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b528: 0x24848af0  addiu       $a0, $a0, -0x7510
    ctx->pc = 0x33b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937328));
    // 0x33b52c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x33b530: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33b534: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x33b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b538: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33b538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b53c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x33b53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33b540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B540u;
    {
        const bool branch_taken_0x33b540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B540u;
        // 0x33b544: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b540) {
            ctx->pc = 0x33B550u;
            goto label_33b550;
        }
    }
    ctx->pc = 0x33B548u;
    // 0x33b548: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x33B548u;
    {
        const bool branch_taken_0x33b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B548u;
        // 0x33b54c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b548) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B550u;
label_33b550:
    // 0x33b550: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b554: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x33b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x33b558: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x33b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x33b55c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33b55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33b560: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B560u;
    {
        const bool branch_taken_0x33b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b560) {
            ctx->pc = 0x33B564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B560u;
            // 0x33b564: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B570u;
            goto label_33b570;
        }
    }
    ctx->pc = 0x33B568u;
    // 0x33b568: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x33B568u;
    {
        const bool branch_taken_0x33b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B568u;
        // 0x33b56c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b568) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B570u;
label_33b570:
    // 0x33b570: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33b570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33b574: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x33b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b578: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x33b578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x33b57c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33b580: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33b584: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x33b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x33b588: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x33b588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x33b58c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33b590: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33b594: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b598: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33b598u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b59c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33b5a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33b5a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b5a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B5A8u;
    {
        const bool branch_taken_0x33b5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b5a8) {
            ctx->pc = 0x33B5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5A8u;
            // 0x33b5ac: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B5B8u;
            goto label_33b5b8;
        }
    }
    ctx->pc = 0x33B5B0u;
    // 0x33b5b0: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x33B5B0u;
    {
        const bool branch_taken_0x33b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5B0u;
        // 0x33b5b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5b0) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B5B8u;
label_33b5b8:
    // 0x33b5b8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x33b5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b5bc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b5c0: 0x9084008c  lbu         $a0, 0x8C($a0)
    ctx->pc = 0x33b5c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x33b5c4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x33b5c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x33b5c8: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x33b5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x33b5cc: 0x144700a6  bne         $v0, $a3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x33B5CCu;
    {
        const bool branch_taken_0x33b5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x33B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5CCu;
        // 0x33b5d0: 0x4a02b  sltu        $s4, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5cc) {
            ctx->pc = 0x33B868u;
            goto label_33b868;
        }
    }
    ctx->pc = 0x33B5D4u;
    // 0x33b5d4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b5d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x33b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b5dc: 0x908495c0  lbu         $a0, -0x6A40($a0)
    ctx->pc = 0x33b5dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940096)));
    // 0x33b5e0: 0x548500a2  bnel        $a0, $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x33B5E0u;
    {
        const bool branch_taken_0x33b5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x33b5e0) {
            ctx->pc = 0x33B5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5E0u;
            // 0x33b5e4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B86Cu;
            goto label_33b86c;
        }
    }
    ctx->pc = 0x33B5E8u;
    // 0x33b5e8: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x33b5e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33b5ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b5f0: 0x50c50019  beql        $a2, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33B5F0u;
    {
        const bool branch_taken_0x33b5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x33b5f0) {
            ctx->pc = 0x33B5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5F0u;
            // 0x33b5f4: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B658u;
            goto label_33b658;
        }
    }
    ctx->pc = 0x33B5F8u;
    // 0x33b5f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b5fc: 0x50c40005  beql        $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B5FCu;
    {
        const bool branch_taken_0x33b5fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x33b5fc) {
            ctx->pc = 0x33B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5FCu;
            // 0x33b600: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B614u;
            goto label_33b614;
        }
    }
    ctx->pc = 0x33B604u;
    // 0x33b604: 0x50c00058  beql        $a2, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x33B604u;
    {
        const bool branch_taken_0x33b604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b604) {
            ctx->pc = 0x33B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B604u;
            // 0x33b608: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B768u;
            goto label_33b768;
        }
    }
    ctx->pc = 0x33B60Cu;
    // 0x33b60c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x33B60Cu;
    {
        const bool branch_taken_0x33b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b60c) {
            ctx->pc = 0x33B764u;
            goto label_33b764;
        }
    }
    ctx->pc = 0x33B614u;
label_33b614:
    // 0x33b614: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x33B614u;
    {
        const bool branch_taken_0x33b614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b614) {
            ctx->pc = 0x33B618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B614u;
            // 0x33b618: 0xa2250000  sb          $a1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B654u;
            goto label_33b654;
        }
    }
    ctx->pc = 0x33B61Cu;
    // 0x33b61c: 0x544700f3  bnel        $v0, $a3, . + 4 + (0xF3 << 2)
    ctx->pc = 0x33B61Cu;
    {
        const bool branch_taken_0x33b61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x33b61c) {
            ctx->pc = 0x33B620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B61Cu;
            // 0x33b620: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B624u;
    // 0x33b624: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33b624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33b628: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33b628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33b62c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x33b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b630: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33b630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b634: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33b634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b638: 0x24c64e18  addiu       $a2, $a2, 0x4E18
    ctx->pc = 0x33b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19992));
    // 0x33b63c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b640: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33B640u;
    SET_GPR_U32(ctx, 31, 0x33B648u);
    ctx->pc = 0x33B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B640u;
    // 0x33b644: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33B640u, 0x33B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B648u;
label_33b648:
    // 0x33b648: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33b648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b64c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x33B64Cu;
    {
        const bool branch_taken_0x33b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b64c) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B654u;
label_33b654:
    // 0x33b654: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x33b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_33b658:
    // 0x33b658: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B658u;
    {
        const bool branch_taken_0x33b658 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b658) {
            ctx->pc = 0x33B65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B658u;
            // 0x33b65c: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B678u;
            goto label_33b678;
        }
    }
    ctx->pc = 0x33B660u;
    // 0x33b660: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x33b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x33b664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B664u;
    {
        const bool branch_taken_0x33b664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b664) {
            ctx->pc = 0x33B674u;
            goto label_33b674;
        }
    }
    ctx->pc = 0x33B66Cu;
    // 0x33b66c: 0x3862000c  xori        $v0, $v1, 0xC
    ctx->pc = 0x33b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12);
    // 0x33b670: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33b670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b674:
    // 0x33b674: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33b674u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_33b678:
    // 0x33b678: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33b67c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33b680: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x33b680u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b684: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33b684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33b688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b68c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x33b68cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b690: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33b690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33b694: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x33b694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x33b698: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B698u;
    {
        const bool branch_taken_0x33b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b698) {
            ctx->pc = 0x33B6BCu;
            goto label_33b6bc;
        }
    }
    ctx->pc = 0x33B6A0u;
    // 0x33b6a0: 0x24020257  addiu       $v0, $zero, 0x257
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x33b6a4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b6a8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x33b6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b6ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b6b0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x33b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b6b4: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x33B6B4u;
    SET_GPR_U32(ctx, 31, 0x33B6BCu);
    ctx->pc = 0x33B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6B4u;
    // 0x33b6b8: 0xa04395c0  sb          $v1, -0x6A40($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3054D0u, 0x33B6B4u, 0x33B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6BCu;
label_33b6bc:
    // 0x33b6bc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b6c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b6c4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x33b6c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x33b6c8: 0x544300c8  bnel        $v0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x33B6C8u;
    {
        const bool branch_taken_0x33b6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b6c8) {
            ctx->pc = 0x33B6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B6C8u;
            // 0x33b6cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B6D0u;
    // 0x33b6d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b6d4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33b6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33b6d8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x33b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x33b6dc: 0xac40e8e0  sw          $zero, -0x1720($v0)
    ctx->pc = 0x33b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 0));
    // 0x33b6e0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x33b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33b6e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b6e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b6ec: 0x24c64e20  addiu       $a2, $a2, 0x4E20
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20000));
    // 0x33b6f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x33b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6f8: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b6fc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33B6FCu;
    SET_GPR_U32(ctx, 31, 0x33B704u);
    ctx->pc = 0x33B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6FCu;
    // 0x33b700: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33B6FCu, 0x33B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B704u;
label_33b704:
    // 0x33b704: 0x96290002  lhu         $t1, 0x2($s1)
    ctx->pc = 0x33b704u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33b708: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x33b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x33b70c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x33b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33b710: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33b710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33b714: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x33b714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33b718: 0x24634df0  addiu       $v1, $v1, 0x4DF0
    ctx->pc = 0x33b718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19952));
    // 0x33b71c: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x33b71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33b720: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x33b720u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x33b724: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x33b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x33b728: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33b728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b72c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b730: 0x8047e8e0  lb          $a3, -0x1720($v0)
    ctx->pc = 0x33b730u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961376)));
    // 0x33b734: 0x1010  mfhi        $v0
    ctx->pc = 0x33b734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33b738: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33b73c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x33b73cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x33b740: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x33b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33b744: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x33b744u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33b748: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33b748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33b74c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33b750: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33B750u;
    SET_GPR_U32(ctx, 31, 0x33B758u);
    ctx->pc = 0x33B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B750u;
    // 0x33b754: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33B750u, 0x33B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B758u;
label_33b758:
    // 0x33b758: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33b758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b75c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x33B75Cu;
    {
        const bool branch_taken_0x33b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b75c) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B764u;
label_33b764:
    // 0x33b764: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x33b764u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_33b768:
    // 0x33b768: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b76c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B76Cu;
    {
        const bool branch_taken_0x33b76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b76c) {
            ctx->pc = 0x33B784u;
            goto label_33b784;
        }
    }
    ctx->pc = 0x33B774u;
    // 0x33b774: 0x5080009d  beql        $a0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x33B774u;
    {
        const bool branch_taken_0x33b774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b774) {
            ctx->pc = 0x33B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B774u;
            // 0x33b778: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B77Cu;
    // 0x33b77c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x33B77Cu;
    {
        const bool branch_taken_0x33b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b77c) {
            ctx->pc = 0x33B85Cu;
            goto label_33b85c;
        }
    }
    ctx->pc = 0x33B784u;
label_33b784:
    // 0x33b784: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x33B784u;
    {
        const bool branch_taken_0x33b784 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b784) {
            ctx->pc = 0x33B7C4u;
            goto label_33b7c4;
        }
    }
    ctx->pc = 0x33B78Cu;
    // 0x33b78c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b790: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33B790u;
    {
        const bool branch_taken_0x33b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b790) {
            ctx->pc = 0x33B7C4u;
            goto label_33b7c4;
        }
    }
    ctx->pc = 0x33B798u;
    // 0x33b798: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x33b798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x33b79c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33b7a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b7a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b7a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b7ac: 0x24c64e30  addiu       $a2, $a2, 0x4E30
    ctx->pc = 0x33b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20016));
    // 0x33b7b0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x33b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b7b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b7bc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33B7BCu;
    SET_GPR_U32(ctx, 31, 0x33B7C4u);
    ctx->pc = 0x33B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B7BCu;
    // 0x33b7c0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33B7BCu, 0x33B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7C4u;
label_33b7c4:
    // 0x33b7c4: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B7C4u;
    {
        const bool branch_taken_0x33b7c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7c4) {
            ctx->pc = 0x33B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B7C4u;
            // 0x33b7c8: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B7D4u;
            goto label_33b7d4;
        }
    }
    ctx->pc = 0x33B7CCu;
    // 0x33b7cc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x33B7CCu;
    {
        const bool branch_taken_0x33b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7CCu;
        // 0x33b7d0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7cc) {
            ctx->pc = 0x33B85Cu;
            goto label_33b85c;
        }
    }
    ctx->pc = 0x33B7D4u;
label_33b7d4:
    // 0x33b7d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b7d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33b7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b7e0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x33b7e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33b7e4: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B7E4u;
    {
        const bool branch_taken_0x33b7e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7E4u;
        // 0x33b7e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7e4) {
            ctx->pc = 0x33B804u;
            goto label_33b804;
        }
    }
    ctx->pc = 0x33B7ECu;
    // 0x33b7ec: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x33b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33b7f0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x33b7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x33b7f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B7F4u;
    {
        const bool branch_taken_0x33b7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7f4) {
            ctx->pc = 0x33B7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B7F4u;
            // 0x33b7f8: 0x30633f00  andi        $v1, $v1, 0x3F00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B808u;
            goto label_33b808;
        }
    }
    ctx->pc = 0x33B7FCu;
    // 0x33b7fc: 0x3862000c  xori        $v0, $v1, 0xC
    ctx->pc = 0x33b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12);
    // 0x33b800: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33b800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b804:
    // 0x33b804: 0x30633f00  andi        $v1, $v1, 0x3F00
    ctx->pc = 0x33b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
label_33b808:
    // 0x33b808: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x33b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33b80c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x33b80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33b810: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x33b810u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33b814: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33b814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33b818: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x33b818u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33b81c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33b820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33b824: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x33b824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b828: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x33b828u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33b82c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b830: 0xac44e8c8  sw          $a0, -0x1738($v0)
    ctx->pc = 0x33b830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 4));
    // 0x33b834: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x33b834u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33b838: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x33b838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33b83c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B83Cu;
    {
        const bool branch_taken_0x33b83c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b83c) {
            ctx->pc = 0x33B85Cu;
            goto label_33b85c;
        }
    }
    ctx->pc = 0x33B844u;
    // 0x33b844: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x33b844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b848: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x33b848u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33b84c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b850: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33b850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b854: 0xac43e8c8  sw          $v1, -0x1738($v0)
    ctx->pc = 0x33b854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 3));
    // 0x33b858: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x33b858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_33b85c:
    // 0x33b85c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33b85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b860: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x33B860u;
    {
        const bool branch_taken_0x33b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b860) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B868u;
label_33b868:
    // 0x33b868: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x33b868u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_33b86c:
    // 0x33b86c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b870: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33B870u;
    {
        const bool branch_taken_0x33b870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b870) {
            ctx->pc = 0x33B8ECu;
            goto label_33b8ec;
        }
    }
    ctx->pc = 0x33B878u;
    // 0x33b878: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B878u;
    {
        const bool branch_taken_0x33b878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b878) {
            ctx->pc = 0x33B888u;
            goto label_33b888;
        }
    }
    ctx->pc = 0x33B880u;
    // 0x33b880: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x33B880u;
    {
        const bool branch_taken_0x33b880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B880u;
        // 0x33b884: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b880) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B888u;
label_33b888:
    // 0x33b888: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x33B888u;
    {
        const bool branch_taken_0x33b888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b888) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B890u;
    // 0x33b890: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b894: 0x8c63d590  lw          $v1, -0x2A70($v1)
    ctx->pc = 0x33b894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956432)));
    // 0x33b898: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x33B898u;
    {
        const bool branch_taken_0x33b898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b898) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B8A0u;
    // 0x33b8a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b8a4: 0x14430050  bne         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x33B8A4u;
    {
        const bool branch_taken_0x33b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b8a4) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B8ACu;
    // 0x33b8ac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33b8b0: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33b8b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33b8b4: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x33B8B4u;
    {
        const bool branch_taken_0x33b8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8b4) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B8BCu;
    // 0x33b8bc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33b8c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33b8c4: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x33b8c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x33b8c8: 0x14430047  bne         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x33B8C8u;
    {
        const bool branch_taken_0x33b8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b8c8) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B8D0u;
    // 0x33b8d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b8d4: 0x90429748  lbu         $v0, -0x68B8($v0)
    ctx->pc = 0x33b8d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x33b8d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33b8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x33b8dc: 0x16620042  bne         $s3, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x33B8DCu;
    {
        const bool branch_taken_0x33b8dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b8dc) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B8E4u;
    // 0x33b8e4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x33B8E4u;
    {
        const bool branch_taken_0x33b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8E4u;
        // 0x33b8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8e4) {
            ctx->pc = 0x33B9ECu;
            goto label_33b9ec;
        }
    }
    ctx->pc = 0x33B8ECu;
label_33b8ec:
    // 0x33b8ec: 0x52400016  beql        $s2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x33B8ECu;
    {
        const bool branch_taken_0x33b8ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b8ec) {
            ctx->pc = 0x33B8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B8ECu;
            // 0x33b8f0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B948u;
            goto label_33b948;
        }
    }
    ctx->pc = 0x33B8F4u;
    // 0x33b8f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b8f8: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x33B8F8u;
    {
        const bool branch_taken_0x33b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b8f8) {
            ctx->pc = 0x33B8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B8F8u;
            // 0x33b8fc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B900u;
    // 0x33b900: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33b900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33b904: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x33b904u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x33b908: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33B908u;
    {
        const bool branch_taken_0x33b908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b908) {
            ctx->pc = 0x33B938u;
            goto label_33b938;
        }
    }
    ctx->pc = 0x33B910u;
    // 0x33b910: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33b910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33b914: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33b918: 0x9063b242  lbu         $v1, -0x4DBE($v1)
    ctx->pc = 0x33b918u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33b91c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B91Cu;
    {
        const bool branch_taken_0x33b91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b91c) {
            ctx->pc = 0x33B938u;
            goto label_33b938;
        }
    }
    ctx->pc = 0x33B924u;
    // 0x33b924: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b928: 0x90639748  lbu         $v1, -0x68B8($v1)
    ctx->pc = 0x33b928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x33b92c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33b930: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B930u;
    {
        const bool branch_taken_0x33b930 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b930) {
            ctx->pc = 0x33B944u;
            goto label_33b944;
        }
    }
    ctx->pc = 0x33B938u;
label_33b938:
    // 0x33b938: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33b938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b93c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x33B93Cu;
    {
        const bool branch_taken_0x33b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b93c) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B944u;
label_33b944:
    // 0x33b944: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33b948:
    // 0x33b948: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33B948u;
    {
        const bool branch_taken_0x33b948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b948) {
            ctx->pc = 0x33B94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B948u;
            // 0x33b94c: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B97Cu;
            goto label_33b97c;
        }
    }
    ctx->pc = 0x33B950u;
    // 0x33b950: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x33b950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x33b954: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33b954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33b958: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x33b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b95c: 0x24842778  addiu       $a0, $a0, 0x2778
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10104));
    // 0x33b960: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33b960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b964: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b968: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x33b968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33b96c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33b970: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33B970u;
    SET_GPR_U32(ctx, 31, 0x33B978u);
    ctx->pc = 0x33B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B970u;
    // 0x33b974: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33B970u, 0x33B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B978u;
label_33b978:
    // 0x33b978: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x33b978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_33b97c:
    // 0x33b97c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b980: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33b980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33b984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b988: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x33b988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x33b98c: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B98Cu;
    {
        const bool branch_taken_0x33b98c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B98Cu;
        // 0x33b990: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b98c) {
            ctx->pc = 0x33B9ACu;
            goto label_33b9ac;
        }
    }
    ctx->pc = 0x33B994u;
    // 0x33b994: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x33b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33b998: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x33b998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x33b99c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B99Cu;
    {
        const bool branch_taken_0x33b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b99c) {
            ctx->pc = 0x33B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B99Cu;
            // 0x33b9a0: 0x30623f00  andi        $v0, $v1, 0x3F00 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B9B0u;
            goto label_33b9b0;
        }
    }
    ctx->pc = 0x33B9A4u;
    // 0x33b9a4: 0x3862000c  xori        $v0, $v1, 0xC
    ctx->pc = 0x33b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12);
    // 0x33b9a8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33b9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b9ac:
    // 0x33b9ac: 0x30623f00  andi        $v0, $v1, 0x3F00
    ctx->pc = 0x33b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
label_33b9b0:
    // 0x33b9b0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33b9b4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33b9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b9b8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x33b9b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33b9bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x33b9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33b9c0: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x33b9c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33b9c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b9c8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x33b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b9cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b9d0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x33b9d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33b9d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x33b9d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b9d8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x33b9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33b9dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33B9DCu;
    {
        const bool branch_taken_0x33b9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b9dc) {
            ctx->pc = 0x33B9E8u;
            goto label_33b9e8;
        }
    }
    ctx->pc = 0x33B9E4u;
    // 0x33b9e4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33b9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_33b9e8:
    // 0x33b9e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33b9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33b9ec:
    // 0x33b9ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33b9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33b9f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33b9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ba00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ba00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA04u;
        // 0x33ba08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA0Cu;
    // 0x33ba0c: 0x0  nop
    ctx->pc = 0x33ba0cu;
    // NOP
}
