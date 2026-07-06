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

// Function: sub_0012D490
// Address: 0x12d490 - 0x12d638
void sub_0012D490_0x12d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D490_0x12d490");
#endif

    switch (ctx->pc) {
        case 0x12d51cu: goto label_12d51c;
        case 0x12d548u: goto label_12d548;
        case 0x12d590u: goto label_12d590;
        case 0x12d5b4u: goto label_12d5b4;
        case 0x12d5d8u: goto label_12d5d8;
        case 0x12d5f4u: goto label_12d5f4;
        default: break;
    }

    ctx->pc = 0x12d490u;

    // 0x12d490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12d494: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12d494u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12d498: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12d49c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12d4a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12d4a4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12d4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12d4ac: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12d4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12d4b4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d4b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12d4bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12d4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4c0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12d4c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12d4c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12d4cc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12d4d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12d4d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12d4dc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12d4dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4e0: 0x114f0008  beq         $t2, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D4E0u;
    {
        const bool branch_taken_0x12d4e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4E0u;
        // 0x12d4e4: 0x160f02d  daddu       $fp, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4e0) {
            ctx->pc = 0x12D504u;
            goto label_12d504;
        }
    }
    ctx->pc = 0x12D4E8u;
    // 0x12d4e8: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12d4e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12d4ec: 0x114f0003  beq         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D4ECu;
    {
        const bool branch_taken_0x12d4ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4ECu;
        // 0x12d4f0: 0x240f0045  addiu       $t7, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4ec) {
            ctx->pc = 0x12D4FCu;
            goto label_12d4fc;
        }
    }
    ctx->pc = 0x12D4F4u;
    // 0x12d4f4: 0x154f0003  bne         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D4F4u;
    {
        const bool branch_taken_0x12d4f4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4F4u;
        // 0x12d4f8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f4) {
            ctx->pc = 0x12D504u;
            goto label_12d504;
        }
    }
    ctx->pc = 0x12D4FCu;
label_12d4fc:
    // 0x12d4fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12d500: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12d504:
    // 0x12d504: 0x13783f  dsra32      $t7, $s3, 0
    ctx->pc = 0x12d504u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12d508: 0x5e30007  bgezl       $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D508u;
    {
        const bool branch_taken_0x12d508 = (GPR_S32(ctx, 15) >= 0);
        if (branch_taken_0x12d508) {
            ctx->pc = 0x12D50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D508u;
            // 0x12d50c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D528u;
            goto label_12d528;
        }
    }
    ctx->pc = 0x12D510u;
    // 0x12d510: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d514: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12D514u;
    SET_GPR_U32(ctx, 31, 0x12D51Cu);
    ctx->pc = 0x12D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D514u;
    // 0x12d518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12D514u, 0x12D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D51Cu;
label_12d51c:
    // 0x12d51c: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d520: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d524: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x12d524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
label_12d528:
    // 0x12d528: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d530: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12d530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d534: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d538: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12d538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d53c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12d53cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d540: 0xc048d7c  jal         func_1235F0
    ctx->pc = 0x12D540u;
    SET_GPR_U32(ctx, 31, 0x12D548u);
    ctx->pc = 0x12D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D540u;
    // 0x12d544: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1235F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1235F0u, 0x12D540u, 0x12D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D548u;
label_12d548:
    // 0x12d548: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12d54c: 0x122f0004  beq         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D54Cu;
    {
        const bool branch_taken_0x12d54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D54Cu;
        // 0x12d550: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d54c) {
            ctx->pc = 0x12D560u;
            goto label_12d560;
        }
    }
    ctx->pc = 0x12D554u;
    // 0x12d554: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12d554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12d558: 0x162f0004  bne         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D558u;
    {
        const bool branch_taken_0x12d558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D558u;
        // 0x12d55c: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d558) {
            ctx->pc = 0x12D56Cu;
            goto label_12d56c;
        }
    }
    ctx->pc = 0x12D560u;
label_12d560:
    // 0x12d560: 0x32ef0001  andi        $t7, $s7, 0x1
    ctx->pc = 0x12d560u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12d564: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x12D564u;
    {
        const bool branch_taken_0x12d564 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D564u;
        // 0x12d568: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d564) {
            ctx->pc = 0x12D630u;
            goto label_12d630;
        }
    }
    ctx->pc = 0x12D56Cu;
