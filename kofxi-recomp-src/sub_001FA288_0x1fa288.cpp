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

// Function: sub_001FA288
// Address: 0x1fa288 - 0x1fa3f0
void sub_001FA288_0x1fa288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA288_0x1fa288");
#endif

    switch (ctx->pc) {
        case 0x1fa2d4u: goto label_1fa2d4;
        case 0x1fa2ecu: goto label_1fa2ec;
        case 0x1fa2fcu: goto label_1fa2fc;
        case 0x1fa33cu: goto label_1fa33c;
        case 0x1fa350u: goto label_1fa350;
        case 0x1fa3c8u: goto label_1fa3c8;
        default: break;
    }

    ctx->pc = 0x1fa288u;

    // 0x1fa288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa28c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fa28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fa290: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fa290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fa294: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fa294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fa298: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fa298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1fa29c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1fa29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1fa2a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fa2a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fa2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fa2a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fa2ac: 0x8eb03708  lw          $s0, 0x3708($s5)
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14088)));
    // 0x1fa2b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa2b4: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x1fa2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fa2b8: 0x261408a0  addiu       $s4, $s0, 0x8A0
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x1fa2bc: 0x26110ad0  addiu       $s1, $s0, 0xAD0
    ctx->pc = 0x1fa2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x1fa2c0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FA2C0u;
    {
        const bool branch_taken_0x1fa2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2C0u;
        // 0x1fa2c4: 0x26120d0c  addiu       $s2, $s0, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2c0) {
            ctx->pc = 0x1FA3C8u;
            goto label_1fa3c8;
        }
    }
    ctx->pc = 0x1FA2C8u;
    // 0x1fa2c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2cc: 0xc07e8fc  jal         func_1FA3F0
    ctx->pc = 0x1FA2CCu;
    SET_GPR_U32(ctx, 31, 0x1FA2D4u);
    ctx->pc = 0x1FA2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2CCu;
    // 0x1fa2d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA3F0u, 0x1FA2CCu, 0x1FA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2D4u;
label_1fa2d4:
    // 0x1fa2d4: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FA2D4u;
    {
        const bool branch_taken_0x1fa2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2d4) {
            ctx->pc = 0x1FA2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2D4u;
            // 0x1fa2d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA3CCu;
            goto label_1fa3cc;
        }
    }
    ctx->pc = 0x1FA2DCu;
    // 0x1fa2dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fa2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2e4: 0xc07e91c  jal         func_1FA470
    ctx->pc = 0x1FA2E4u;
    SET_GPR_U32(ctx, 31, 0x1FA2ECu);
    ctx->pc = 0x1FA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2E4u;
    // 0x1fa2e8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA470u, 0x1FA2E4u, 0x1FA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2ECu;
label_1fa2ec:
    // 0x1fa2ec: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1FA2ECu;
    {
        const bool branch_taken_0x1fa2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2ec) {
            ctx->pc = 0x1FA2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2ECu;
            // 0x1fa2f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA3CCu;
            goto label_1fa3cc;
        }
    }
    ctx->pc = 0x1FA2F4u;
    // 0x1fa2f4: 0xc07e93c  jal         func_1FA4F0
    ctx->pc = 0x1FA2F4u;
    SET_GPR_U32(ctx, 31, 0x1FA2FCu);
    ctx->pc = 0x1FA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2F4u;
    // 0x1fa2f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA4F0u, 0x1FA2F4u, 0x1FA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2FCu;
label_1fa2fc:
    // 0x1fa2fc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA2FCu;
    {
        const bool branch_taken_0x1fa2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2FCu;
        // 0x1fa300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2fc) {
            ctx->pc = 0x1FA388u;
            goto label_1fa388;
        }
    }
    ctx->pc = 0x1FA304u;
    // 0x1fa304: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1fa304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1fa308: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fa308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fa30c: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FA30Cu;
    {
        const bool branch_taken_0x1fa30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa30c) {
            ctx->pc = 0x1FA310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA30Cu;
            // 0x1fa310: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA37Cu;
            goto label_1fa37c;
        }
    }
    ctx->pc = 0x1FA314u;
    // 0x1fa314: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1fa314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1fa318: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA318u;
    {
        const bool branch_taken_0x1fa318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fa318) {
            ctx->pc = 0x1FA348u;
            goto label_1fa348;
        }
    }
    ctx->pc = 0x1FA320u;
    // 0x1fa320: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x1fa324: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA324u;
    {
        const bool branch_taken_0x1fa324 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA324u;
        // 0x1fa328: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa324) {
            ctx->pc = 0x1FA33Cu;
            goto label_1fa33c;
        }
    }
    ctx->pc = 0x1FA32Cu;
    // 0x1fa32c: 0x58c00013  blezl       $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA32Cu;
    {
        const bool branch_taken_0x1fa32c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1fa32c) {
            ctx->pc = 0x1FA330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA32Cu;
            // 0x1fa330: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA37Cu;
            goto label_1fa37c;
        }
    }
    ctx->pc = 0x1FA334u;
    // 0x1fa334: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FA334u;
    SET_GPR_U32(ctx, 31, 0x1FA33Cu);
    ctx->pc = 0x1FA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA334u;
    // 0x1fa338: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FA334u, 0x1FA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA33Cu;
