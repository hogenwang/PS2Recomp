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

// Function: sub_0026D4A8
// Address: 0x26d4a8 - 0x26d5f8
void sub_0026D4A8_0x26d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D4A8_0x26d4a8");
#endif

    switch (ctx->pc) {
        case 0x26d528u: goto label_26d528;
        case 0x26d538u: goto label_26d538;
        case 0x26d560u: goto label_26d560;
        case 0x26d570u: goto label_26d570;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5d4u: goto label_26d5d4;
        default: break;
    }

    ctx->pc = 0x26d4a8u;

    // 0x26d4a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d4ac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x26d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26d4b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26d4b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26d4b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26d4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d4bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26d4c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26d4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d4c8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26d4cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26d4d0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x26d4d0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x26d4d4: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26d4d8: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x26d4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x26d4dc: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x26D4DCu;
    {
        const bool branch_taken_0x26d4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x26D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4DCu;
        // 0x26d4e0: 0x82880a  movz        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4dc) {
            ctx->pc = 0x26D54Cu;
            goto label_26d54c;
        }
    }
    ctx->pc = 0x26D4E4u;
    // 0x26d4e4: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x26d4e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D4E8u;
    {
        const bool branch_taken_0x26d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4E8u;
        // 0x26d4ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4e8) {
            ctx->pc = 0x26D500u;
            goto label_26d500;
        }
    }
    ctx->pc = 0x26D4F0u;
    // 0x26d4f0: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D4F0u;
    {
        const bool branch_taken_0x26d4f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F0u;
        // 0x26d4f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4f0) {
            ctx->pc = 0x26D514u;
            goto label_26d514;
        }
    }
    ctx->pc = 0x26D4F8u;
    // 0x26d4f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26D4F8u;
    {
        const bool branch_taken_0x26d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F8u;
        // 0x26d4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4f8) {
            ctx->pc = 0x26D5DCu;
            goto label_26d5dc;
        }
    }
    ctx->pc = 0x26D500u;
label_26d500:
    // 0x26d500: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x26d504: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26D504u;
    {
        const bool branch_taken_0x26d504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D504u;
        // 0x26d508: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d504) {
            ctx->pc = 0x26D594u;
            goto label_26d594;
        }
    }
    ctx->pc = 0x26D50Cu;
    // 0x26d50c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26D50Cu;
    {
        const bool branch_taken_0x26d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D50Cu;
        // 0x26d510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d50c) {
            ctx->pc = 0x26D5DCu;
            goto label_26d5dc;
        }
    }
    ctx->pc = 0x26D514u;
label_26d514:
    // 0x26d514: 0x267000d9  addiu       $s0, $s3, 0xD9
    ctx->pc = 0x26d514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 217));
    // 0x26d518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d520: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D520u;
    SET_GPR_U32(ctx, 31, 0x26D528u);
    ctx->pc = 0x26D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D520u;
    // 0x26d524: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26D520u, 0x26D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D528u;
label_26d528:
    // 0x26d528: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26d52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d530: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D530u;
    SET_GPR_U32(ctx, 31, 0x26D538u);
    ctx->pc = 0x26D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D530u;
    // 0x26d534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D530u, 0x26D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D538u;
label_26d538:
    // 0x26d538: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x26d53c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d540: 0xa06000d9  sb          $zero, 0xD9($v1)
    ctx->pc = 0x26d540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d544: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26D544u;
    {
        const bool branch_taken_0x26d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D544u;
        // 0x26d548: 0x24a59370  addiu       $a1, $a1, -0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d544) {
            ctx->pc = 0x26D580u;
            goto label_26d580;
        }
    }
    ctx->pc = 0x26D54Cu;
label_26d54c:
    // 0x26d54c: 0x267001d9  addiu       $s0, $s3, 0x1D9
    ctx->pc = 0x26d54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 473));
    // 0x26d550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d558: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D558u;
    SET_GPR_U32(ctx, 31, 0x26D560u);
    ctx->pc = 0x26D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D558u;
    // 0x26d55c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26D558u, 0x26D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D560u;
label_26d560:
    // 0x26d560: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x26d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26d564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d568: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D568u;
    SET_GPR_U32(ctx, 31, 0x26D570u);
    ctx->pc = 0x26D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D568u;
    // 0x26d56c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D568u, 0x26D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D570u;
label_26d570:
    // 0x26d570: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x26d574: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d578: 0xa06001d9  sb          $zero, 0x1D9($v1)
    ctx->pc = 0x26d578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 473), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d57c: 0x24a59390  addiu       $a1, $a1, -0x6C70
    ctx->pc = 0x26d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939536));
label_26d580:
    // 0x26d580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d584: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D584u;
    SET_GPR_U32(ctx, 31, 0x26D58Cu);
    ctx->pc = 0x26D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D584u;
    // 0x26d588: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D584u, 0x26D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D58Cu;
label_26d58c:
    // 0x26d58c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26D58Cu;
    {
        const bool branch_taken_0x26d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D58Cu;
        // 0x26d590: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d58c) {
            ctx->pc = 0x26D5D8u;
            goto label_26d5d8;
        }
    }
    ctx->pc = 0x26D594u;
label_26d594:
    // 0x26d594: 0x267002d9  addiu       $s0, $s3, 0x2D9
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 729));
    // 0x26d598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26D5A0u;
    SET_GPR_U32(ctx, 31, 0x26D5A8u);
    ctx->pc = 0x26D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5A0u;
    // 0x26d5a4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26D5A0u, 0x26D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5A8u;
label_26d5a8:
    // 0x26d5a8: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x26d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26d5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5b0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D5B0u;
    SET_GPR_U32(ctx, 31, 0x26D5B8u);
    ctx->pc = 0x26D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5B0u;
    // 0x26d5b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26D5B0u, 0x26D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5B8u;
label_26d5b8:
    // 0x26d5b8: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x26d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x26d5bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d5c0: 0xa06002d9  sb          $zero, 0x2D9($v1)
    ctx->pc = 0x26d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 729), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d5c4: 0x24a593b0  addiu       $a1, $a1, -0x6C50
    ctx->pc = 0x26d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939568));
    // 0x26d5c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5cc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D5CCu;
    SET_GPR_U32(ctx, 31, 0x26D5D4u);
    ctx->pc = 0x26D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5CCu;
    // 0x26d5d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D5CCu, 0x26D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5D4u;
label_26d5d4:
    // 0x26d5d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26d5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26d5d8:
    // 0x26d5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d5dc:
    // 0x26d5dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26d5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d5e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26d5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d5e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26d5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5ECu;
        // 0x26d5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D5F4u;
    // 0x26d5f4: 0x0  nop
    ctx->pc = 0x26d5f4u;
    // NOP
}
