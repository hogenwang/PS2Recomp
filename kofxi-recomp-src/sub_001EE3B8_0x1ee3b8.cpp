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

// Function: sub_001EE3B8
// Address: 0x1ee3b8 - 0x1ee530
void sub_001EE3B8_0x1ee3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE3B8_0x1ee3b8");
#endif

    switch (ctx->pc) {
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        default: break;
    }

    ctx->pc = 0x1ee3b8u;

label_1ee3b8:
    // 0x1ee3b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ee3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ee3bc:
    // 0x1ee3bc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1ee3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1ee3c0:
    // 0x1ee3c0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ee3c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3c4:
    // 0x1ee3c4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ee3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ee3c8:
    // 0x1ee3c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ee3c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3cc:
    // 0x1ee3cc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ee3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1ee3d0:
    // 0x1ee3d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ee3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3d4:
    // 0x1ee3d4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1ee3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1ee3d8:
    // 0x1ee3d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ee3d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3dc:
    // 0x1ee3dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ee3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1ee3e0:
    // 0x1ee3e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ee3e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3e4:
    // 0x1ee3e4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1ee3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1ee3e8:
    // 0x1ee3e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ee3e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3ec:
    // 0x1ee3ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ee3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1ee3f0:
    // 0x1ee3f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ee3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3f4:
    // 0x1ee3f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ee3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1ee3f8:
    // 0x1ee3f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ee3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ee3fc:
    // 0x1ee3fc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1ee3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1ee400:
    // 0x1ee400: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ee400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ee404:
    // 0x1ee404: 0x8e511fd4  lw          $s1, 0x1FD4($s2)
    ctx->pc = 0x1ee404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8148)));
label_1ee408:
    // 0x1ee408: 0xc076144  jal         func_1D8510
label_1ee40c:
    if (ctx->pc == 0x1EE40Cu) {
        ctx->pc = 0x1EE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE408u;
        // 0x1ee40c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE410u;
        goto label_1ee410;
    }
    ctx->pc = 0x1EE408u;
    SET_GPR_U32(ctx, 31, 0x1EE410u);
    ctx->pc = 0x1EE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE408u;
    // 0x1ee40c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8510u, 0x1EE408u, 0x1EE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE410u;
label_1ee410:
    // 0x1ee410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee414:
    if (ctx->pc == 0x1EE414u) {
        ctx->pc = 0x1EE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE410u;
        // 0x1ee414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE418u;
        goto label_1ee418;
    }
    ctx->pc = 0x1EE410u;
    {
        const bool branch_taken_0x1ee410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE410u;
        // 0x1ee414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee410) {
            ctx->pc = 0x1EE428u;
            goto label_1ee428;
        }
    }
    ctx->pc = 0x1EE418u;
label_1ee418:
    // 0x1ee418: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1ee41c:
    // 0x1ee41c: 0xc07b5c0  jal         func_1ED700
label_1ee420:
    if (ctx->pc == 0x1EE420u) {
        ctx->pc = 0x1EE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE41Cu;
        // 0x1ee420: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE424u;
        goto label_1ee424;
    }
    ctx->pc = 0x1EE41Cu;
    SET_GPR_U32(ctx, 31, 0x1EE424u);
    ctx->pc = 0x1EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE41Cu;
    // 0x1ee420: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1EE41Cu, 0x1EE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE424u;
label_1ee424:
    // 0x1ee424: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ee424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee428:
    // 0x1ee428: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x1ee428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ee42c:
    // 0x1ee42c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee430:
    // 0x1ee430: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ee434:
    // 0x1ee434: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ee438:
    // 0x1ee438: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
label_1ee43c:
    if (ctx->pc == 0x1EE43Cu) {
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE440u;
        goto label_1ee440;
    }
    ctx->pc = 0x1EE438u;
    {
        const bool branch_taken_0x1ee438 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee438) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1ee444:
    // 0x1ee444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ee444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee448:
    // 0x1ee448: 0xc07b5c0  jal         func_1ED700
label_1ee44c:
    if (ctx->pc == 0x1EE44Cu) {
        ctx->pc = 0x1EE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE448u;
        // 0x1ee44c: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE450u;
        goto label_1ee450;
    }
    ctx->pc = 0x1EE448u;
    SET_GPR_U32(ctx, 31, 0x1EE450u);
    ctx->pc = 0x1EE44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE448u;
    // 0x1ee44c: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1EE448u, 0x1EE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE450u;
