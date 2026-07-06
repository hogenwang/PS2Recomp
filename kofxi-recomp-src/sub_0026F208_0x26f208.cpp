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

// Function: sub_0026F208
// Address: 0x26f208 - 0x26f3e8
void sub_0026F208_0x26f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F208_0x26f208");
#endif

    switch (ctx->pc) {
        case 0x26f230u: goto label_26f230;
        case 0x26f244u: goto label_26f244;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f308u: goto label_26f308;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f360u: goto label_26f360;
        default: break;
    }

    ctx->pc = 0x26f208u;

    // 0x26f208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f214: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26F214u;
    {
        const bool branch_taken_0x26f214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F214u;
        // 0x26f218: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f214) {
            ctx->pc = 0x26F258u;
            goto label_26f258;
        }
    }
    ctx->pc = 0x26F21Cu;
    // 0x26f21c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f220: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F220u;
    {
        const bool branch_taken_0x26f220 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x26f220) {
            ctx->pc = 0x26F224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F220u;
            // 0x26f224: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F234u;
            goto label_26f234;
        }
    }
    ctx->pc = 0x26F228u;
    // 0x26f228: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x26F228u;
    SET_GPR_U32(ctx, 31, 0x26F230u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x26F228u, 0x26F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F230u;
label_26f230:
    // 0x26f230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26f234:
    // 0x26f234: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F234u;
    {
        const bool branch_taken_0x26f234 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x26f234) {
            ctx->pc = 0x26F238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F234u;
            // 0x26f238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F248u;
            goto label_26f248;
        }
    }
    ctx->pc = 0x26F23Cu;
    // 0x26f23c: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26F23Cu;
    SET_GPR_U32(ctx, 31, 0x26F244u);
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x26F23Cu, 0x26F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F244u;
label_26f244:
    // 0x26f244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f248:
    // 0x26f248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f250: 0x8098560  j           func_261580
    ctx->pc = 0x26F250u;
    ctx->pc = 0x26F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F250u;
    // 0x26f254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x26F258u;
label_26f258:
    // 0x26f258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f260: 0x3e00008  jr          $ra
    ctx->pc = 0x26F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F260u;
        // 0x26f264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F268u;
    // 0x26f268: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26f26c: 0x3c0201c2  lui         $v0, 0x1C2
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)450 << 16));
    // 0x26f270: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26f270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26f274: 0x3c0301c2  lui         $v1, 0x1C2
    ctx->pc = 0x26f274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)450 << 16));
    // 0x26f278: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26f27c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26f27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f280: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26f284: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26f284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f288: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26f28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f290: 0x24508b58  addiu       $s0, $v0, -0x74A8
    ctx->pc = 0x26f290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937432));
    // 0x26f294: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x26f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26f298: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26f29c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x26f29cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2a0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26f2a4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x26f2a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2a8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26f2ac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x26f2acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26f2b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x26f2b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2b8: 0x24728bb8  addiu       $s2, $v1, -0x7448
    ctx->pc = 0x26f2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937528));
    // 0x26f2bc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26f2c0: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x26f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x26f2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2cc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26F2CCu;
    SET_GPR_U32(ctx, 31, 0x26F2D4u);
    ctx->pc = 0x26F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2CCu;
    // 0x26f2d0: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26F2CCu, 0x26F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2D4u;
label_26f2d4:
    // 0x26f2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26F2DCu;
    SET_GPR_U32(ctx, 31, 0x26F2E4u);
    ctx->pc = 0x26F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2DCu;
    // 0x26f2e0: 0x3406af20  ori         $a2, $zero, 0xAF20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26F2DCu, 0x26F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2E4u;
label_26f2e4:
    // 0x26f2e4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26f2e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2ec: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F2ECu;
    SET_GPR_U32(ctx, 31, 0x26F2F4u);
    ctx->pc = 0x26F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2ECu;
    // 0x26f2f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26F2ECu, 0x26F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2F4u;
label_26f2f4:
    // 0x26f2f4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F2F4u;
    {
        const bool branch_taken_0x26f2f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2F4u;
        // 0x26f2f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2f4) {
            ctx->pc = 0x26F308u;
            goto label_26f308;
        }
    }
    ctx->pc = 0x26F2FCu;
    // 0x26f2fc: 0x26447714  addiu       $a0, $s2, 0x7714
    ctx->pc = 0x26f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 30484));
    // 0x26f300: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F300u;
    SET_GPR_U32(ctx, 31, 0x26F308u);
    ctx->pc = 0x26F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F300u;
    // 0x26f304: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26F300u, 0x26F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F308u;
label_26f308:
    // 0x26f308: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F308u;
    {
        const bool branch_taken_0x26f308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F308u;
        // 0x26f30c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f308) {
            ctx->pc = 0x26F31Cu;
            goto label_26f31c;
        }
    }
    ctx->pc = 0x26F310u;
    // 0x26f310: 0x26447814  addiu       $a0, $s2, 0x7814
    ctx->pc = 0x26f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 30740));
    // 0x26f314: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F314u;
    SET_GPR_U32(ctx, 31, 0x26F31Cu);
    ctx->pc = 0x26F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F314u;
    // 0x26f318: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26F314u, 0x26F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F31Cu;
