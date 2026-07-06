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

// Function: sub_002C63E0
// Address: 0x2c63e0 - 0x2c6520
void sub_002C63E0_0x2c63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C63E0_0x2c63e0");
#endif

    switch (ctx->pc) {
        case 0x2c63e0u: goto label_2c63e0;
        case 0x2c63e4u: goto label_2c63e4;
        case 0x2c63e8u: goto label_2c63e8;
        case 0x2c63ecu: goto label_2c63ec;
        case 0x2c63f0u: goto label_2c63f0;
        case 0x2c63f4u: goto label_2c63f4;
        case 0x2c63f8u: goto label_2c63f8;
        case 0x2c63fcu: goto label_2c63fc;
        case 0x2c6400u: goto label_2c6400;
        case 0x2c6404u: goto label_2c6404;
        case 0x2c6408u: goto label_2c6408;
        case 0x2c640cu: goto label_2c640c;
        case 0x2c6410u: goto label_2c6410;
        case 0x2c6414u: goto label_2c6414;
        case 0x2c6418u: goto label_2c6418;
        case 0x2c641cu: goto label_2c641c;
        case 0x2c6420u: goto label_2c6420;
        case 0x2c6424u: goto label_2c6424;
        case 0x2c6428u: goto label_2c6428;
        case 0x2c642cu: goto label_2c642c;
        case 0x2c6430u: goto label_2c6430;
        case 0x2c6434u: goto label_2c6434;
        case 0x2c6438u: goto label_2c6438;
        case 0x2c643cu: goto label_2c643c;
        case 0x2c6440u: goto label_2c6440;
        case 0x2c6444u: goto label_2c6444;
        case 0x2c6448u: goto label_2c6448;
        case 0x2c644cu: goto label_2c644c;
        case 0x2c6450u: goto label_2c6450;
        case 0x2c6454u: goto label_2c6454;
        case 0x2c6458u: goto label_2c6458;
        case 0x2c645cu: goto label_2c645c;
        case 0x2c6460u: goto label_2c6460;
        case 0x2c6464u: goto label_2c6464;
        case 0x2c6468u: goto label_2c6468;
        case 0x2c646cu: goto label_2c646c;
        case 0x2c6470u: goto label_2c6470;
        case 0x2c6474u: goto label_2c6474;
        case 0x2c6478u: goto label_2c6478;
        case 0x2c647cu: goto label_2c647c;
        case 0x2c6480u: goto label_2c6480;
        case 0x2c6484u: goto label_2c6484;
        case 0x2c6488u: goto label_2c6488;
        case 0x2c648cu: goto label_2c648c;
        case 0x2c6490u: goto label_2c6490;
        case 0x2c6494u: goto label_2c6494;
        case 0x2c6498u: goto label_2c6498;
        case 0x2c649cu: goto label_2c649c;
        case 0x2c64a0u: goto label_2c64a0;
        case 0x2c64a4u: goto label_2c64a4;
        case 0x2c64a8u: goto label_2c64a8;
        case 0x2c64acu: goto label_2c64ac;
        case 0x2c64b0u: goto label_2c64b0;
        case 0x2c64b4u: goto label_2c64b4;
        case 0x2c64b8u: goto label_2c64b8;
        case 0x2c64bcu: goto label_2c64bc;
        case 0x2c64c0u: goto label_2c64c0;
        case 0x2c64c4u: goto label_2c64c4;
        case 0x2c64c8u: goto label_2c64c8;
        case 0x2c64ccu: goto label_2c64cc;
        case 0x2c64d0u: goto label_2c64d0;
        case 0x2c64d4u: goto label_2c64d4;
        case 0x2c64d8u: goto label_2c64d8;
        case 0x2c64dcu: goto label_2c64dc;
        case 0x2c64e0u: goto label_2c64e0;
        case 0x2c64e4u: goto label_2c64e4;
        case 0x2c64e8u: goto label_2c64e8;
        case 0x2c64ecu: goto label_2c64ec;
        case 0x2c64f0u: goto label_2c64f0;
        case 0x2c64f4u: goto label_2c64f4;
        case 0x2c64f8u: goto label_2c64f8;
        case 0x2c64fcu: goto label_2c64fc;
        case 0x2c6500u: goto label_2c6500;
        case 0x2c6504u: goto label_2c6504;
        case 0x2c6508u: goto label_2c6508;
        case 0x2c650cu: goto label_2c650c;
        case 0x2c6510u: goto label_2c6510;
        case 0x2c6514u: goto label_2c6514;
        case 0x2c6518u: goto label_2c6518;
        case 0x2c651cu: goto label_2c651c;
        default: break;
    }

    ctx->pc = 0x2c63e0u;