label_1ee450:
    // 0x1ee450: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1ee454:
    if (ctx->pc == 0x1EE454u) {
        ctx->pc = 0x1EE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE450u;
        // 0x1ee454: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE458u;
        goto label_1ee458;
    }
    ctx->pc = 0x1EE450u;
    {
        const bool branch_taken_0x1ee450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE450u;
        // 0x1ee454: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee450) {
            ctx->pc = 0x1EE508u;
            goto label_1ee508;
        }
    }
    ctx->pc = 0x1EE458u;
label_1ee458:
    // 0x1ee458: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_1ee45c:
    if (ctx->pc == 0x1EE45Cu) {
        ctx->pc = 0x1EE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE458u;
        // 0x1ee45c: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE460u;
        goto label_1ee460;
    }
    ctx->pc = 0x1EE458u;
    {
        const bool branch_taken_0x1ee458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee458) {
            ctx->pc = 0x1EE45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE458u;
            // 0x1ee45c: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE478u;
            goto label_1ee478;
        }
    }
    ctx->pc = 0x1EE460u;
label_1ee460:
    // 0x1ee460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee464:
    // 0x1ee464: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1ee464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1ee468:
    // 0x1ee468: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ee468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1ee46c:
    // 0x1ee46c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ee470:
    if (ctx->pc == 0x1EE470u) {
        ctx->pc = 0x1EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE46Cu;
        // 0x1ee470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE474u;
        goto label_1ee474;
    }
    ctx->pc = 0x1EE46Cu;
    {
        const bool branch_taken_0x1ee46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE46Cu;
        // 0x1ee470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee46c) {
            ctx->pc = 0x1EE504u;
            goto label_1ee504;
        }
    }
    ctx->pc = 0x1EE474u;
label_1ee474:
    // 0x1ee474: 0x0  nop
    ctx->pc = 0x1ee474u;
    // NOP
label_1ee478:
    // 0x1ee478: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1ee47c:
    if (ctx->pc == 0x1EE47Cu) {
        ctx->pc = 0x1EE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE478u;
        // 0x1ee47c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE480u;
        goto label_1ee480;
    }
    ctx->pc = 0x1EE478u;
    {
        const bool branch_taken_0x1ee478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee478) {
            ctx->pc = 0x1EE47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE478u;
            // 0x1ee47c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE498u;
            goto label_1ee498;
        }
    }
    ctx->pc = 0x1EE480u;
label_1ee480:
    // 0x1ee480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ee480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee484:
    // 0x1ee484: 0xc07bc18  jal         func_1EF060
label_1ee488:
    if (ctx->pc == 0x1EE488u) {
        ctx->pc = 0x1EE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE484u;
        // 0x1ee488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE48Cu;
        goto label_1ee48c;
    }
    ctx->pc = 0x1EE484u;
    SET_GPR_U32(ctx, 31, 0x1EE48Cu);
    ctx->pc = 0x1EE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE484u;
    // 0x1ee488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF060u, 0x1EE484u, 0x1EE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE48Cu;
label_1ee48c:
    // 0x1ee48c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ee490:
    if (ctx->pc == 0x1EE490u) {
        ctx->pc = 0x1EE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE48Cu;
        // 0x1ee490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE494u;
        goto label_1ee494;
    }
    ctx->pc = 0x1EE48Cu;
    {
        const bool branch_taken_0x1ee48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE48Cu;
        // 0x1ee490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee48c) {
            ctx->pc = 0x1EE504u;
            goto label_1ee504;
        }
    }
    ctx->pc = 0x1EE494u;
label_1ee494:
    // 0x1ee494: 0x0  nop
    ctx->pc = 0x1ee494u;
    // NOP
label_1ee498:
    // 0x1ee498: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ee498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ee49c:
    // 0x1ee49c: 0x8c44fd50  lw          $a0, -0x2B0($v0)
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966608)));
label_1ee4a0:
    // 0x1ee4a0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_1ee4a4:
    if (ctx->pc == 0x1EE4A4u) {
        ctx->pc = 0x1EE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4A0u;
        // 0x1ee4a4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4A8u;
        goto label_1ee4a8;
    }
    ctx->pc = 0x1EE4A0u;
    {
        const bool branch_taken_0x1ee4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4a0) {
            ctx->pc = 0x1EE4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4A0u;
            // 0x1ee4a4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4C8u;
            goto label_1ee4c8;
        }
    }
    ctx->pc = 0x1EE4A8u;