label_26f31c:
    // 0x26f31c: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F31Cu;
    {
        const bool branch_taken_0x26f31c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F31Cu;
        // 0x26f320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f31c) {
            ctx->pc = 0x26F328u;
            goto label_26f328;
        }
    }
    ctx->pc = 0x26F324u;
    // 0x26f324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f328:
    // 0x26f328: 0xae427e44  sw          $v0, 0x7E44($s2)
    ctx->pc = 0x26f328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32324), GPR_U32(ctx, 2));
    // 0x26f32c: 0x3c0201c2  lui         $v0, 0x1C2
    ctx->pc = 0x26f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)450 << 16));
    // 0x26f330: 0x3c0301c2  lui         $v1, 0x1C2
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)450 << 16));
    // 0x26f334: 0x24508b58  addiu       $s0, $v0, -0x74A8
    ctx->pc = 0x26f334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937432));
    // 0x26f338: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f33c: 0x24628bb8  addiu       $v0, $v1, -0x7448
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937528));
    // 0x26f340: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f344: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x26f344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x26f348: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26f348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f34c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x26f34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f354: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x26f354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f358: 0xc09bcfa  jal         func_26F3E8
    ctx->pc = 0x26F358u;
    SET_GPR_U32(ctx, 31, 0x26F360u);
    ctx->pc = 0x26F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F358u;
    // 0x26f35c: 0xae110040  sw          $s1, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F3E8u, 0x26F358u, 0x26F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F360u;
label_26f360:
    // 0x26f360: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F360u;
    {
        const bool branch_taken_0x26f360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F360u;
        // 0x26f364: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f360) {
            ctx->pc = 0x26F3BCu;
            goto label_26f3bc;
        }
    }
    ctx->pc = 0x26F368u;
    // 0x26f368: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x26f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26f36c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x26f370: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26F370u;
    {
        const bool branch_taken_0x26f370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F370u;
        // 0x26f374: 0x2882fffe  slti        $v0, $a0, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f370) {
            ctx->pc = 0x26F3ACu;
            goto label_26f3ac;
        }
    }
    ctx->pc = 0x26F378u;
    // 0x26f378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F378u;
    {
        const bool branch_taken_0x26f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F378u;
        // 0x26f37c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f378) {
            ctx->pc = 0x26F390u;
            goto label_26f390;
        }
    }
    ctx->pc = 0x26F380u;
    // 0x26f380: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F380u;
    {
        const bool branch_taken_0x26f380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F380u;
        // 0x26f384: 0x2402fc19  addiu       $v0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f380) {
            ctx->pc = 0x26F3B4u;
            goto label_26f3b4;
        }
    }
    ctx->pc = 0x26F388u;
    // 0x26f388: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26F388u;
    {
        const bool branch_taken_0x26f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F388u;
        // 0x26f38c: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f388) {
            ctx->pc = 0x26F3C0u;
            goto label_26f3c0;
        }
    }
    ctx->pc = 0x26F390u;
label_26f390:
    // 0x26f390: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x26f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26f394: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F394u;
    {
        const bool branch_taken_0x26f394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F394u;
        // 0x26f398: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f394) {
            ctx->pc = 0x26F3BCu;
            goto label_26f3bc;
        }
    }
    ctx->pc = 0x26F39Cu;
    // 0x26f39c: 0x14910007  bne         $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F39Cu;
    {
        const bool branch_taken_0x26f39c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x26F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F39Cu;
        // 0x26f3a0: 0x2402fc19  addiu       $v0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f39c) {
            ctx->pc = 0x26F3BCu;
            goto label_26f3bc;
        }
    }
    ctx->pc = 0x26F3A4u;
    // 0x26f3a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26F3A4u;
    {
        const bool branch_taken_0x26f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3A4u;
        // 0x26f3a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3a4) {
            ctx->pc = 0x26F3BCu;
            goto label_26f3bc;
        }
    }
    ctx->pc = 0x26F3ACu;
label_26f3ac:
    // 0x26f3ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F3ACu;
    {
        const bool branch_taken_0x26f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3ACu;
        // 0x26f3b0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3ac) {
            ctx->pc = 0x26F3B8u;
            goto label_26f3b8;
        }
    }
    ctx->pc = 0x26F3B4u;
label_26f3b4:
    // 0x26f3b4: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_26f3b8:
    // 0x26f3b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26f3bc:
    // 0x26f3bc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x26f3bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26f3c0:
    // 0x26f3c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x26f3c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f3c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26f3c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f3c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26f3c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f3cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26f3ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f3d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26f3d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f3d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26f3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f3d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26f3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f3dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26f3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3E0u;
        // 0x26f3e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F3E8u;
}
