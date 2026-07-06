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

// Function: sub_001DB3F8
// Address: 0x1db3f8 - 0x1db4e8
void sub_001DB3F8_0x1db3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB3F8_0x1db3f8");
#endif

    switch (ctx->pc) {
        case 0x1db3f8u: goto label_1db3f8;
        case 0x1db3fcu: goto label_1db3fc;
        case 0x1db400u: goto label_1db400;
        case 0x1db404u: goto label_1db404;
        case 0x1db408u: goto label_1db408;
        case 0x1db40cu: goto label_1db40c;
        case 0x1db410u: goto label_1db410;
        case 0x1db414u: goto label_1db414;
        case 0x1db418u: goto label_1db418;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db420u: goto label_1db420;
        case 0x1db424u: goto label_1db424;
        case 0x1db428u: goto label_1db428;
        case 0x1db42cu: goto label_1db42c;
        case 0x1db430u: goto label_1db430;
        case 0x1db434u: goto label_1db434;
        case 0x1db438u: goto label_1db438;
        case 0x1db43cu: goto label_1db43c;
        case 0x1db440u: goto label_1db440;
        case 0x1db444u: goto label_1db444;
        case 0x1db448u: goto label_1db448;
        case 0x1db44cu: goto label_1db44c;
        case 0x1db450u: goto label_1db450;
        case 0x1db454u: goto label_1db454;
        case 0x1db458u: goto label_1db458;
        case 0x1db45cu: goto label_1db45c;
        case 0x1db460u: goto label_1db460;
        case 0x1db464u: goto label_1db464;
        case 0x1db468u: goto label_1db468;
        case 0x1db46cu: goto label_1db46c;
        case 0x1db470u: goto label_1db470;
        case 0x1db474u: goto label_1db474;
        case 0x1db478u: goto label_1db478;
        case 0x1db47cu: goto label_1db47c;
        case 0x1db480u: goto label_1db480;
        case 0x1db484u: goto label_1db484;
        case 0x1db488u: goto label_1db488;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db490u: goto label_1db490;
        case 0x1db494u: goto label_1db494;
        case 0x1db498u: goto label_1db498;
        case 0x1db49cu: goto label_1db49c;
        case 0x1db4a0u: goto label_1db4a0;
        case 0x1db4a4u: goto label_1db4a4;
        case 0x1db4a8u: goto label_1db4a8;
        case 0x1db4acu: goto label_1db4ac;
        case 0x1db4b0u: goto label_1db4b0;
        case 0x1db4b4u: goto label_1db4b4;
        case 0x1db4b8u: goto label_1db4b8;
        case 0x1db4bcu: goto label_1db4bc;
        case 0x1db4c0u: goto label_1db4c0;
        case 0x1db4c4u: goto label_1db4c4;
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4ccu: goto label_1db4cc;
        case 0x1db4d0u: goto label_1db4d0;
        case 0x1db4d4u: goto label_1db4d4;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db4dcu: goto label_1db4dc;
        case 0x1db4e0u: goto label_1db4e0;
        case 0x1db4e4u: goto label_1db4e4;
        default: break;
    }

    ctx->pc = 0x1db3f8u;

label_1db3f8:
    // 0x1db3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1db3fc:
    // 0x1db3fc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1db400:
    // 0x1db400: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1db400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1db404:
    // 0x1db404: 0x2410fffc  addiu       $s0, $zero, -0x4
    ctx->pc = 0x1db404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1db408:
    // 0x1db408: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1db408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1db40c:
    // 0x1db40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db410:
    // 0x1db410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1db410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1db414:
    // 0x1db414: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db418:
    // 0x1db418: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1db418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1db41c:
    // 0x1db41c: 0x263303a8  addiu       $s3, $s1, 0x3A8
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
label_1db420:
    // 0x1db420: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1db420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1db424:
    // 0x1db424: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1db424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db428:
    // 0x1db428: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1db428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1db42c:
    // 0x1db42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db430:
    // 0x1db430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db434:
    // 0x1db434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1db434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1db438:
    // 0x1db438: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1db438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1db43c:
    // 0x1db43c: 0x60f809  jalr        $v1
label_1db440:
    if (ctx->pc == 0x1DB440u) {
        ctx->pc = 0x1DB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB43Cu;
        // 0x1db440: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB444u;
        goto label_1db444;
    }
    ctx->pc = 0x1DB43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB444u);
        ctx->pc = 0x1DB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB43Cu;
        // 0x1db440: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB43Cu, 0x1DB444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB444u;