label_1ee4a8:
    // 0x1ee4a8: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x1ee4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1ee4ac:
    // 0x1ee4ac: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ee4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4b0:
    // 0x1ee4b0: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x1ee4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1ee4b4:
    // 0x1ee4b4: 0xc07b94c  jal         func_1EE530
label_1ee4b8:
    if (ctx->pc == 0x1EE4B8u) {
        ctx->pc = 0x1EE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4B4u;
        // 0x1ee4b8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4BCu;
        goto label_1ee4bc;
    }
    ctx->pc = 0x1EE4B4u;
    SET_GPR_U32(ctx, 31, 0x1EE4BCu);
    ctx->pc = 0x1EE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4B4u;
    // 0x1ee4b8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE530u, 0x1EE4B4u, 0x1EE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4BCu;
label_1ee4bc:
    // 0x1ee4bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ee4c0:
    if (ctx->pc == 0x1EE4C0u) {
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4C4u;
        goto label_1ee4c4;
    }
    ctx->pc = 0x1EE4BCu;
    {
        const bool branch_taken_0x1ee4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4bc) {
            ctx->pc = 0x1EE4E8u;
            goto label_1ee4e8;
        }
    }
    ctx->pc = 0x1EE4C4u;
label_1ee4c4:
    // 0x1ee4c4: 0x0  nop
    ctx->pc = 0x1ee4c4u;
    // NOP
label_1ee4c8:
    // 0x1ee4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ee4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4cc:
    // 0x1ee4cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1ee4d0:
    // 0x1ee4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ee4d4:
    // 0x1ee4d4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1ee4d8:
    // 0x1ee4d8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ee4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4dc:
    // 0x1ee4dc: 0x40f809  jalr        $v0
label_1ee4e0:
    if (ctx->pc == 0x1EE4E0u) {
        ctx->pc = 0x1EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4DCu;
        // 0x1ee4e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4E4u;
        goto label_1ee4e4;
    }
    ctx->pc = 0x1EE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE4E4u);
        ctx->pc = 0x1EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4DCu;
        // 0x1ee4e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE4DCu, 0x1EE4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE4E4u;
label_1ee4e4:
    // 0x1ee4e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ee4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1ee4e8:
    // 0x1ee4e8: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1ee4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ee4ec:
    // 0x1ee4ec: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1ee4f0:
    if (ctx->pc == 0x1EE4F0u) {
        ctx->pc = 0x1EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4ECu;
        // 0x1ee4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4F4u;
        goto label_1ee4f4;
    }
    ctx->pc = 0x1EE4ECu;
    {
        const bool branch_taken_0x1ee4ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4ECu;
        // 0x1ee4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4ec) {
            ctx->pc = 0x1EE500u;
            goto label_1ee500;
        }
    }
    ctx->pc = 0x1EE4F4u;
label_1ee4f4:
    // 0x1ee4f4: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_1ee4f8:
    if (ctx->pc == 0x1EE4F8u) {
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4FCu;
        goto label_1ee4fc;
    }
    ctx->pc = 0x1EE4F4u;
    {
        const bool branch_taken_0x1ee4f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee4f4) {
            ctx->pc = 0x1EE4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4F4u;
            // 0x1ee4f8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE500u;
            goto label_1ee500;
        }
    }
    ctx->pc = 0x1EE4FCu;
label_1ee4fc:
    // 0x1ee4fc: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x1ee4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_1ee500:
    // 0x1ee500: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1ee500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee504:
    // 0x1ee504: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ee504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee508:
    // 0x1ee508: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ee508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ee50c:
    // 0x1ee50c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ee50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee510:
    // 0x1ee510: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1ee510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ee514:
    // 0x1ee514: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ee514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee518:
    // 0x1ee518: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1ee518u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1ee51c:
    // 0x1ee51c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ee51cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee520:
    // 0x1ee520: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1ee520u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1ee524:
    // 0x1ee524: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ee524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee528:
    // 0x1ee528: 0x3e00008  jr          $ra
label_1ee52c:
    if (ctx->pc == 0x1EE52Cu) {
        ctx->pc = 0x1EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE528u;
        // 0x1ee52c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE530u;
        goto label_fallthrough_0x1ee528;
    }
    ctx->pc = 0x1EE528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE528u;
        // 0x1ee52c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee528:
    ctx->pc = 0x1EE530u;
}
