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

// Function: sub_00266558
// Address: 0x266558 - 0x2666e8
void sub_00266558_0x266558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266558_0x266558");
#endif

    switch (ctx->pc) {
        case 0x2665a4u: goto label_2665a4;
        case 0x2665b0u: goto label_2665b0;
        case 0x2665c4u: goto label_2665c4;
        case 0x2665d0u: goto label_2665d0;
        case 0x2665fcu: goto label_2665fc;
        case 0x266604u: goto label_266604;
        case 0x266614u: goto label_266614;
        case 0x266628u: goto label_266628;
        case 0x266640u: goto label_266640;
        case 0x266660u: goto label_266660;
        case 0x266670u: goto label_266670;
        case 0x26668cu: goto label_26668c;
        case 0x2666b0u: goto label_2666b0;
        default: break;
    }

    ctx->pc = 0x266558u;

    // 0x266558: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26655c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x26655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x266560: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x266560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x266564: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x266564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x266568: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x266568u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26656c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x266570: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x266570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266574: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x266574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x266578: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x266578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26657c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x266580: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x266580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266584: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x266584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x266588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x266588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26658c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266590: 0x26d1000c  addiu       $s1, $s6, 0xC
    ctx->pc = 0x266590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x266594: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x266594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x266598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26659c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26659Cu;
    SET_GPR_U32(ctx, 31, 0x2665A4u);
    ctx->pc = 0x2665A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26659Cu;
    // 0x2665a0: 0x96c40004  lhu         $a0, 0x4($s6) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x26659Cu, 0x2665A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665A4u;
label_2665a4:
    // 0x2665a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2665a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665a8: 0xc098552  jal         func_261548
    ctx->pc = 0x2665A8u;
    SET_GPR_U32(ctx, 31, 0x2665B0u);
    ctx->pc = 0x2665ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665A8u;
    // 0x2665ac: 0x24040402  addiu       $a0, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2665A8u, 0x2665B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665B0u;
label_2665b0:
    // 0x2665b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2665b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665b4: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2665B4u;
    {
        const bool branch_taken_0x2665b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2665B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665B4u;
        // 0x2665b8: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665b4) {
            ctx->pc = 0x2665E0u;
            goto label_2665e0;
        }
    }
    ctx->pc = 0x2665BCu;
    // 0x2665bc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2665BCu;
    SET_GPR_U32(ctx, 31, 0x2665C4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2665BCu, 0x2665C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665C4u;
label_2665c4:
    // 0x2665c4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2665c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2665c8: 0xc097308  jal         func_25CC20
    ctx->pc = 0x2665C8u;
    SET_GPR_U32(ctx, 31, 0x2665D0u);
    ctx->pc = 0x2665CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665C8u;
    // 0x2665cc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x2665C8u, 0x2665D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665D0u;
label_2665d0:
    // 0x2665d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2665d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2665d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2665d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2665d8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2665D8u;
    {
        const bool branch_taken_0x2665d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665D8u;
        // 0x2665dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665d8) {
            ctx->pc = 0x2666B4u;
            goto label_2666b4;
        }
    }
    ctx->pc = 0x2665E0u;
label_2665e0:
    // 0x2665e0: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x2665e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2665e4: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2665E4u;
    {
        const bool branch_taken_0x2665e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665e4) {
            ctx->pc = 0x2665E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2665E4u;
            // 0x2665e8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2666A0u;
            goto label_2666a0;
        }
    }
    ctx->pc = 0x2665ECu;
    // 0x2665ec: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x2665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x2665f0: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x2665f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2665f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2665F4u;
    {
        const bool branch_taken_0x2665f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665f4) {
            ctx->pc = 0x26660Cu;
            goto label_26660c;
        }
    }
    ctx->pc = 0x2665FCu;
label_2665fc:
    // 0x2665fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2665FCu;
    {
        const bool branch_taken_0x2665fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665FCu;
        // 0x266600: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665fc) {
            ctx->pc = 0x2666A0u;
            goto label_2666a0;
        }
    }
    ctx->pc = 0x266604u;
label_266604:
    // 0x266604: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x266604u;
    {
        const bool branch_taken_0x266604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266604u;
        // 0x266608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266604) {
            ctx->pc = 0x2666A0u;
            goto label_2666a0;
        }
    }
    ctx->pc = 0x26660Cu;
label_26660c:
    // 0x26660c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26660Cu;
    SET_GPR_U32(ctx, 31, 0x266614u);
    ctx->pc = 0x266610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26660Cu;
    // 0x266610: 0x96a40004  lhu         $a0, 0x4($s5) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x26660Cu, 0x266614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266614u;
