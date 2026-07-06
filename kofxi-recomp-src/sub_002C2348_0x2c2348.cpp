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

// Function: sub_002C2348
// Address: 0x2c2348 - 0x2c241c
void sub_002C2348_0x2c2348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2348_0x2c2348");
#endif

    switch (ctx->pc) {
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23b0u: goto label_2c23b0;
        case 0x2c23dcu: goto label_2c23dc;
        default: break;
    }

    ctx->pc = 0x2c2348u;

    // 0x2c2348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c2348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c234c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c2350: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c2350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2354: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2358: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c2358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c235c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c235cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c2364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2368: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c236c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C236Cu;
    {
        const bool branch_taken_0x2c236c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C236Cu;
        // 0x2c2370: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c236c) {
            ctx->pc = 0x2C23B8u;
            goto label_2c23b8;
        }
    }
    ctx->pc = 0x2C2374u;
    // 0x2c2374: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2374u;
    {
        const bool branch_taken_0x2c2374 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2374) {
            ctx->pc = 0x2C238Cu;
            goto label_2c238c;
        }
    }
    ctx->pc = 0x2C237Cu;
    // 0x2c237c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C237Cu;
    {
        const bool branch_taken_0x2c237c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C237Cu;
        // 0x2c2380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c237c) {
            ctx->pc = 0x2C23A0u;
            goto label_2c23a0;
        }
    }
    ctx->pc = 0x2C2384u;
    // 0x2c2384: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C2384u;
    {
        const bool branch_taken_0x2c2384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2384u;
        // 0x2c2388: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2384) {
            ctx->pc = 0x2C23F4u;
            goto label_2c23f4;
        }
    }
    ctx->pc = 0x2C238Cu;
label_2c238c:
    // 0x2c238c: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C238Cu;
    {
        const bool branch_taken_0x2c238c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c238c) {
            ctx->pc = 0x2C2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C238Cu;
            // 0x2c2390: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C23A4u;
            goto label_2c23a4;
        }
    }
    ctx->pc = 0x2C2394u;
    // 0x2c2394: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2C2394u;
    SET_GPR_U32(ctx, 31, 0x2C239Cu);
    ctx->pc = 0x2C2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2394u;
    // 0x2c2398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2C2394u, 0x2C239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C239Cu;
label_2c239c:
    // 0x2c239c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c23a0:
    // 0x2c23a0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2c23a4:
    // 0x2c23a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c23a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23a8: 0xc0a06b2  jal         func_281AC8
    ctx->pc = 0x2C23A8u;
    SET_GPR_U32(ctx, 31, 0x2C23B0u);
    ctx->pc = 0x2C23ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23A8u;
    // 0x2c23ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281AC8u, 0x2C23A8u, 0x2C23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23B0u;
label_2c23b0:
    // 0x2c23b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C23B0u;
    {
        const bool branch_taken_0x2c23b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23B0u;
        // 0x2c23b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23b0) {
            ctx->pc = 0x2C23C0u;
            goto label_2c23c0;
        }
    }
    ctx->pc = 0x2C23B8u;
label_2c23b8:
    // 0x2c23b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C23B8u;
    {
        const bool branch_taken_0x2c23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23B8u;
        // 0x2c23bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23b8) {
            ctx->pc = 0x2C23F0u;
            goto label_2c23f0;
        }
    }
    ctx->pc = 0x2C23C0u;
label_2c23c0:
    // 0x2c23c0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C23C0u;
    {
        const bool branch_taken_0x2c23c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23C0u;
        // 0x2c23c4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23c0) {
            ctx->pc = 0x2C23ECu;
            goto label_2c23ec;
        }
    }
    ctx->pc = 0x2C23C8u;
    // 0x2c23c8: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C23C8u;
    {
        const bool branch_taken_0x2c23c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c23c8) {
            ctx->pc = 0x2C23CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C23C8u;
            // 0x2c23cc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C23E8u;
            goto label_2c23e8;
        }
    }
    ctx->pc = 0x2C23D0u;
    // 0x2c23d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23d4: 0xc0a0408  jal         func_281020
    ctx->pc = 0x2C23D4u;
    SET_GPR_U32(ctx, 31, 0x2C23DCu);
    ctx->pc = 0x2C23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23D4u;
    // 0x2c23d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281020u, 0x2C23D4u, 0x2C23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23DCu;
label_2c23dc:
    // 0x2c23dc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2c23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2c23e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C23E0u;
    {
        const bool branch_taken_0x2c23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E0u;
        // 0x2c23e4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23e0) {
            ctx->pc = 0x2C23ECu;
            goto label_2c23ec;
        }
    }
    ctx->pc = 0x2C23E8u;
label_2c23e8:
    // 0x2c23e8: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2c23e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_2c23ec:
    // 0x2c23ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c23f0:
    // 0x2c23f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c23f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c23f4:
    // 0x2c23f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c23f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c23f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c23f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c23fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c23fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2404: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2404u;
        // 0x2c2408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C240Cu;
    // 0x2c240c: 0x0  nop
    ctx->pc = 0x2c240cu;
    // NOP
    // 0x2c2410: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2410u;
    {
        const bool branch_taken_0x2c2410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2410u;
        // 0x2c2414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2410) {
            ctx->pc = 0x2C2420u;
            return;
        }
    }
    ctx->pc = 0x2C2418u;
    // 0x2c2418: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2420u;
}