label_2c63e0:
    // 0x2c63e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c63e4:
    // 0x2c63e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c63e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c63e8:
    // 0x2c63e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c63ec:
    // 0x2c63ec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2c63ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c63f0:
    // 0x2c63f0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2c63f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c63f4:
    // 0x2c63f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c63f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c63f8:
    // 0x2c63f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c63f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c63fc:
    // 0x2c63fc: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2c63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2c6400:
    // 0x2c6400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6404:
    // 0x2c6404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c6404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6408:
    // 0x2c6408: 0x80b2184  j           func_2C8610
label_2c640c:
    if (ctx->pc == 0x2C640Cu) {
        ctx->pc = 0x2C640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6408u;
        // 0x2c640c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6410u;
        goto label_2c6410;
    }
    ctx->pc = 0x2C6408u;
    ctx->pc = 0x2C640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6408u;
    // 0x2c640c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8610u;
    sub_002C8610_0x2c8610(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6410u;
label_2c6410:
    // 0x2c6410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c6414:
    // 0x2c6414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c6418:
    // 0x2c6418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c641c:
    // 0x2c641c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c6420:
    // 0x2c6420: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c6420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6424:
    // 0x2c6424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c6428:
    // 0x2c6428: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2c6428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c642c:
    // 0x2c642c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c6430:
    // 0x2c6430: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c6430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6434:
    // 0x2c6434: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c6438:
    // 0x2c6438: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c6438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c643c:
    // 0x2c643c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c6440:
    // 0x2c6440: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c6440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6444:
    // 0x2c6444: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c6448:
    // 0x2c6448: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c6448u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c644c:
    // 0x2c644c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c6450:
    // 0x2c6450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6454:
    // 0x2c6454: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c6454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6458:
    // 0x2c6458: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c645c:
    // 0x2c645c: 0x40f809  jalr        $v0
label_2c6460:
    if (ctx->pc == 0x2C6460u) {
        ctx->pc = 0x2C6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C645Cu;
        // 0x2c6460: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6464u;
        goto label_2c6464;
    }
    ctx->pc = 0x2C645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6464u);
        ctx->pc = 0x2C6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C645Cu;
        // 0x2c6460: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C645Cu, 0x2C6464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6464u;
label_2c6464:
    // 0x2c6464: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6468:
    // 0x2c6468: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2c646c:
    if (ctx->pc == 0x2C646Cu) {
        ctx->pc = 0x2C646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6468u;
        // 0x2c646c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6470u;
        goto label_2c6470;
    }
    ctx->pc = 0x2C6468u;
    {
        const bool branch_taken_0x2c6468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6468u;
        // 0x2c646c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6468) {
            ctx->pc = 0x2C64A8u;
            goto label_2c64a8;
        }
    }
    ctx->pc = 0x2C6470u;
label_2c6470:
    // 0x2c6470: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6474:
    // 0x2c6474: 0xc0b5f44  jal         func_2D7D10
label_2c6478:
    if (ctx->pc == 0x2C6478u) {
        ctx->pc = 0x2C6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6474u;
        // 0x2c6478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C647Cu;
        goto label_2c647c;
    }
    ctx->pc = 0x2C6474u;
    SET_GPR_U32(ctx, 31, 0x2C647Cu);
    ctx->pc = 0x2C6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6474u;
    // 0x2c6478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D10u, 0x2C6474u, 0x2C647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C647Cu;
label_2c647c:
    // 0x2c647c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2c6480:
    if (ctx->pc == 0x2C6480u) {
        ctx->pc = 0x2C6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C647Cu;
        // 0x2c6480: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6484u;
        goto label_2c6484;
    }
    ctx->pc = 0x2C647Cu;
    {
        const bool branch_taken_0x2c647c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c647c) {
            ctx->pc = 0x2C6480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C647Cu;
            // 0x2c6480: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C64F8u;
            goto label_2c64f8;
        }
    }
    ctx->pc = 0x2C6484u;
label_2c6484:
    // 0x2c6484: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6488:
    // 0x2c6488: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2c6488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2c648c:
    // 0x2c648c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_2c6490:
    if (ctx->pc == 0x2C6490u) {
        ctx->pc = 0x2C6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C648Cu;
        // 0x2c6490: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6494u;
        goto label_2c6494;
    }
    ctx->pc = 0x2C648Cu;
    {
        const bool branch_taken_0x2c648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c648c) {
            ctx->pc = 0x2C6490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C648Cu;
            // 0x2c6490: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C6494u;
label_2c6494:
    // 0x2c6494: 0x60f809  jalr        $v1
label_2c6498:
    if (ctx->pc == 0x2C6498u) {
        ctx->pc = 0x2C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6494u;
        // 0x2c6498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C649Cu;
        goto label_2c649c;
    }
    ctx->pc = 0x2C6494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C649Cu);
        ctx->pc = 0x2C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6494u;
        // 0x2c6498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6494u, 0x2C649Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C649Cu;
