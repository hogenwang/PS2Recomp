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

// Function: sub_0025E380
// Address: 0x25e380 - 0x25e4a0
void sub_0025E380_0x25e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E380_0x25e380");
#endif

    switch (ctx->pc) {
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        default: break;
    }

    ctx->pc = 0x25e380u;

label_25e380:
    // 0x25e380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25e384:
    // 0x25e384: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_25e388:
    // 0x25e388: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_25e38c:
    // 0x25e38c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25e38cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e390:
    // 0x25e390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25e394:
    // 0x25e394: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25e394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e398:
    // 0x25e398: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_25e39c:
    // 0x25e39c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e3a0:
    // 0x25e3a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_25e3a4:
    // 0x25e3a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_25e3a8:
    // 0x25e3a8: 0xc09728e  jal         func_25CA38
label_25e3ac:
    if (ctx->pc == 0x25E3ACu) {
        ctx->pc = 0x25E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3A8u;
        // 0x25e3ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3B0u;
        goto label_25e3b0;
    }
    ctx->pc = 0x25E3A8u;
    SET_GPR_U32(ctx, 31, 0x25E3B0u);
    ctx->pc = 0x25E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3A8u;
    // 0x25e3ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25E3A8u, 0x25E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3B0u;
label_25e3b0:
    // 0x25e3b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25e3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e3b4:
    // 0x25e3b4: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
label_25e3b8:
    if (ctx->pc == 0x25E3B8u) {
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3BCu;
        goto label_25e3bc;
    }
    ctx->pc = 0x25E3B4u;
    {
        const bool branch_taken_0x25e3b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b4) {
            ctx->pc = 0x25E478u;
            goto label_25e478;
        }
    }
    ctx->pc = 0x25E3BCu;
label_25e3bc:
    // 0x25e3bc: 0xc08c0ca  jal         func_230328
label_25e3c0:
    if (ctx->pc == 0x25E3C0u) {
        ctx->pc = 0x25E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3BCu;
        // 0x25e3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3C4u;
        goto label_25e3c4;
    }
    ctx->pc = 0x25E3BCu;
    SET_GPR_U32(ctx, 31, 0x25E3C4u);
    ctx->pc = 0x25E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3BCu;
    // 0x25e3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25E3BCu, 0x25E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3C4u;
label_25e3c4:
    // 0x25e3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e3c8:
    // 0x25e3c8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_25e3cc:
    if (ctx->pc == 0x25E3CCu) {
        ctx->pc = 0x25E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3C8u;
        // 0x25e3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3D0u;
        goto label_25e3d0;
    }
    ctx->pc = 0x25E3C8u;
    {
        const bool branch_taken_0x25e3c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3C8u;
        // 0x25e3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3c8) {
            ctx->pc = 0x25E3D8u;
            goto label_25e3d8;
        }
    }
    ctx->pc = 0x25E3D0u;
label_25e3d0:
    // 0x25e3d0: 0x10000024  b           . + 4 + (0x24 << 2)
label_25e3d4:
    if (ctx->pc == 0x25E3D4u) {
        ctx->pc = 0x25E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D0u;
        // 0x25e3d4: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3D8u;
        goto label_25e3d8;
    }
    ctx->pc = 0x25E3D0u;
    {
        const bool branch_taken_0x25e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D0u;
        // 0x25e3d4: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3d0) {
            ctx->pc = 0x25E464u;
            goto label_25e464;
        }
    }
    ctx->pc = 0x25E3D8u;
label_25e3d8:
    // 0x25e3d8: 0xc0973a6  jal         func_25CE98
label_25e3dc:
    if (ctx->pc == 0x25E3DCu) {
        ctx->pc = 0x25E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D8u;
        // 0x25e3dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3E0u;
        goto label_25e3e0;
    }
    ctx->pc = 0x25E3D8u;
    SET_GPR_U32(ctx, 31, 0x25E3E0u);
    ctx->pc = 0x25E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3D8u;
    // 0x25e3dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25E3D8u, 0x25E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3E0u;
label_25e3e0:
    // 0x25e3e0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25e3e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_25e3e4:
    // 0x25e3e4: 0x30420202  andi        $v0, $v0, 0x202
    ctx->pc = 0x25e3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)514);
label_25e3e8:
    // 0x25e3e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_25e3ec:
    if (ctx->pc == 0x25E3ECu) {
        ctx->pc = 0x25E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3E8u;
        // 0x25e3ec: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3F0u;
        goto label_25e3f0;
    }
    ctx->pc = 0x25E3E8u;
    {
        const bool branch_taken_0x25e3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e3e8) {
            ctx->pc = 0x25E3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E3E8u;
            // 0x25e3ec: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E3F8u;
            goto label_25e3f8;
        }
    }
    ctx->pc = 0x25E3F0u;
label_25e3f0:
    // 0x25e3f0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25e3f4:
    if (ctx->pc == 0x25E3F4u) {
        ctx->pc = 0x25E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3F0u;
        // 0x25e3f4: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3F8u;
        goto label_25e3f8;
    }
    ctx->pc = 0x25E3F0u;
    {
        const bool branch_taken_0x25e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3F0u;
        // 0x25e3f4: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3f0) {
            ctx->pc = 0x25E464u;
            goto label_25e464;
        }
    }
    ctx->pc = 0x25E3F8u;
label_25e3f8:
    // 0x25e3f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3fc:
    // 0x25e3fc: 0xc08a96c  jal         func_22A5B0