label_12d56c:
    // 0x12d56c: 0x162f000e  bne         $s1, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12D56Cu;
    {
        const bool branch_taken_0x12d56c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D56Cu;
        // 0x12d570: 0x2548021  addu        $s0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d56c) {
            ctx->pc = 0x12D5A8u;
            goto label_12d5a8;
        }
    }
    ctx->pc = 0x12D574u;
    // 0x12d574: 0x824e0000  lb          $t6, 0x0($s2)
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12d578: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12d578u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d57c: 0x55cf0009  bnel        $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D57Cu;
    {
        const bool branch_taken_0x12d57c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d57c) {
            ctx->pc = 0x12D580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D57Cu;
            // 0x12d580: 0x8eaf0000  lw          $t7, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D5A4u;
            goto label_12d5a4;
        }
    }
    ctx->pc = 0x12D584u;
    // 0x12d584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d588: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12D588u;
    SET_GPR_U32(ctx, 31, 0x12D590u);
    ctx->pc = 0x12D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D588u;
    // 0x12d58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12D588u, 0x12D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D590u;
label_12d590:
    // 0x12d590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D590u;
    {
        const bool branch_taken_0x12d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D590u;
        // 0x12d594: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d590) {
            ctx->pc = 0x12D5A0u;
            goto label_12d5a0;
        }
    }
    ctx->pc = 0x12D598u;
    // 0x12d598: 0x1f47823  subu        $t7, $t7, $s4
    ctx->pc = 0x12d598u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x12d59c: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x12d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_12d5a0:
    // 0x12d5a0: 0x8eaf0000  lw          $t7, 0x0($s5)
    ctx->pc = 0x12d5a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12d5a4:
    // 0x12d5a4: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x12d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_12d5a8:
    // 0x12d5a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5ac: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12D5ACu;
    SET_GPR_U32(ctx, 31, 0x12D5B4u);
    ctx->pc = 0x12D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5ACu;
    // 0x12d5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12D5ACu, 0x12D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5B4u;
label_12d5b4:
    // 0x12d5b4: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12d5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d5b8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x12d5bc: 0x202780a  movz        $t7, $s0, $v0
    ctx->pc = 0x12d5bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 16));
    // 0x12d5c0: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x12d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x12d5c4: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12d5c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d5c8: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12d5c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12d5cc: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D5CCu;
    {
        const bool branch_taken_0x12d5cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5CCu;
        // 0x12d5d0: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5cc) {
            ctx->pc = 0x12D5F4u;
            goto label_12d5f4;
        }
    }
    ctx->pc = 0x12D5D4u;
    // 0x12d5d4: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x12d5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12d5d8:
    // 0x12d5d8: 0xa1ac0000  sb          $t4, 0x0($t5)
    ctx->pc = 0x12d5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x12d5dc: 0x25ae0001  addiu       $t6, $t5, 0x1
    ctx->pc = 0x12d5dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12d5e0: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12d5e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12d5e4: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x12d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x12d5e8: 0x0  nop
    ctx->pc = 0x12d5e8u;
    // NOP
    // 0x12d5ec: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D5ECu;
    {
        const bool branch_taken_0x12d5ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5ECu;
        // 0x12d5f0: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5ec) {
            ctx->pc = 0x12D5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d5d8;
        }
    }
    ctx->pc = 0x12D5F4u;
label_12d5f4:
    // 0x12d5f4: 0x1d27823  subu        $t7, $t6, $s2
    ctx->pc = 0x12d5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x12d5f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12d5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d5fc: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x12d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x12d600: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12d600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d604: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12d604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d608: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12d608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d60c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12d60cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d610: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d614: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d618: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12d618u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d61c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12d61cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d620: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12d620u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d624: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12d624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12d628: 0x3e00008  jr          $ra
    ctx->pc = 0x12D628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D628u;
        // 0x12d62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D630u;
label_12d630:
    // 0x12d630: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12D630u;
    {
        const bool branch_taken_0x12d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D630u;
        // 0x12d634: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d630) {
            ctx->pc = 0x12D5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d5f4;
        }
    }
    ctx->pc = 0x12D638u;
}