label_1fa33c:
    // 0x1fa33c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FA33Cu;
    {
        const bool branch_taken_0x1fa33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA33Cu;
        // 0x1fa340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa33c) {
            ctx->pc = 0x1FA37Cu;
            goto label_1fa37c;
        }
    }
    ctx->pc = 0x1FA344u;
    // 0x1fa344: 0x0  nop
    ctx->pc = 0x1fa344u;
    // NOP
label_1fa348:
    // 0x1fa348: 0xc07b51c  jal         func_1ED470
    ctx->pc = 0x1FA348u;
    SET_GPR_U32(ctx, 31, 0x1FA350u);
    ctx->pc = 0x1FA34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA348u;
    // 0x1fa34c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED470u, 0x1FA348u, 0x1FA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA350u;
label_1fa350:
    // 0x1fa350: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1fa350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1fa354: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA354u;
    {
        const bool branch_taken_0x1fa354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa354) {
            ctx->pc = 0x1FA358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA354u;
            // 0x1fa358: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA37Cu;
            goto label_1fa37c;
        }
    }
    ctx->pc = 0x1FA35Cu;
    // 0x1fa35c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fa35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fa360: 0x240307e2  addiu       $v1, $zero, 0x7E2
    ctx->pc = 0x1fa360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2018));
    // 0x1fa364: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA364u;
    {
        const bool branch_taken_0x1fa364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa364) {
            ctx->pc = 0x1FA368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA364u;
            // 0x1fa368: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA36Cu;
            goto label_1fa36c;
        }
    }
    ctx->pc = 0x1FA36Cu;
label_1fa36c:
    // 0x1fa36c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1fa36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1fa370: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1fa370u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fa374: 0x1012  mflo        $v0
    ctx->pc = 0x1fa374u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fa378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa37c:
    // 0x1fa37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FA37Cu;
    {
        const bool branch_taken_0x1fa37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA37Cu;
        // 0x1fa380: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa37c) {
            ctx->pc = 0x1FA3B0u;
            goto label_1fa3b0;
        }
    }
    ctx->pc = 0x1FA384u;
    // 0x1fa384: 0x0  nop
    ctx->pc = 0x1fa384u;
    // NOP
label_1fa388:
    // 0x1fa388: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fa38c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA38Cu;
    {
        const bool branch_taken_0x1fa38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA38Cu;
        // 0x1fa390: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa38c) {
            ctx->pc = 0x1FA3A0u;
            goto label_1fa3a0;
        }
    }
    ctx->pc = 0x1FA394u;
    // 0x1fa394: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fa394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fa398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA398u;
    {
        const bool branch_taken_0x1fa398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA398u;
        // 0x1fa39c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa398) {
            ctx->pc = 0x1FA3B0u;
            goto label_1fa3b0;
        }
    }
    ctx->pc = 0x1FA3A0u;
label_1fa3a0:
    // 0x1fa3a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA3A0u;
    {
        const bool branch_taken_0x1fa3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3a0) {
            ctx->pc = 0x1FA3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA3A0u;
            // 0x1fa3a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA3CCu;
            goto label_1fa3cc;
        }
    }
    ctx->pc = 0x1FA3A8u;
    // 0x1fa3a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1fa3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fa3ac: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1fa3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fa3b0:
    // 0x1fa3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa3b4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1fa3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1fa3b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fa3bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fa3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3c0: 0xc07eb08  jal         func_1FAC20
    ctx->pc = 0x1FA3C0u;
    SET_GPR_U32(ctx, 31, 0x1FA3C8u);
    ctx->pc = 0x1FA3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3C0u;
    // 0x1fa3c4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC20u, 0x1FA3C0u, 0x1FA3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3C8u;
label_1fa3c8:
    // 0x1fa3c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fa3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa3cc:
    // 0x1fa3cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fa3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa3d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fa3d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa3d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fa3d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fa3d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fa3d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa3dc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1fa3dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa3e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3E4u;
        // 0x1fa3e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA3ECu;
    // 0x1fa3ec: 0x0  nop
    ctx->pc = 0x1fa3ecu;
    // NOP
    if (ctx->pc == 0x1fa3ecu) { ctx->pc = 0x1fa3f0u; }
}