label_25e400:
    if (ctx->pc == 0x25E400u) {
        ctx->pc = 0x25E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3FCu;
        // 0x25e400: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E404u;
        goto label_25e404;
    }
    ctx->pc = 0x25E3FCu;
    SET_GPR_U32(ctx, 31, 0x25E404u);
    ctx->pc = 0x25E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3FCu;
    // 0x25e400: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A5B0u, 0x25E3FCu, 0x25E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E404u;
label_25e404:
    // 0x25e404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e408:
    // 0x25e408: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_25e40c:
    if (ctx->pc == 0x25E40Cu) {
        ctx->pc = 0x25E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E408u;
        // 0x25e40c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E410u;
        goto label_25e410;
    }
    ctx->pc = 0x25E408u;
    {
        const bool branch_taken_0x25e408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e408) {
            ctx->pc = 0x25E40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E408u;
            // 0x25e40c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E418u;
            goto label_25e418;
        }
    }
    ctx->pc = 0x25E410u;
label_25e410:
    // 0x25e410: 0x10000014  b           . + 4 + (0x14 << 2)
label_25e414:
    if (ctx->pc == 0x25E414u) {
        ctx->pc = 0x25E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E410u;
        // 0x25e414: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E418u;
        goto label_25e418;
    }
    ctx->pc = 0x25E410u;
    {
        const bool branch_taken_0x25e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E410u;
        // 0x25e414: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e410) {
            ctx->pc = 0x25E464u;
            goto label_25e464;
        }
    }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e41c:
    // 0x25e41c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_25e420:
    // 0x25e420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e424:
    // 0x25e424: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x25e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_25e428:
    // 0x25e428: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25e428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e42c:
    // 0x25e42c: 0x40f809  jalr        $v0
label_25e430:
    if (ctx->pc == 0x25E430u) {
        ctx->pc = 0x25E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E42Cu;
        // 0x25e430: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E434u;
        goto label_25e434;
    }
    ctx->pc = 0x25E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E434u);
        ctx->pc = 0x25E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E42Cu;
        // 0x25e430: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E42Cu, 0x25E434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E434u;
label_25e434:
    // 0x25e434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e438:
    // 0x25e438: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_25e43c:
    if (ctx->pc == 0x25E43Cu) {
        ctx->pc = 0x25E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E438u;
        // 0x25e43c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E440u;
        goto label_25e440;
    }
    ctx->pc = 0x25E438u;
    {
        const bool branch_taken_0x25e438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E438u;
        // 0x25e43c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e438) {
            ctx->pc = 0x25E45Cu;
            goto label_25e45c;
        }
    }
    ctx->pc = 0x25E440u;
label_25e440:
    // 0x25e440: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_25e444:
    // 0x25e444: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25e448:
    // 0x25e448: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x25e448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_25e44c:
    // 0x25e44c: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x25e44cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_25e450:
    // 0x25e450: 0xc08b4f8  jal         func_22D3E0
label_25e454:
    if (ctx->pc == 0x25E454u) {
        ctx->pc = 0x25E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E450u;
        // 0x25e454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E458u;
        goto label_25e458;
    }
    ctx->pc = 0x25E450u;
    SET_GPR_U32(ctx, 31, 0x25E458u);
    ctx->pc = 0x25E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E450u;
    // 0x25e454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25E450u, 0x25E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E458u;
label_25e458:
    // 0x25e458: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x25e458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_25e45c:
    // 0x25e45c: 0xc08a9d6  jal         func_22A758
label_25e460:
    if (ctx->pc == 0x25E460u) {
        ctx->pc = 0x25E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E45Cu;
        // 0x25e460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E464u;
        goto label_25e464;
    }
    ctx->pc = 0x25E45Cu;
    SET_GPR_U32(ctx, 31, 0x25E464u);
    ctx->pc = 0x25E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E45Cu;
    // 0x25e460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25E45Cu, 0x25E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E464u;
label_25e464:
    // 0x25e464: 0xc0973ac  jal         func_25CEB0
label_25e468:
    if (ctx->pc == 0x25E468u) {
        ctx->pc = 0x25E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E464u;
        // 0x25e468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E46Cu;
        goto label_25e46c;
    }
    ctx->pc = 0x25E464u;
    SET_GPR_U32(ctx, 31, 0x25E46Cu);
    ctx->pc = 0x25E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E464u;
    // 0x25e468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25E464u, 0x25E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E46Cu;
label_25e46c:
    // 0x25e46c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e470:
    // 0x25e470: 0xc0972da  jal         func_25CB68
label_25e474:
    if (ctx->pc == 0x25E474u) {
        ctx->pc = 0x25E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E470u;
        // 0x25e474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E478u;
        goto label_25e478;
    }
    ctx->pc = 0x25E470u;
    SET_GPR_U32(ctx, 31, 0x25E478u);
    ctx->pc = 0x25E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E470u;
    // 0x25e474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25E470u, 0x25E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E478u;
label_25e478:
    // 0x25e478: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25e47c:
    // 0x25e47c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25e47cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25e480:
    // 0x25e480: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25e480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25e484:
    // 0x25e484: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25e484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e488:
    // 0x25e488: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e48c:
    // 0x25e48c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25e48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e490:
    // 0x25e490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e494:
    // 0x25e494: 0x3e00008  jr          $ra
label_25e498:
    if (ctx->pc == 0x25E498u) {
        ctx->pc = 0x25E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E494u;
        // 0x25e498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E49Cu;
        goto label_25e49c;
    }
    ctx->pc = 0x25E494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E494u;
        // 0x25e498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E49Cu;
label_25e49c:
    // 0x25e49c: 0x0  nop
    ctx->pc = 0x25e49cu;
    // NOP
}