label_2c649c:
    // 0x2c649c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c649cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c64a0:
    // 0x2c64a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c64a4:
    if (ctx->pc == 0x2C64A4u) {
        ctx->pc = 0x2C64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64A0u;
        // 0x2c64a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64A8u;
        goto label_2c64a8;
    }
    ctx->pc = 0x2C64A0u;
    {
        const bool branch_taken_0x2c64a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64A0u;
        // 0x2c64a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64a0) {
            ctx->pc = 0x2C64B8u;
            goto label_2c64b8;
        }
    }
    ctx->pc = 0x2C64A8u;
label_2c64a8:
    // 0x2c64a8: 0xc0b21d8  jal         func_2C8760
label_2c64ac:
    if (ctx->pc == 0x2C64ACu) {
        ctx->pc = 0x2C64B0u;
        goto label_2c64b0;
    }
    ctx->pc = 0x2C64A8u;
    SET_GPR_U32(ctx, 31, 0x2C64B0u);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C64A8u, 0x2C64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64B0u;
label_2c64b0:
    // 0x2c64b0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c64b4:
    if (ctx->pc == 0x2C64B4u) {
        ctx->pc = 0x2C64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64B0u;
        // 0x2c64b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64B8u;
        goto label_2c64b8;
    }
    ctx->pc = 0x2C64B0u;
    {
        const bool branch_taken_0x2c64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64B0u;
        // 0x2c64b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64b0) {
            ctx->pc = 0x2C64F8u;
            goto label_2c64f8;
        }
    }
    ctx->pc = 0x2C64B8u;
label_2c64b8:
    // 0x2c64b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c64bc:
    // 0x2c64bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c64c0:
    // 0x2c64c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c64c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c64c4:
    // 0x2c64c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c64c8:
    // 0x2c64c8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c64c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c64cc:
    // 0x2c64cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c64ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c64d0:
    // 0x2c64d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c64d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c64d4:
    // 0x2c64d4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c64d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c64d8:
    // 0x2c64d8: 0x40f809  jalr        $v0
label_2c64dc:
    if (ctx->pc == 0x2C64DCu) {
        ctx->pc = 0x2C64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64D8u;
        // 0x2c64dc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64E0u;
        goto label_2c64e0;
    }
    ctx->pc = 0x2C64D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C64E0u);
        ctx->pc = 0x2C64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64D8u;
        // 0x2c64dc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C64D8u, 0x2C64E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C64E0u;
label_2c64e0:
    // 0x2c64e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c64e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c64e4:
    // 0x2c64e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2c64e8:
    if (ctx->pc == 0x2C64E8u) {
        ctx->pc = 0x2C64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64E4u;
        // 0x2c64e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64ECu;
        goto label_2c64ec;
    }
    ctx->pc = 0x2C64E4u;
    {
        const bool branch_taken_0x2c64e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64E4u;
        // 0x2c64e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64e4) {
            ctx->pc = 0x2C64F4u;
            goto label_2c64f4;
        }
    }
    ctx->pc = 0x2C64ECu;
label_2c64ec:
    // 0x2c64ec: 0xc0b21d8  jal         func_2C8760
label_2c64f0:
    if (ctx->pc == 0x2C64F0u) {
        ctx->pc = 0x2C64F4u;
        goto label_2c64f4;
    }
    ctx->pc = 0x2C64ECu;
    SET_GPR_U32(ctx, 31, 0x2C64F4u);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C64ECu, 0x2C64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F4u;
label_2c64f4:
    // 0x2c64f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c64f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c64f8:
    // 0x2c64f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c64f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c64fc:
    // 0x2c64fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c64fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6500:
    // 0x2c6500: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c6500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c6504:
    // 0x2c6504: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c6504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6508:
    // 0x2c6508: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c6508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c650c:
    // 0x2c650c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c650cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6510:
    // 0x2c6510: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c6510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c6514:
    // 0x2c6514: 0x3e00008  jr          $ra
label_2c6518:
    if (ctx->pc == 0x2C6518u) {
        ctx->pc = 0x2C6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6514u;
        // 0x2c6518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C651Cu;
        goto label_2c651c;
    }
    ctx->pc = 0x2C6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6514u;
        // 0x2c6518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C651Cu;
label_2c651c:
    // 0x2c651c: 0x0  nop
    ctx->pc = 0x2c651cu;
    // NOP
}
