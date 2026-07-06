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

// Function: sub_0010E3B8
// Address: 0x10e3b8 - 0x10e530
void sub_0010E3B8_0x10e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E3B8_0x10e3b8");
#endif

    switch (ctx->pc) {
        case 0x10e408u: goto label_10e408;
        case 0x10e438u: goto label_10e438;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e500u: goto label_10e500;
        default: break;
    }

    ctx->pc = 0x10e3b8u;

    // 0x10e3b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10e3bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10e3c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10e3c4: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x10e3c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x10e3c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10e3cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10e3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e3d4: 0x26b363d0  addiu       $s3, $s5, 0x63D0
    ctx->pc = 0x10e3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 25552));
    // 0x10e3d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e3dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10e3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e3e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10e3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10e3f4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x10e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10e3f8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x10E3F8u;
    {
        const bool branch_taken_0x10e3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F8u;
        // 0x10e3fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3f8) {
            ctx->pc = 0x10E504u;
            goto label_10e504;
        }
    }
    ctx->pc = 0x10E400u;
    // 0x10e400: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10E400u;
    SET_GPR_U32(ctx, 31, 0x10E408u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10E400u, 0x10E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E408u;
label_10e408:
    // 0x10e408: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10e408u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e40c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x10e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x10e410: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10e414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e418: 0x24426400  addiu       $v0, $v0, 0x6400
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
    // 0x10e41c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x10e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x10e420: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x10e420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10e424: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10e424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e428: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x10e428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x10e42c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10e42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10e430: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10e434: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x10e434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_10e438:
    // 0x10e438: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10e438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x10e43c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E43Cu;
    {
        const bool branch_taken_0x10e43c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x10e43c) {
            ctx->pc = 0x10E440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E43Cu;
            // 0x10e440: 0x26b063d0  addiu       $s0, $s5, 0x63D0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 25552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E488u;
            goto label_10e488;
        }
    }
    ctx->pc = 0x10E444u;
    // 0x10e444: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x10e444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e448: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E448u;
    {
        const bool branch_taken_0x10e448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x10E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E448u;
        // 0x10e44c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e448) {
            ctx->pc = 0x10E468u;
            goto label_10e468;
        }
    }
    ctx->pc = 0x10E450u;
    // 0x10e450: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x10e450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e454: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10e458: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x10e458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10e45c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E45Cu;
    {
        const bool branch_taken_0x10e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e45c) {
            ctx->pc = 0x10E484u;
            goto label_10e484;
        }
    }
    ctx->pc = 0x10E464u;
    // 0x10e464: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10e464u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_10e468:
    // 0x10e468: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10e468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10e46c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10e470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10e474: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10e478: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x10e478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10e47c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10E47Cu;
    {
        const bool branch_taken_0x10e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e47c) {
            ctx->pc = 0x10E438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e438;
        }
    }
    ctx->pc = 0x10E484u;
label_10e484:
    // 0x10e484: 0x26b063d0  addiu       $s0, $s5, 0x63D0
    ctx->pc = 0x10e484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 25552));
label_10e488:
    // 0x10e488: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x10e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10e48c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x10e490: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10e494: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x10e494u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x10e498: 0x8ea463d0  lw          $a0, 0x63D0($s5)
    ctx->pc = 0x10e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 25552)));
    // 0x10e49c: 0xc0437ec  jal         func_10DFB0
    ctx->pc = 0x10E49Cu;
    SET_GPR_U32(ctx, 31, 0x10E4A4u);
    ctx->pc = 0x10E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E49Cu;
    // 0x10e4a0: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFB0u, 0x10E49Cu, 0x10E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4A4u;
label_10e4a4:
    // 0x10e4a4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E4A4u;
    {
        const bool branch_taken_0x10e4a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e4a4) {
            ctx->pc = 0x10E4C8u;
            goto label_10e4c8;
        }
    }
    ctx->pc = 0x10E4ACu;
    // 0x10e4ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10e4b0: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E504u;
            goto label_10e504;
        }
    }
    ctx->pc = 0x10E4B8u;
    // 0x10e4b8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10E4B8u;
    SET_GPR_U32(ctx, 31, 0x10E4C0u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10E4B8u, 0x10E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4C0u;
label_10e4c0:
    // 0x10e4c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10E4C0u;
    {
        const bool branch_taken_0x10e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C0u;
        // 0x10e4c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4c0) {
            ctx->pc = 0x10E504u;
            goto label_10e504;
        }
    }
    ctx->pc = 0x10E4C8u;
label_10e4c8:
    // 0x10e4c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10e4cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E4CCu;
    {
        const bool branch_taken_0x10e4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4cc) {
            ctx->pc = 0x10E4F0u;
            goto label_10e4f0;
        }
    }
    ctx->pc = 0x10E4D4u;
    // 0x10e4d4: 0x0  nop
    ctx->pc = 0x10e4d4u;
    // NOP
label_10e4d8:
    // 0x10e4d8: 0x8e2463d0  lw          $a0, 0x63D0($s1)
    ctx->pc = 0x10e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25552)));
    // 0x10e4dc: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x10E4DCu;
    SET_GPR_U32(ctx, 31, 0x10E4E4u);
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x10E4DCu, 0x10E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4E4u;
label_10e4e4:
    // 0x10e4e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10e4e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10E4E8u;
    {
        const bool branch_taken_0x10e4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e4e8) {
            ctx->pc = 0x10E4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e4d8;
        }
    }
    ctx->pc = 0x10E4F0u;
label_10e4f0:
    // 0x10e4f0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E4F0u;
    {
        const bool branch_taken_0x10e4f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f0) {
            ctx->pc = 0x10E504u;
            goto label_10e504;
        }
    }
    ctx->pc = 0x10E4F8u;
    // 0x10e4f8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10E4F8u;
    SET_GPR_U32(ctx, 31, 0x10E500u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10E4F8u, 0x10E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E500u;
label_10e500:
    // 0x10e500: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10e500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e504:
    // 0x10e504: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10e504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10e508: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10e50c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10e50cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e510: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10e510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e514: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e51c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e524: 0x3e00008  jr          $ra
    ctx->pc = 0x10E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E524u;
        // 0x10e528: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E52Cu;
    // 0x10e52c: 0x0  nop
    ctx->pc = 0x10e52cu;
    // NOP
    if (ctx->pc == 0x10e52cu) { ctx->pc = 0x10e530u; }
}