label_266614:
    // 0x266614: 0x16420022  bne         $s2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x266614u;
    {
        const bool branch_taken_0x266614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x266614) {
            ctx->pc = 0x2666A0u;
            goto label_2666a0;
        }
    }
    ctx->pc = 0x26661Cu;
    // 0x26661c: 0x1bc0001f  blez        $fp, . + 4 + (0x1F << 2)
    ctx->pc = 0x26661Cu;
    {
        const bool branch_taken_0x26661c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x266620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26661Cu;
        // 0x266620: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26661c) {
            ctx->pc = 0x26669Cu;
            goto label_26669c;
        }
    }
    ctx->pc = 0x266624u;
    // 0x266624: 0x0  nop
    ctx->pc = 0x266624u;
    // NOP
label_266628:
    // 0x266628: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x266628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26662c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x266630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266634: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x266634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266638: 0xc09927e  jal         func_2649F8
    ctx->pc = 0x266638u;
    SET_GPR_U32(ctx, 31, 0x266640u);
    ctx->pc = 0x26663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266638u;
    // 0x26663c: 0x24080402  addiu       $t0, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2649F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2649F8u, 0x266638u, 0x266640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266640u;
label_266640:
    // 0x266640: 0x440ffee  bltz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x266640u;
    {
        const bool branch_taken_0x266640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266640u;
        // 0x266644: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266640) {
            ctx->pc = 0x2665FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2665fc;
        }
    }
    ctx->pc = 0x266648u;
    // 0x266648: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x266648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x26664c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x26664cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266650: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x266650u;
    {
        const bool branch_taken_0x266650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266650u;
        // 0x266654: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266650) {
            ctx->pc = 0x2666A0u;
            goto label_2666a0;
        }
    }
    ctx->pc = 0x266658u;
    // 0x266658: 0xc099322  jal         func_264C88
    ctx->pc = 0x266658u;
    SET_GPR_U32(ctx, 31, 0x266660u);
    ctx->pc = 0x26665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266658u;
    // 0x26665c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C88u, 0x266658u, 0x266660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266660u;
label_266660:
    // 0x266660: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x266660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x266664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266668: 0xc099322  jal         func_264C88
    ctx->pc = 0x266668u;
    SET_GPR_U32(ctx, 31, 0x266670u);
    ctx->pc = 0x26666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266668u;
    // 0x26666c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C88u, 0x266668u, 0x266670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266670u;
label_266670:
    // 0x266670: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x266670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x266674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266678: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x266678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26667c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266680: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x266680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266684: 0xc099900  jal         func_266400
    ctx->pc = 0x266684u;
    SET_GPR_U32(ctx, 31, 0x26668Cu);
    ctx->pc = 0x266688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266684u;
    // 0x266688: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266400u, 0x266684u, 0x26668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26668Cu;
label_26668c:
    // 0x26668c: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x26668Cu;
    {
        const bool branch_taken_0x26668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26668Cu;
        // 0x266690: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26668c) {
            ctx->pc = 0x266604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266604;
        }
    }
    ctx->pc = 0x266694u;
    // 0x266694: 0x1c40ffe4  bgtz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x266694u;
    {
        const bool branch_taken_0x266694 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x266698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266694u;
        // 0x266698: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266694) {
            ctx->pc = 0x266628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266628;
        }
    }
    ctx->pc = 0x26669Cu;
label_26669c:
    // 0x26669c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26669cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2666a0:
    // 0x2666a0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2666A0u;
    {
        const bool branch_taken_0x2666a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666A0u;
        // 0x2666a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666a0) {
            ctx->pc = 0x2666B4u;
            goto label_2666b4;
        }
    }
    ctx->pc = 0x2666A8u;
    // 0x2666a8: 0xc098560  jal         func_261580
    ctx->pc = 0x2666A8u;
    SET_GPR_U32(ctx, 31, 0x2666B0u);
    ctx->pc = 0x2666ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2666A8u;
    // 0x2666ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2666A8u, 0x2666B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2666B0u;
label_2666b0:
    // 0x2666b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2666b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2666b4:
    // 0x2666b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2666b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2666b8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2666b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2666bc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2666bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2666c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2666c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2666c4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2666c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2666c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2666c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2666cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2666ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2666d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2666d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2666d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2666d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2666d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2666d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2666dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2666DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666DCu;
        // 0x2666e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666E4u;
    // 0x2666e4: 0x0  nop
    ctx->pc = 0x2666e4u;
    // NOP
    if (ctx->pc == 0x2666e4u) { ctx->pc = 0x2666e8u; }
}
