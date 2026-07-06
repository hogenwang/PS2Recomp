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

// Function: sub_001BE440
// Address: 0x1be440 - 0x1be578
void sub_001BE440_0x1be440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE440_0x1be440");
#endif

    switch (ctx->pc) {
        case 0x1be454u: goto label_1be454;
        case 0x1be468u: goto label_1be468;
        case 0x1be4f8u: goto label_1be4f8;
        case 0x1be510u: goto label_1be510;
        case 0x1be528u: goto label_1be528;
        case 0x1be540u: goto label_1be540;
        default: break;
    }

    ctx->pc = 0x1be440u;

    // 0x1be440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be448: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1be448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1be44c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BE44Cu;
    SET_GPR_U32(ctx, 31, 0x1BE454u);
    ctx->pc = 0x1BE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE44Cu;
    // 0x1be450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BE44Cu, 0x1BE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE454u;
label_1be454:
    // 0x1be454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be458: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE458u;
    {
        const bool branch_taken_0x1be458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE458u;
        // 0x1be45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be458) {
            ctx->pc = 0x1BE490u;
            goto label_1be490;
        }
    }
    ctx->pc = 0x1BE460u;
    // 0x1be460: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1be460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be464: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x1be464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1be468:
    // 0x1be468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1be468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1be46c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1be46cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be470: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1be474: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x1be474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x1be478: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1be478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1be47c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE47Cu;
    {
        const bool branch_taken_0x1be47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE47Cu;
        // 0x1be480: 0xc7282b  sltu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be47c) {
            ctx->pc = 0x1BE488u;
            goto label_1be488;
        }
    }
    ctx->pc = 0x1BE484u;
    // 0x1be484: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1be484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1be488:
    // 0x1be488: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BE488u;
    {
        const bool branch_taken_0x1be488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE488u;
        // 0x1be48c: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be488) {
            ctx->pc = 0x1BE468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be468;
        }
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be498: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE498u;
        // 0x1be49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE4A0u;
    // 0x1be4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be4a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1be4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be4b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be4b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be4b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1be4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1be4bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1be4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1be4c0: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BE4C0u;
    {
        const bool branch_taken_0x1be4c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4C0u;
        // 0x1be4c4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4c0) {
            ctx->pc = 0x1BE508u;
            goto label_1be508;
        }
    }
    ctx->pc = 0x1BE4C8u;
    // 0x1be4c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1be4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be4d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be4d4: 0x24848a80  addiu       $a0, $a0, -0x7580
    ctx->pc = 0x1be4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    // 0x1be4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be4dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be4dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be4e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1be4e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be4e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1be4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1be4e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be4ec: 0x806f838  j           func_1BE0E0
    ctx->pc = 0x1BE4ECu;
    ctx->pc = 0x1BE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4ECu;
    // 0x1be4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE4F4u;
    // 0x1be4f4: 0x0  nop
    ctx->pc = 0x1be4f4u;
    // NOP
label_1be4f8:
    // 0x1be4f8: 0x26a2fffc  addiu       $v0, $s5, -0x4
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x1be4fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1be500: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE500u;
    {
        const bool branch_taken_0x1be500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE500u;
        // 0x1be504: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be500) {
            ctx->pc = 0x1BE550u;
            goto label_1be550;
        }
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1BE508u;
    SET_GPR_U32(ctx, 31, 0x1BE510u);
    ctx->pc = 0x1BE50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE508u;
    // 0x1be50c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BE508u, 0x1BE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE510u;
label_1be510:
    // 0x1be510: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1be510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be514: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1be518: 0x24515594  addiu       $s1, $v0, 0x5594
    ctx->pc = 0x1be518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
    // 0x1be51c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be524: 0x0  nop
    ctx->pc = 0x1be524u;
    // NOP
label_1be528:
    // 0x1be528: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1be52c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be530: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1be530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be534: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1be534u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1be538: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1BE538u;
    SET_GPR_U32(ctx, 31, 0x1BE540u);
    ctx->pc = 0x1BE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE538u;
    // 0x1be53c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1BE538u, 0x1BE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE540u;
label_1be540:
    // 0x1be540: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BE540u;
    {
        const bool branch_taken_0x1be540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE540u;
        // 0x1be544: 0x2e030020  sltiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be540) {
            ctx->pc = 0x1BE4F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be4f8;
        }
    }
    ctx->pc = 0x1BE548u;
    // 0x1be548: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BE548u;
    {
        const bool branch_taken_0x1be548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE548u;
        // 0x1be54c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be548) {
            ctx->pc = 0x1BE528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be528;
        }
    }
    ctx->pc = 0x1BE550u;
label_1be550:
    // 0x1be550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be558: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be55c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be55cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be560: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1be560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be564: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1be564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1be568: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be56c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE56Cu;
        // 0x1be570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE574u;
    // 0x1be574: 0x0  nop
    ctx->pc = 0x1be574u;
    // NOP
}