label_1db444:
    // 0x1db444: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1db448:
    // 0x1db448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db44c:
    // 0x1db44c: 0xb08024  and         $s0, $a1, $s0
    ctx->pc = 0x1db44cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_1db450:
    // 0x1db450: 0x8c8603ac  lw          $a2, 0x3AC($a0)
    ctx->pc = 0x1db450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 940)));
label_1db454:
    // 0x1db454: 0xb08823  subu        $s1, $a1, $s0
    ctx->pc = 0x1db454u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1db458:
    // 0x1db458: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1db458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1db45c:
    // 0x1db45c: 0xc076d3a  jal         func_1DB4E8
label_1db460:
    if (ctx->pc == 0x1DB460u) {
        ctx->pc = 0x1DB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB45Cu;
        // 0x1db460: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB464u;
        goto label_1db464;
    }
    ctx->pc = 0x1DB45Cu;
    SET_GPR_U32(ctx, 31, 0x1DB464u);
    ctx->pc = 0x1DB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB45Cu;
    // 0x1db460: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB4E8u, 0x1DB45Cu, 0x1DB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB464u;
label_1db464:
    // 0x1db464: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
label_1db468:
    // 0x1db468: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1db468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1db46c:
    // 0x1db46c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1db470:
    // 0x1db470: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1db470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db474:
    // 0x1db474: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1db474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_1db478:
    // 0x1db478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db47c:
    // 0x1db47c: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1db480:
    // 0x1db480: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1db480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db484:
    // 0x1db484: 0xc07337e  jal         func_1CCDF8
label_1db488:
    if (ctx->pc == 0x1DB488u) {
        ctx->pc = 0x1DB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB484u;
        // 0x1db488: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB48Cu;
        goto label_1db48c;
    }
    ctx->pc = 0x1DB484u;
    SET_GPR_U32(ctx, 31, 0x1DB48Cu);
    ctx->pc = 0x1DB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB484u;
    // 0x1db488: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1DB484u, 0x1DB48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB48Cu;
label_1db48c:
    // 0x1db48c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1db490:
    // 0x1db490: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1db490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db494:
    // 0x1db494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db498:
    // 0x1db498: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1db498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1db49c:
    // 0x1db49c: 0x40f809  jalr        $v0
label_1db4a0:
    if (ctx->pc == 0x1DB4A0u) {
        ctx->pc = 0x1DB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB49Cu;
        // 0x1db4a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4A4u;
        goto label_1db4a4;
    }
    ctx->pc = 0x1DB49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB4A4u);
        ctx->pc = 0x1DB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB49Cu;
        // 0x1db4a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB49Cu, 0x1DB4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB4A4u;
label_1db4a4:
    // 0x1db4a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1db4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1db4a8:
    // 0x1db4a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db4ac:
    // 0x1db4ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1db4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db4b0:
    // 0x1db4b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1db4b4:
    // 0x1db4b4: 0x40f809  jalr        $v0
label_1db4b8:
    if (ctx->pc == 0x1DB4B8u) {
        ctx->pc = 0x1DB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4B4u;
        // 0x1db4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4BCu;
        goto label_1db4bc;
    }
    ctx->pc = 0x1DB4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB4BCu);
        ctx->pc = 0x1DB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4B4u;
        // 0x1db4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB4B4u, 0x1DB4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB4BCu;
label_1db4bc:
    // 0x1db4bc: 0xc076e1e  jal         func_1DB878
label_1db4c0:
    if (ctx->pc == 0x1DB4C0u) {
        ctx->pc = 0x1DB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4BCu;
        // 0x1db4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4C4u;
        goto label_1db4c4;
    }
    ctx->pc = 0x1DB4BCu;
    SET_GPR_U32(ctx, 31, 0x1DB4C4u);
    ctx->pc = 0x1DB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4BCu;
    // 0x1db4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB878u, 0x1DB4BCu, 0x1DB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4C4u;
label_1db4c4:
    // 0x1db4c4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1db4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db4c8:
    // 0x1db4c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db4cc:
    // 0x1db4cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1db4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db4d0:
    // 0x1db4d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1db4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1db4d4:
    // 0x1db4d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1db4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1db4d8:
    // 0x1db4d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1db4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db4dc:
    // 0x1db4dc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1db4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1db4e0:
    // 0x1db4e0: 0x3e00008  jr          $ra
label_1db4e4:
    if (ctx->pc == 0x1DB4E4u) {
        ctx->pc = 0x1DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E0u;
        // 0x1db4e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB4E8u;
        goto label_fallthrough_0x1db4e0;
    }
    ctx->pc = 0x1DB4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E0u;
        // 0x1db4e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db4e0:
    ctx->pc = 0x1DB4E8u;
}
