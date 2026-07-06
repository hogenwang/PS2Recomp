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

// Function: sub_0027C488
// Address: 0x27c488 - 0x27ce38
void sub_0027C488_0x27c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C488_0x27c488");
#endif

    switch (ctx->pc) {
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c510u: goto label_27c510;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c534u: goto label_27c534;
        case 0x27c540u: goto label_27c540;
        case 0x27c550u: goto label_27c550;
        case 0x27c558u: goto label_27c558;
        case 0x27c580u: goto label_27c580;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c600u: goto label_27c600;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c640u: goto label_27c640;
        case 0x27c678u: goto label_27c678;
        case 0x27c690u: goto label_27c690;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c758u: goto label_27c758;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c798u: goto label_27c798;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c880u: goto label_27c880;
        case 0x27c8b4u: goto label_27c8b4;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8d8u: goto label_27c8d8;
        case 0x27c8e0u: goto label_27c8e0;
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c958u: goto label_27c958;
        case 0x27c968u: goto label_27c968;
        case 0x27c970u: goto label_27c970;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca88u: goto label_27ca88;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27cce0u: goto label_27cce0;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce18u: goto label_27ce18;
        default: break;
    }

    ctx->pc = 0x27c488u;

label_27c488:
    // 0x27c488: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27c488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27c48c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27c48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27c490: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27c490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x27c494: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x27c498: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x27c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x27c49c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x27c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x27c4a0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x27c4a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27c4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27c4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c4b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27c4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4b4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x27c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x27c4b8: 0x30b6ffff  andi        $s6, $a1, 0xFFFF
    ctx->pc = 0x27c4b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x27c4bc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x27c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x27c4c0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27c4c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27c4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4cc: 0x0  nop
    ctx->pc = 0x27c4ccu;
    // NOP
label_27c4d0:
    // 0x27c4d0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27c4d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27c4d8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x27c4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27c4dc: 0x0  nop
    ctx->pc = 0x27c4dcu;
    // NOP
    // 0x27c4e0: 0x0  nop
    ctx->pc = 0x27c4e0u;
    // NOP
    // 0x27c4e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27C4E4u;
    {
        const bool branch_taken_0x27c4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4E4u;
        // 0x27c4e8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4e4) {
            ctx->pc = 0x27C4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c4d0;
        }
    }
    ctx->pc = 0x27C4ECu;
    // 0x27c4ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c4f4: 0xc0bf1c0  jal         func_2FC700
    ctx->pc = 0x27C4F4u;
    SET_GPR_U32(ctx, 31, 0x27C4FCu);
    ctx->pc = 0x27C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4F4u;
    // 0x27c4f8: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC700u, 0x27C4F4u, 0x27C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4FCu;
label_27c4fc:
    // 0x27c4fc: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x27c4fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x27c500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c504: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27c504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c508: 0xc0bf168  jal         func_2FC5A0
    ctx->pc = 0x27C508u;
    SET_GPR_U32(ctx, 31, 0x27C510u);
    ctx->pc = 0x27C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C508u;
    // 0x27c50c: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC5A0u, 0x27C508u, 0x27C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C510u;
label_27c510:
    // 0x27c510: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27c510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c514: 0x16800022  bnez        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x27C514u;
    {
        const bool branch_taken_0x27c514 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C514u;
        // 0x27c518: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c514) {
            ctx->pc = 0x27C5A0u;
            goto label_27c5a0;
        }
    }
    ctx->pc = 0x27C51Cu;
    // 0x27c51c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27c520: 0x26103548  addiu       $s0, $s0, 0x3548
    ctx->pc = 0x27c520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13640));
    // 0x27c524: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27C524u;
    SET_GPR_U32(ctx, 31, 0x27C52Cu);
    ctx->pc = 0x27C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C524u;
    // 0x27c528: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27C524u, 0x27C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C52Cu;
label_27c52c:
    // 0x27c52c: 0xc0bf158  jal         func_2FC560
    ctx->pc = 0x27C52Cu;
    SET_GPR_U32(ctx, 31, 0x27C534u);
    ctx->pc = 0x27C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C52Cu;
    // 0x27c530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC560u, 0x27C52Cu, 0x27C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C534u;
label_27c534:
    // 0x27c534: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27c538: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x27C538u;
    SET_GPR_U32(ctx, 31, 0x27C540u);
    ctx->pc = 0x27C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C538u;
    // 0x27c53c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x27C538u, 0x27C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C540u;
label_27c540:
    // 0x27c540: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C540u;
    {
        const bool branch_taken_0x27c540 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c540) {
            ctx->pc = 0x27C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C540u;
            // 0x27c544: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C560u;
            goto label_27c560;
        }
    }
    ctx->pc = 0x27C548u;
    // 0x27c548: 0xc0bf124  jal         func_2FC490
    ctx->pc = 0x27C548u;
    SET_GPR_U32(ctx, 31, 0x27C550u);
    ctx->pc = 0x27C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C548u;
    // 0x27c54c: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC490u, 0x27C548u, 0x27C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C550u;
label_27c550:
    // 0x27c550: 0xc09f4c6  jal         func_27D318
    ctx->pc = 0x27C550u;
    SET_GPR_U32(ctx, 31, 0x27C558u);
    ctx->pc = 0x27C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C550u;
    // 0x27c554: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D318u, 0x27C550u, 0x27C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C558u;
label_27c558:
    // 0x27c558: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x27C558u;
    {
        const bool branch_taken_0x27c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C558u;
        // 0x27c55c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c558) {
            ctx->pc = 0x27C6B4u;
            goto label_27c6b4;
        }
    }
    ctx->pc = 0x27C560u;
label_27c560:
    // 0x27c560: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x27c560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27c564: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C564u;
    {
        const bool branch_taken_0x27c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c564) {
            ctx->pc = 0x27C568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C564u;
            // 0x27c568: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C578u;
            goto label_27c578;
        }
    }
    ctx->pc = 0x27C56Cu;
    // 0x27c56c: 0x2410fd99  addiu       $s0, $zero, -0x267
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966681));
    // 0x27c570: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27C570u;
    {
        const bool branch_taken_0x27c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C570u;
        // 0x27c574: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c570) {
            ctx->pc = 0x27C6B4u;
            goto label_27c6b4;
        }
    }
    ctx->pc = 0x27C578u;
label_27c578:
    // 0x27c578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c57c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c580:
    // 0x27c580: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27c584: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x27c588: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27c588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c58c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27c590: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x27c590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c594: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27C594u;
    {
        const bool branch_taken_0x27c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C594u;
        // 0x27c598: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c594) {
            ctx->pc = 0x27C580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c580;
        }
    }
    ctx->pc = 0x27C59Cu;
    // 0x27c59c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27c59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c5a0:
    // 0x27c5a0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27C5A0u;
    {
        const bool branch_taken_0x27c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5A0u;
        // 0x27c5a4: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5a0) {
            ctx->pc = 0x27C65Cu;
            goto label_27c65c;
        }
    }
    ctx->pc = 0x27C5A8u;
label_27c5a8:
    // 0x27c5a8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27C5A8u;
    SET_GPR_U32(ctx, 31, 0x27C5B0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27C5A8u, 0x27C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5B0u;
label_27c5b0:
    // 0x27c5b0: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27C5B0u;
    SET_GPR_U32(ctx, 31, 0x27C5B8u);
    ctx->pc = 0x27C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5B0u;
    // 0x27c5b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27C5B0u, 0x27C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5B8u;
label_27c5b8:
    // 0x27c5b8: 0x2403fda7  addiu       $v1, $zero, -0x259
    ctx->pc = 0x27c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
    // 0x27c5bc: 0x50430036  beql        $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27C5BCu;
    {
        const bool branch_taken_0x27c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27c5bc) {
            ctx->pc = 0x27C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5BCu;
            // 0x27c5c0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C698u;
            goto label_27c698;
        }
    }
    ctx->pc = 0x27C5C4u;
    // 0x27c5c4: 0x56800034  bnel        $s4, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x27C5C4u;
    {
        const bool branch_taken_0x27c5c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5c4) {
            ctx->pc = 0x27C5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5C4u;
            // 0x27c5c8: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C698u;
            goto label_27c698;
        }
    }
    ctx->pc = 0x27C5CCu;
    // 0x27c5cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27c5ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27c5d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x27c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x27c5d4: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x27c5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27c5d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27c5dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c5e0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C5E0u;
    {
        const bool branch_taken_0x27c5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c5e0) {
            ctx->pc = 0x27C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C5E0u;
            // 0x27c5e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C5F0u;
            goto label_27c5f0;
        }
    }
    ctx->pc = 0x27C5E8u;
    // 0x27c5e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27C5E8u;
    {
        const bool branch_taken_0x27c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E8u;
        // 0x27c5ec: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e8) {
            ctx->pc = 0x27C698u;
            goto label_27c698;
        }
    }
    ctx->pc = 0x27C5F0u;
label_27c5f0:
    // 0x27c5f0: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x27C5F0u;
    SET_GPR_U32(ctx, 31, 0x27C5F8u);
    ctx->pc = 0x27C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5F0u;
    // 0x27c5f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x27C5F0u, 0x27C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5F8u;
label_27c5f8:
    // 0x27c5f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27c5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27c600:
    // 0x27c600: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27c604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27c608: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x27c608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27c60c: 0x0  nop
    ctx->pc = 0x27c60cu;
    // NOP
    // 0x27c610: 0x0  nop
    ctx->pc = 0x27c610u;
    // NOP
    // 0x27c614: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27C614u;
    {
        const bool branch_taken_0x27c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C614u;
        // 0x27c618: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c614) {
            ctx->pc = 0x27C600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c600;
        }
    }
    ctx->pc = 0x27C61Cu;
    // 0x27c61c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c620: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c624: 0xc0bf1c0  jal         func_2FC700
    ctx->pc = 0x27C624u;
    SET_GPR_U32(ctx, 31, 0x27C62Cu);
    ctx->pc = 0x27C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C624u;
    // 0x27c628: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC700u, 0x27C624u, 0x27C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C62Cu;
label_27c62c:
    // 0x27c62c: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x27c62cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c634: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x27c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x27c638: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27c63c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c640:
    // 0x27c640: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27c644: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x27c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x27c648: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27c648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c64c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27c650: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x27c650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c654: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27C654u;
    {
        const bool branch_taken_0x27c654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C654u;
        // 0x27c658: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c654) {
            ctx->pc = 0x27C640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c640;
        }
    }
    ctx->pc = 0x27C65Cu;
label_27c65c:
    // 0x27c65c: 0x26f1353c  addiu       $s1, $s7, 0x353C
    ctx->pc = 0x27c65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 13628));
    // 0x27c660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27c664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x27c668: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c66c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c670: 0xc0bf246  jal         func_2FC918
    ctx->pc = 0x27C670u;
    SET_GPR_U32(ctx, 31, 0x27C678u);
    ctx->pc = 0x27C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C670u;
    // 0x27c674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC918u, 0x27C670u, 0x27C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C678u;
label_27c678:
    // 0x27c678: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C678u;
    {
        const bool branch_taken_0x27c678 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C678u;
        // 0x27c67c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c678) {
            ctx->pc = 0x27C6A0u;
            goto label_27c6a0;
        }
    }
    ctx->pc = 0x27C680u;
    // 0x27c680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27c680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c688: 0xc0bf1e8  jal         func_2FC7A0
    ctx->pc = 0x27C688u;
    SET_GPR_U32(ctx, 31, 0x27C690u);
    ctx->pc = 0x27C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C688u;
    // 0x27c68c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7A0u, 0x27C688u, 0x27C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C690u;
label_27c690:
    // 0x27c690: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x27C690u;
    {
        const bool branch_taken_0x27c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c690) {
            ctx->pc = 0x27C5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c5a8;
        }
    }
    ctx->pc = 0x27C698u;
label_27c698:
    // 0x27c698: 0x1bc0000f  blez        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x27C698u;
    {
        const bool branch_taken_0x27c698 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x27C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C698u;
        // 0x27c69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c698) {
            ctx->pc = 0x27C6D8u;
            goto label_27c6d8;
        }
    }
    ctx->pc = 0x27C6A0u;
label_27c6a0:
    // 0x27c6a0: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27C6A0u;
    SET_GPR_U32(ctx, 31, 0x27C6A8u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27C6A0u, 0x27C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6A8u;
label_27c6a8:
    // 0x27c6a8: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27C6A8u;
    SET_GPR_U32(ctx, 31, 0x27C6B0u);
    ctx->pc = 0x27C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6A8u;
    // 0x27c6ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27C6A8u, 0x27C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6B0u;
label_27c6b0:
    // 0x27c6b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c6b4:
    // 0x27c6b4: 0x26f1353c  addiu       $s1, $s7, 0x353C
    ctx->pc = 0x27c6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 13628));
    // 0x27c6b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27c6bc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C6BCu;
    {
        const bool branch_taken_0x27c6bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6BCu;
        // 0x27c6c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6bc) {
            ctx->pc = 0x27C6D8u;
            goto label_27c6d8;
        }
    }
    ctx->pc = 0x27C6C4u;
    // 0x27c6c4: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x27C6C4u;
    SET_GPR_U32(ctx, 31, 0x27C6CCu);
    ctx->pc = 0x27C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6C4u;
    // 0x27c6c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8E0u, 0x27C6C4u, 0x27C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6CCu;
label_27c6cc:
    // 0x27c6cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c6d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x27c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x27c6d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27c6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27c6d8:
    // 0x27c6d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27c6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c6dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27c6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27c6e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c6e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27c6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27c6e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x27c6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c6ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x27c6ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27c6f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x27c6f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c6f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x27c6f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27c6f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x27c6f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c6fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x27c6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27c700: 0x3e00008  jr          $ra
    ctx->pc = 0x27C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C700u;
        // 0x27c704: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C708u;
    // 0x27c708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27c70c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c710: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x27c710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x27c714: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x27c714u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x27c718: 0x8ee33540  lw          $v1, 0x3540($s7)
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 13632)));
    // 0x27c71c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27c720: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27c720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c724: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x27c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27c728: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27c72c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27c730: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x27c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x27c734: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27c738: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x27c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x27c73c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27c73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27c740: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x27c740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27c744: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x27c744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27c748: 0x14600173  bnez        $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x27C748u;
    {
        const bool branch_taken_0x27c748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C748u;
        // 0x27c74c: 0xe7b40078  swc1        $f20, 0x78($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c748) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27C750u;
    // 0x27c750: 0xc09ef6c  jal         func_27BDB0
    ctx->pc = 0x27C750u;
    SET_GPR_U32(ctx, 31, 0x27C758u);
    ctx->pc = 0x27BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDB0u, 0x27C750u, 0x27C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C758u;
label_27c758:
    // 0x27c758: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27c758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c75c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x27c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x27c760: 0x24422d78  addiu       $v0, $v0, 0x2D78
    ctx->pc = 0x27c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
    // 0x27c764: 0x8c430404  lw          $v1, 0x404($v0)
    ctx->pc = 0x27c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x27c768: 0x50600103  beql        $v1, $zero, . + 4 + (0x103 << 2)
    ctx->pc = 0x27C768u;
    {
        const bool branch_taken_0x27c768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c768) {
            ctx->pc = 0x27C76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C768u;
            // 0x27c76c: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB78u;
            goto label_27cb78;
        }
    }
    ctx->pc = 0x27C770u;
    // 0x27c770: 0x94450408  lhu         $a1, 0x408($v0)
    ctx->pc = 0x27c770u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1032)));
    // 0x27c774: 0xc09f122  jal         func_27C488
    ctx->pc = 0x27C774u;
    SET_GPR_U32(ctx, 31, 0x27C77Cu);
    ctx->pc = 0x27C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C774u;
    // 0x27c778: 0x24440204  addiu       $a0, $v0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C488u;
    goto label_27c488;
    ctx->pc = 0x27C77Cu;
label_27c77c:
    // 0x27c77c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27c77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c780: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C780u;
    {
        const bool branch_taken_0x27c780 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27c780) {
            ctx->pc = 0x27C7A0u;
            goto label_27c7a0;
        }
    }
    ctx->pc = 0x27C788u;
    // 0x27c788: 0x6820163  bltzl       $s4, . + 4 + (0x163 << 2)
    ctx->pc = 0x27C788u;
    {
        const bool branch_taken_0x27c788 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x27c788) {
            ctx->pc = 0x27C78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C788u;
            // 0x27c78c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27C790u;
    // 0x27c790: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27C790u;
    SET_GPR_U32(ctx, 31, 0x27C798u);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27C790u, 0x27C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C798u;
label_27c798:
    // 0x27c798: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x27C798u;
    {
        const bool branch_taken_0x27c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C798u;
        // 0x27c79c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c798) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27C7A0u;
label_27c7a0:
    // 0x27c7a0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c7a4: 0x2463c7ec  addiu       $v1, $v1, -0x3814
    ctx->pc = 0x27c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952940));
    // 0x27c7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c7ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C7ACu;
    {
        const bool branch_taken_0x27c7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7ac) {
            ctx->pc = 0x27C7CCu;
            goto label_27c7cc;
        }
    }
    ctx->pc = 0x27C7B4u;
    // 0x27c7b4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27c7b8: 0x2484c800  addiu       $a0, $a0, -0x3800
    ctx->pc = 0x27c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
    // 0x27c7bc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27c7c0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27c7c4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27C7C4u;
    SET_GPR_U32(ctx, 31, 0x27C7CCu);
    ctx->pc = 0x27C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7C4u;
    // 0x27c7c8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27C7C4u, 0x27C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7CCu;
label_27c7cc:
    // 0x27c7cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C7CCu;
    {
        const bool branch_taken_0x27c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c7cc) {
            ctx->pc = 0x27C800u;
            goto label_27c800;
        }
    }
    ctx->pc = 0x27C7D4u;
    // 0x27c7d4: 0x86dcb10b  lh          $gp, -0x4EF5($s6)
    ctx->pc = 0x27c7d4u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294947083)));
    // 0x27c7d8: 0x3ef9020  add         $s2, $ra, $t7
    ctx->pc = 0x27c7d8u;
    {     int32_t rs_val = GPR_S32(ctx, 31);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x27c7dc: 0x87912afb  lh          $s1, 0x2AFB($gp)
    ctx->pc = 0x27c7dcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 11003)));
    // 0x27c7e0: 0xa3627db9  sb          $v0, 0x7DB9($k1)
    ctx->pc = 0x27c7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 27), 32185), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c7e4: 0x2cd3020  add         $a2, $s6, $t5
    ctx->pc = 0x27c7e4u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x27c7e8: 0x8e1cfcc5  lw          $gp, -0x33B($s0)
    ctx->pc = 0x27c7e8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966469)));
    // 0x27c7ec: 0x0  nop
    ctx->pc = 0x27c7ecu;
    // NOP
    // 0x27c7f0: 0x7712727  bgezal      $k1, . + 4 + (0x2727 << 2)
    ctx->pc = 0x27C7F0u;
    {
        const bool branch_taken_0x27c7f0 = (GPR_S32(ctx, 27) >= 0);
        SET_GPR_U32(ctx, 31, 0x27C7F8u);
        ctx->pc = 0x27C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7F0u;
        // 0x27c7f4: 0x980b359e  lwr         $t3, 0x359E($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13726); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7f0) {
            ctx->pc = 0x286490u;
            return;
        }
    }
    ctx->pc = 0x27C7F8u;
    // 0x27c7f8: 0x77127e3  bgezal      $k1, . + 4 + (0x27E3 << 2)
    ctx->pc = 0x27C7F8u;
    {
        const bool branch_taken_0x27c7f8 = (GPR_S32(ctx, 27) >= 0);
        SET_GPR_U32(ctx, 31, 0x27C800u);
        if (branch_taken_0x27c7f8) {
            ctx->pc = 0x286788u;
            return;
        }
    }
    ctx->pc = 0x27C800u;
label_27c800:
    // 0x27c800: 0xa719a178  sh          $t9, -0x5E88($t8)
    ctx->pc = 0x27c800u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294943096), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c804: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c804u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c808: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c808u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c80c: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c80cu;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c810: 0xc3dd448c  ll          $sp, 0x448C($fp)
    ctx->pc = 0x27c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 17548); SET_GPR_S32(ctx, 29, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27c814: 0xa33ce24c  sb          $gp, -0x1DB4($t9)
    ctx->pc = 0x27c814u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 4294959692), (uint8_t)GPR_U32(ctx, 28));
    // 0x27c818: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c818u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c81c: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c81cu;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c820: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c820u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c824: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x27c824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x27c828: 0x2610c810  addiu       $s0, $s0, -0x37F0
    ctx->pc = 0x27c828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952976));
    // 0x27c82c: 0x5b9a07a  mtsah       $t5, -0x5F86
    ctx->pc = 0x27c82cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)4294942842) & 0x7) << 4;
    // 0x27c830: 0x523a07a  bgezl       $t1, . + 4 + (-0x5F86 << 2)
    ctx->pc = 0x27C830u;
    {
        const bool branch_taken_0x27c830 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x27c830) {
            ctx->pc = 0x27C834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C830u;
            // 0x27c834: 0xc04a966  jal         func_12A598 (Delay Slot)
            // JAL 0x12A598 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x264A1Cu;
            return;
        }
    }
    ctx->pc = 0x27C838u;
    // 0x27c838: 0x6779c278  daddiu      $t9, $k1, -0x3D88
    ctx->pc = 0x27c838u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)4294951544);
label_27c83c:
    // 0x27c83c: 0x2779b178  addiu       $t9, $k1, -0x4E88
    ctx->pc = 0x27c83cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 27), 4294947192));
    // 0x27c840: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c840u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c844: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c844u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c848: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c848u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c84c: 0x44af33b  tlti        $v0, -0xCC5
    ctx->pc = 0x27c84cu;
    if (GPR_S64(ctx, 2) < (int64_t)(int32_t)4294964027) { runtime->handleTrap(rdram, ctx); }
    // 0x27c850: 0xe3fcf57a  sc          $gp, -0xA86($ra)
    ctx->pc = 0x27c850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294964602); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27c854: 0xd5fab28d  ldc1        $f26, -0x4D73($t7)
    ctx->pc = 0x27c854u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x27C854 raw=0xD5FAB28D");
    // 0x27c858: 0xa779b07b  sh          $t9, -0x4F85($k1)
    ctx->pc = 0x27c858u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946939), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c85c: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c860: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c860u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c864: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x27c864u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x27c868: 0x2610c84c  addiu       $s0, $s0, -0x37B4
    ctx->pc = 0x27c868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953036));
    // 0x27c86c: 0xd762b279  ldc1        $f2, -0x4D87($k1)
    ctx->pc = 0x27c86cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x27C86C raw=0xD762B279");
    // 0x27c870: 0x5b9a07a  mtsah       $t5, -0x5F86
    ctx->pc = 0x27c870u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)4294942842) & 0x7) << 4;
    // 0x27c874: 0x53ba07a  .word       0x053BA07A                   # INVALID     $t1, $k1, -0x5F86 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27c874u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x1B at 0x27C874 raw=0x053BA07A");
    // 0x27c878: 0xc04a966  jal         func_12A598
    ctx->pc = 0x27C878u;
    SET_GPR_U32(ctx, 31, 0x27C880u);
    ctx->pc = 0x27C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C878u;
    // 0x27c87c: 0xe759d279  swc1        $f25, -0x2D87($k0) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 26), 4294955641), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x27C878u, 0x27C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C880u;
label_27c880:
    // 0x27c880: 0xa739a178  sh          $t9, -0x5E88($t9)
    ctx->pc = 0x27c880u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 4294943096), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c884: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c884u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c888: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c888u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c88c: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c88cu;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c890: 0x27b9a058  addiu       $t9, $sp, -0x5FA8
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 4294942808));
    // 0x27c894: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c894u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c898: 0xa779b078  sh          $t9, -0x4F88($k1)
    ctx->pc = 0x27c898u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294946936), (uint16_t)GPR_U32(ctx, 25));
    // 0x27c89c: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x27c89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x27c8a0: 0x2610c890  addiu       $s0, $s0, -0x3770
    ctx->pc = 0x27c8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953104));
    // 0x27c8a4: 0x53ba07a  .word       0x053BA07A                   # INVALID     $t1, $k1, -0x5F86 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27c8a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x1B at 0x27C8A4 raw=0x053BA07A");
    // 0x27c8a8: 0x5b9a07a  mtsah       $t5, -0x5F86
    ctx->pc = 0x27c8a8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)4294942842) & 0x7) << 4;
    // 0x27c8ac: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x27C8ACu;
    SET_GPR_U32(ctx, 31, 0x27C8B4u);
    ctx->pc = 0x27C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8ACu;
    // 0x27c8b0: 0xe759d279  swc1        $f25, -0x2D87($k0) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 26), 4294955641), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x27C8ACu, 0x27C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8B4u;
label_27c8b4:
    // 0x27c8b4: 0x53ba07a  .word       0x053BA07A                   # INVALID     $t1, $k1, -0x5F86 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27c8b4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x1B at 0x27C8B4 raw=0x053BA07A");
    // 0x27c8b8: 0x5b9a07a  mtsah       $t5, -0x5F86
    ctx->pc = 0x27c8b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)4294942842) & 0x7) << 4;
    // 0x27c8bc: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x27C8BCu;
    SET_GPR_U32(ctx, 31, 0x27C8C4u);
    ctx->pc = 0x27C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8BCu;
    // 0x27c8c0: 0xe759d279  swc1        $f25, -0x2D87($k0) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 26), 4294955641), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A230u, 0x27C8BCu, 0x27C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8C4u;
label_27c8c4:
    // 0x27c8c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C8C4u;
    {
        const bool branch_taken_0x27c8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8c4) {
            ctx->pc = 0x27C8F4u;
            goto label_27c8f4;
        }
    }
    ctx->pc = 0x27C8CCu;
    // 0x27c8cc: 0xa3034e31  sb          $v1, 0x4E31($t8)
    ctx->pc = 0x27c8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 20017), (uint8_t)GPR_U32(ctx, 3));
    // 0x27c8d0: 0xca45d05  jal         func_2917414
    ctx->pc = 0x27C8D0u;
    SET_GPR_U32(ctx, 31, 0x27C8D8u);
    ctx->pc = 0x27C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8D0u;
    // 0x27c8d4: 0x2571bfc8  addiu       $s1, $t3, -0x4038 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 4294950856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2917414u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2917414u, 0x27C8D0u, 0x27C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8D8u;
label_27c8d8:
    // 0x27c8d8: 0xc566356  jal         func_1598D58
    ctx->pc = 0x27C8D8u;
    SET_GPR_U32(ctx, 31, 0x27C8E0u);
    ctx->pc = 0x27C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8D8u;
    // 0x27c8dc: 0x873bb03b  lh          $k1, -0x4FC5($t9) (Delay Slot)
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294946875)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1598D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598D58u, 0x27C8D8u, 0x27C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8E0u;
label_27c8e0:
    // 0x27c8e0: 0x8e15f51d  lw          $s5, -0xAE3($s0)
    ctx->pc = 0x27c8e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964509)));
    // 0x27c8e4: 0x7772721  .word       0x07772721                   # INVALID     $k1, $s7, 0x2721 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27c8e4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x17 at 0x27C8E4 raw=0x07772721");
    // 0x27c8e8: 0x980b359f  lwr         $t3, 0x359F($zero)
    ctx->pc = 0x27c8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13727); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27c8ec: 0x77727e5  .word       0x077727E5                   # INVALID     $k1, $s7, 0x27E5 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x27c8ecu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x17 at 0x27C8EC raw=0x077727E5");
    // 0x27c8f0: 0x0  nop
    ctx->pc = 0x27c8f0u;
    // NOP
label_27c8f4:
    // 0x27c8f4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_27c8f8:
    // 0x27c8f8: 0x2442c8e4  addiu       $v0, $v0, -0x371C
    ctx->pc = 0x27c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953188));
    // 0x27c8fc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27c900: 0x2484c8c4  addiu       $a0, $a0, -0x373C
    ctx->pc = 0x27c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953156));
    // 0x27c904: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27c904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27c908: 0x3c1501c9  lui         $s5, 0x1C9
    ctx->pc = 0x27c908u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)457 << 16));
    // 0x27c90c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27c910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27c910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c914: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x27c914u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x27c918: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27c91c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27c91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27c920: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27c920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27c924: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27C924u;
    SET_GPR_U32(ctx, 31, 0x27C92Cu);
    ctx->pc = 0x27C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C924u;
    // 0x27c928: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27C924u, 0x27C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C92Cu;
label_27c92c:
    // 0x27c92c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x27c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x27c930: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27c930u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27c934: 0x24c6a018  addiu       $a2, $a2, -0x5FE8
    ctx->pc = 0x27c934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942744));
    // 0x27c938: 0x25083c50  addiu       $t0, $t0, 0x3C50
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15440));
    // 0x27c93c: 0x26a43e58  addiu       $a0, $s5, 0x3E58
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 15960));
    // 0x27c940: 0x2405021a  addiu       $a1, $zero, 0x21A
    ctx->pc = 0x27c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x27c944: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x27c944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c948: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27c94c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27c94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27c950: 0xc043e24  jal         func_10F890
    ctx->pc = 0x27C950u;
    SET_GPR_U32(ctx, 31, 0x27C958u);
    ctx->pc = 0x27C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C950u;
    // 0x27c954: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x27C950u, 0x27C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C958u;
label_27c958:
    // 0x27c958: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27c958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27c95c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27c95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27c960: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x27c960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c964: 0x0  nop
    ctx->pc = 0x27c964u;
    // NOP
label_27c968:
    // 0x27c968: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27C968u;
    SET_GPR_U32(ctx, 31, 0x27C970u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27C968u, 0x27C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C970u;
label_27c970:
    // 0x27c970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c978: 0x0  nop
    ctx->pc = 0x27c978u;
    // NOP
    // 0x27c97c: 0x0  nop
    ctx->pc = 0x27c97cu;
    // NOP
    // 0x27c980: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27c980u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27c984: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27c984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27c988: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27c988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c98c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c98cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27c990: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27c994: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27C994u;
    {
        const bool branch_taken_0x27c994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C994u;
        // 0x27c998: 0x2502021  addu        $a0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c994) {
            ctx->pc = 0x27C9ACu;
            goto label_27c9ac;
        }
    }
    ctx->pc = 0x27C99Cu;
    // 0x27c99c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27c99cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27c9a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27c9a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27c9a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27c9a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27c9a8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x27c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_27c9ac:
    // 0x27c9ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27c9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27c9b0: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x27c9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27c9b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27C9B4u;
    {
        const bool branch_taken_0x27c9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9B4u;
        // 0x27c9b8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9b4) {
            ctx->pc = 0x27C968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c968;
        }
    }
    ctx->pc = 0x27C9BCu;
    // 0x27c9bc: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27c9c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27c9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27c9c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27c9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27c9c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9cc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27c9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27c9d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27c9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27c9d4: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27c9d8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27c9dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27c9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27c9e0:
    // 0x27c9e0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27C9E0u;
    SET_GPR_U32(ctx, 31, 0x27C9E8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27C9E0u, 0x27C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9E8u;
label_27c9e8:
    // 0x27c9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c9f0: 0x0  nop
    ctx->pc = 0x27c9f0u;
    // NOP
    // 0x27c9f4: 0x0  nop
    ctx->pc = 0x27c9f4u;
    // NOP
    // 0x27c9f8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27c9f8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27c9fc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27c9fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27ca00: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ca04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ca04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27ca08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27ca08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ca0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CA0Cu;
    {
        const bool branch_taken_0x27ca0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA0Cu;
        // 0x27ca10: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca0c) {
            ctx->pc = 0x27CA24u;
            goto label_27ca24;
        }
    }
    ctx->pc = 0x27CA14u;
    // 0x27ca14: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27ca14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27ca18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ca18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27ca1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27ca1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ca20: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x27ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_27ca24:
    // 0x27ca24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27ca24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27ca28: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x27ca28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x27ca2c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27CA2Cu;
    {
        const bool branch_taken_0x27ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA2Cu;
        // 0x27ca30: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca2c) {
            ctx->pc = 0x27C9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c9e0;
        }
    }
    ctx->pc = 0x27CA34u;
    // 0x27ca34: 0x26b13e58  addiu       $s1, $s5, 0x3E58
    ctx->pc = 0x27ca34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 15960));
    // 0x27ca38: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x27ca38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x27ca3c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x27CA3Cu;
    SET_GPR_U32(ctx, 31, 0x27CA44u);
    ctx->pc = 0x27CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA3Cu;
    // 0x27ca40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x27CA3Cu, 0x27CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA44u;
label_27ca44:
    // 0x27ca44: 0x8e64353c  lw          $a0, 0x353C($s3)
    ctx->pc = 0x27ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13628)));
    // 0x27ca48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27ca48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca50: 0xc0bf220  jal         func_2FC880
    ctx->pc = 0x27CA50u;
    SET_GPR_U32(ctx, 31, 0x27CA58u);
    ctx->pc = 0x27CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA50u;
    // 0x27ca54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC880u, 0x27CA50u, 0x27CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA58u;
label_27ca58:
    // 0x27ca58: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27CA58u;
    {
        const bool branch_taken_0x27ca58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA58u;
        // 0x27ca5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca58) {
            ctx->pc = 0x27CAE0u;
            goto label_27cae0;
        }
    }
    ctx->pc = 0x27CA60u;
    // 0x27ca60: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27ca64: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27ca64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27ca68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27ca68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27ca6c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27ca70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27ca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27ca74: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27ca78: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27ca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27ca7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27ca7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27ca80:
    // 0x27ca80: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27CA80u;
    SET_GPR_U32(ctx, 31, 0x27CA88u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27CA80u, 0x27CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA88u;
label_27ca88:
    // 0x27ca88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ca8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ca8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ca90: 0x0  nop
    ctx->pc = 0x27ca90u;
    // NOP
    // 0x27ca94: 0x0  nop
    ctx->pc = 0x27ca94u;
    // NOP
    // 0x27ca98: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27ca98u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27ca9c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27caa0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27caa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27caa4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27caa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27caa8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27caa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27caac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CAACu;
    {
        const bool branch_taken_0x27caac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAACu;
        // 0x27cab0: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caac) {
            ctx->pc = 0x27CAC4u;
            goto label_27cac4;
        }
    }
    ctx->pc = 0x27CAB4u;
    // 0x27cab4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27cab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27cab8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27cabc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27cabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27cac0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x27cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_27cac4:
    // 0x27cac4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27cac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27cac8: 0x2e02021a  sltiu       $v0, $s0, 0x21A
    ctx->pc = 0x27cac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)538) ? 1 : 0);
    // 0x27cacc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27CACCu;
    {
        const bool branch_taken_0x27cacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CACCu;
        // 0x27cad0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cacc) {
            ctx->pc = 0x27CA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ca80;
        }
    }
    ctx->pc = 0x27CAD4u;
    // 0x27cad4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x27CAD4u;
    {
        const bool branch_taken_0x27cad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cad4) {
            ctx->pc = 0x27CCE8u;
            goto label_27cce8;
        }
    }
    ctx->pc = 0x27CADCu;
    // 0x27cadc: 0x0  nop
    ctx->pc = 0x27cadcu;
    // NOP
label_27cae0:
    // 0x27cae0: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27cae4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27cae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27cae8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27cae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27caec: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27caecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27caf0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27caf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27caf4: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27caf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27caf8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27cafc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27cafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27cb00:
    // 0x27cb00: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27CB00u;
    SET_GPR_U32(ctx, 31, 0x27CB08u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27CB00u, 0x27CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB08u;
label_27cb08:
    // 0x27cb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cb0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27cb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27cb10: 0x0  nop
    ctx->pc = 0x27cb10u;
    // NOP
    // 0x27cb14: 0x0  nop
    ctx->pc = 0x27cb14u;
    // NOP
    // 0x27cb18: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27cb18u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27cb1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27cb1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27cb20: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27cb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cb24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cb24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27cb28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27cb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27cb2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CB2Cu;
    {
        const bool branch_taken_0x27cb2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB2Cu;
        // 0x27cb30: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb2c) {
            ctx->pc = 0x27CB44u;
            goto label_27cb44;
        }
    }
    ctx->pc = 0x27CB34u;
    // 0x27cb34: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27cb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27cb38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27cb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27cb3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27cb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27cb40: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x27cb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_27cb44:
    // 0x27cb44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27cb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27cb48: 0x2e02021a  sltiu       $v0, $s0, 0x21A
    ctx->pc = 0x27cb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)538) ? 1 : 0);
    // 0x27cb4c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27CB4Cu;
    {
        const bool branch_taken_0x27cb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB4Cu;
        // 0x27cb50: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb4c) {
            ctx->pc = 0x27CB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cb00;
        }
    }
    ctx->pc = 0x27CB54u;
    // 0x27cb54: 0xc09f4fe  jal         func_27D3F8
    ctx->pc = 0x27CB54u;
    SET_GPR_U32(ctx, 31, 0x27CB5Cu);
    ctx->pc = 0x27CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB54u;
    // 0x27cb58: 0x8e64353c  lw          $a0, 0x353C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 13628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D3F8u, 0x27CB54u, 0x27CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB5Cu;
label_27cb5c:
    // 0x27cb5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27cb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb60: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27cb64: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27CB64u;
    {
        const bool branch_taken_0x27cb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB64u;
        // 0x27cb68: 0x2411fda6  addiu       $s1, $zero, -0x25A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966694));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb64) {
            ctx->pc = 0x27CBB0u;
            goto label_27cbb0;
        }
    }
    ctx->pc = 0x27CB6Cu;
    // 0x27cb6c: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x27cb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27cb70: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x27CB70u;
    {
        const bool branch_taken_0x27cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB70u;
        // 0x27cb74: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb70) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CB78u;
label_27cb78:
    // 0x27cb78: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x27cb7c: 0x94453e50  lhu         $a1, 0x3E50($v0)
    ctx->pc = 0x27cb7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 15952)));
    // 0x27cb80: 0xc09f122  jal         func_27C488
    ctx->pc = 0x27CB80u;
    SET_GPR_U32(ctx, 31, 0x27CB88u);
    ctx->pc = 0x27CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB80u;
    // 0x27cb84: 0x24843c50  addiu       $a0, $a0, 0x3C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C488u;
    goto label_27c488;
    ctx->pc = 0x27CB88u;
label_27cb88:
    // 0x27cb88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27cb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb8c: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27CB8Cu;
    {
        const bool branch_taken_0x27cb8c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB8Cu;
        // 0x27cb90: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb8c) {
            ctx->pc = 0x27CBB4u;
            goto label_27cbb4;
        }
    }
    ctx->pc = 0x27CB94u;
    // 0x27cb94: 0x6820060  bltzl       $s4, . + 4 + (0x60 << 2)
    ctx->pc = 0x27CB94u;
    {
        const bool branch_taken_0x27cb94 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x27cb94) {
            ctx->pc = 0x27CB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB94u;
            // 0x27cb98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CB9Cu;
    // 0x27cb9c: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27CB9Cu;
    SET_GPR_U32(ctx, 31, 0x27CBA4u);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27CB9Cu, 0x27CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBA4u;
label_27cba4:
    // 0x27cba4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x27CBA4u;
    {
        const bool branch_taken_0x27cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBA4u;
        // 0x27cba8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cba4) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CBACu;
    // 0x27cbac: 0x0  nop
    ctx->pc = 0x27cbacu;
    // NOP
label_27cbb0:
    // 0x27cbb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27cbb4:
    // 0x27cbb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cbb8: 0x8c443550  lw          $a0, 0x3550($v0)
    ctx->pc = 0x27cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x27cbbc: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x27CBBCu;
    {
        const bool branch_taken_0x27cbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBBCu;
        // 0x27cbc0: 0xaee33540  sw          $v1, 0x3540($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 13632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbbc) {
            ctx->pc = 0x27CCD0u;
            goto label_27ccd0;
        }
    }
    ctx->pc = 0x27CBC4u;
    // 0x27cbc4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27cbc8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27cbcc: 0x26103554  addiu       $s0, $s0, 0x3554
    ctx->pc = 0x27cbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13652));
    // 0x27cbd0: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x27cbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x27cbd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cbd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbdc: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x27cbdcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x27cbe0: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x27CBE0u;
    SET_GPR_U32(ctx, 31, 0x27CBE8u);
    ctx->pc = 0x27CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBE0u;
    // 0x27cbe4: 0x2411fd9e  addiu       $s1, $zero, -0x262 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966686));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04E8u, 0x27CBE0u, 0x27CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBE8u;
label_27cbe8:
    // 0x27cbe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cbec: 0xc0abf34  jal         func_2AFCD0
    ctx->pc = 0x27CBECu;
    SET_GPR_U32(ctx, 31, 0x27CBF4u);
    ctx->pc = 0x27CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBECu;
    // 0x27cbf0: 0x26723558  addiu       $s2, $s3, 0x3558 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 13656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFCD0u, 0x27CBECu, 0x27CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBF4u;
label_27cbf4:
    // 0x27cbf4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x27CBF4u;
    {
        const bool branch_taken_0x27cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBF4u;
        // 0x27cbf8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbf4) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CBFCu;
    // 0x27cbfc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27cc00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc04: 0xc0ac5f0  jal         func_2B17C0
    ctx->pc = 0x27CC04u;
    SET_GPR_U32(ctx, 31, 0x27CC0Cu);
    ctx->pc = 0x27CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC04u;
    // 0x27cc08: 0x24a5d960  addiu       $a1, $a1, -0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B17C0u, 0x27CC04u, 0x27CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC0Cu;
label_27cc0c:
    // 0x27cc0c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27cc10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27cc14: 0x24a5dee0  addiu       $a1, $a1, -0x2120
    ctx->pc = 0x27cc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
    // 0x27cc18: 0xc0ac5f2  jal         func_2B17C8
    ctx->pc = 0x27CC18u;
    SET_GPR_U32(ctx, 31, 0x27CC20u);
    ctx->pc = 0x27CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC18u;
    // 0x27cc1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B17C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B17C8u, 0x27CC18u, 0x27CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0xc0ac52c  jal         func_2B14B0
    ctx->pc = 0x27CC20u;
    SET_GPR_U32(ctx, 31, 0x27CC28u);
    ctx->pc = 0x27CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC20u;
    // 0x27cc24: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B14B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B14B0u, 0x27CC20u, 0x27CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC28u;
label_27cc28:
    // 0x27cc28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cc2c: 0x8c44353c  lw          $a0, 0x353C($v0)
    ctx->pc = 0x27cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13628)));
    // 0x27cc30: 0xc0a31c4  jal         func_28C710
    ctx->pc = 0x27CC30u;
    SET_GPR_U32(ctx, 31, 0x27CC38u);
    ctx->pc = 0x27CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC30u;
    // 0x27cc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C710u, 0x27CC30u, 0x27CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC38u;
label_27cc38:
    // 0x27cc38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc3c: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x27CC3Cu;
    {
        const bool branch_taken_0x27cc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC3Cu;
        // 0x27cc40: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc3c) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CC44u;
label_27cc44:
    // 0x27cc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc48: 0xc0a13ca  jal         func_284F28
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x27CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC48u;
    // 0x27cc4c: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F28u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27cc54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc58: 0xc0ac02a  jal         func_2B00A8
    ctx->pc = 0x27CC58u;
    SET_GPR_U32(ctx, 31, 0x27CC60u);
    ctx->pc = 0x27CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC58u;
    // 0x27cc5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00A8u, 0x27CC58u, 0x27CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC60u;
label_27cc60:
    // 0x27cc60: 0x26703558  addiu       $s0, $s3, 0x3558
    ctx->pc = 0x27cc60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 13656));
    // 0x27cc64: 0x0  nop
    ctx->pc = 0x27cc64u;
    // NOP
label_27cc68:
    // 0x27cc68: 0xc0ac504  jal         func_2B1410
    ctx->pc = 0x27CC68u;
    SET_GPR_U32(ctx, 31, 0x27CC70u);
    ctx->pc = 0x27CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC68u;
    // 0x27cc6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1410u, 0x27CC68u, 0x27CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC70u;
label_27cc70:
    // 0x27cc70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cc74: 0xc0ac49e  jal         func_2B1278
    ctx->pc = 0x27CC74u;
    SET_GPR_U32(ctx, 31, 0x27CC7Cu);
    ctx->pc = 0x27CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC74u;
    // 0x27cc78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1278u, 0x27CC74u, 0x27CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC7Cu;
label_27cc7c:
    // 0x27cc7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27cc7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc80: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x27cc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x27cc84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27CC84u;
    {
        const bool branch_taken_0x27cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC84u;
        // 0x27cc88: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc84) {
            ctx->pc = 0x27CCA8u;
            goto label_27cca8;
        }
    }
    ctx->pc = 0x27CC8Cu;
    // 0x27cc8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27cc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cc94: 0x8c63a020  lw          $v1, -0x5FE0($v1)
    ctx->pc = 0x27cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942752)));
    // 0x27cc98: 0x600008  jr          $v1
    ctx->pc = 0x27CC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CCA0u: goto label_27cca0;
            case 0x27CCA8u: goto label_27cca8;
            case 0x27CCC8u: goto label_27ccc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CC98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CCA0u;
label_27cca0:
    // 0x27cca0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27CCA0u;
    {
        const bool branch_taken_0x27cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCA0u;
        // 0x27cca4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cca0) {
            ctx->pc = 0x27CCC8u;
            goto label_27ccc8;
        }
    }
    ctx->pc = 0x27CCA8u;
label_27cca8:
    // 0x27cca8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CCA8u;
    SET_GPR_U32(ctx, 31, 0x27CCB0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CCA8u, 0x27CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCB0u;
label_27ccb0:
    // 0x27ccb0: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x27ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x27ccb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ccb8: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x27CCB8u;
    {
        const bool branch_taken_0x27ccb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x27CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCB8u;
        // 0x27ccbc: 0x2411fd9e  addiu       $s1, $zero, -0x262 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966686));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccb8) {
            ctx->pc = 0x27CCE8u;
            goto label_27cce8;
        }
    }
    ctx->pc = 0x27CCC0u;
    // 0x27ccc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27CCC0u;
    {
        const bool branch_taken_0x27ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ccc0) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CCC8u;
label_27ccc8:
    // 0x27ccc8: 0x12c0ffe7  beqz        $s6, . + 4 + (-0x19 << 2)
    ctx->pc = 0x27CCC8u;
    {
        const bool branch_taken_0x27ccc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCC8u;
        // 0x27cccc: 0x26703558  addiu       $s0, $s3, 0x3558 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 13656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccc8) {
            ctx->pc = 0x27CC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cc68;
        }
    }
    ctx->pc = 0x27CCD0u;
label_27ccd0:
    // 0x27ccd0: 0x6820011  bltzl       $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x27CCD0u;
    {
        const bool branch_taken_0x27ccd0 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x27ccd0) {
            ctx->pc = 0x27CCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CCD0u;
            // 0x27ccd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CCD8u;
    // 0x27ccd8: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27CCD8u;
    SET_GPR_U32(ctx, 31, 0x27CCE0u);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27CCD8u, 0x27CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCE0u;
label_27cce0:
    // 0x27cce0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27CCE0u;
    {
        const bool branch_taken_0x27cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCE0u;
        // 0x27cce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cce0) {
            ctx->pc = 0x27CD18u;
            goto label_27cd18;
        }
    }
    ctx->pc = 0x27CCE8u;
label_27cce8:
    // 0x27cce8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CCE8u;
    SET_GPR_U32(ctx, 31, 0x27CCF0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CCE8u, 0x27CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCF0u;
label_27ccf0:
    // 0x27ccf0: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27CCF0u;
    SET_GPR_U32(ctx, 31, 0x27CCF8u);
    ctx->pc = 0x27CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CCF0u;
    // 0x27ccf4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27CCF0u, 0x27CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CCF8u;
label_27ccf8:
    // 0x27ccf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ccfc:
    // 0x27ccfc: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CCFCu;
    {
        const bool branch_taken_0x27ccfc = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x27ccfc) {
            ctx->pc = 0x27CD0Cu;
            goto label_27cd0c;
        }
    }
    ctx->pc = 0x27CD04u;
    // 0x27cd04: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27CD04u;
    SET_GPR_U32(ctx, 31, 0x27CD0Cu);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27CD04u, 0x27CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD0Cu;
label_27cd0c:
    // 0x27cd0c: 0xc09f40a  jal         func_27D028
    ctx->pc = 0x27CD0Cu;
    SET_GPR_U32(ctx, 31, 0x27CD14u);
    ctx->pc = 0x27D028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D028u, 0x27CD0Cu, 0x27CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD14u;
label_27cd14:
    // 0x27cd14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27cd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27cd18:
    // 0x27cd18: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27cd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cd1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27cd1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27cd20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27cd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cd24: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x27cd24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27cd28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27cd28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27cd2c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x27cd2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27cd30: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27cd30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27cd34: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x27cd34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27cd38: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27cd3c: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x27cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27cd40: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x27cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27cd44: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x27cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x27CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD48u;
        // 0x27cd4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CD50u;
    // 0x27cd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27cd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27cd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27cd60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27cd64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27cd68: 0xc09ef6c  jal         func_27BDB0
    ctx->pc = 0x27CD68u;
    SET_GPR_U32(ctx, 31, 0x27CD70u);
    ctx->pc = 0x27CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD68u;
    // 0x27cd6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDB0u, 0x27CD68u, 0x27CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD70u;
label_27cd70:
    // 0x27cd70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27cd74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27cd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd78: 0x8c623550  lw          $v0, 0x3550($v1)
    ctx->pc = 0x27cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13648)));
    // 0x27cd7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27cd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd84: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27CD84u;
    {
        const bool branch_taken_0x27cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD84u;
        // 0x27cd88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd84) {
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CD8Cu;
    // 0x27cd8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cd90: 0xc0ac0b8  jal         func_2B02E0
    ctx->pc = 0x27CD90u;
    SET_GPR_U32(ctx, 31, 0x27CD98u);
    ctx->pc = 0x27CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CD90u;
    // 0x27cd94: 0x8c443558  lw          $a0, 0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B02E0u, 0x27CD90u, 0x27CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD98u;
label_27cd98:
    // 0x27cd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd9c: 0x601001a  bgez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27CD9Cu;
    {
        const bool branch_taken_0x27cd9c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27cd9c) {
            ctx->pc = 0x27CE08u;
            goto label_27ce08;
        }
    }
    ctx->pc = 0x27CDA4u;
    // 0x27cda4: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CDA4u;
    SET_GPR_U32(ctx, 31, 0x27CDACu);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CDA4u, 0x27CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDACu;
label_27cdac:
    // 0x27cdac: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x27cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x27cdb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cdb4: 0x54640014  bnel        $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27CDB4u;
    {
        const bool branch_taken_0x27cdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27cdb4) {
            ctx->pc = 0x27CDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDB4u;
            // 0x27cdb8: 0x2410fd9e  addiu       $s0, $zero, -0x262 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966686));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CE08u;
            goto label_27ce08;
        }
    }
    ctx->pc = 0x27CDBCu;
    // 0x27cdbc: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CDBCu;
    SET_GPR_U32(ctx, 31, 0x27CDC4u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CDBCu, 0x27CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDC4u;
label_27cdc4:
    // 0x27cdc4: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27CDC4u;
    SET_GPR_U32(ctx, 31, 0x27CDCCu);
    ctx->pc = 0x27CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDC4u;
    // 0x27cdc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27CDC4u, 0x27CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDCCu;
label_27cdcc:
    // 0x27cdcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27CDCCu;
    {
        const bool branch_taken_0x27cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDCCu;
        // 0x27cdd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdcc) {
            ctx->pc = 0x27CE08u;
            goto label_27ce08;
        }
    }
    ctx->pc = 0x27CDD4u;
    // 0x27cdd4: 0x0  nop
    ctx->pc = 0x27cdd4u;
    // NOP
label_27cdd8:
    // 0x27cdd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cddc: 0xc0bf220  jal         func_2FC880
    ctx->pc = 0x27CDDCu;
    SET_GPR_U32(ctx, 31, 0x27CDE4u);
    ctx->pc = 0x27CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDDCu;
    // 0x27cde0: 0x8c44353c  lw          $a0, 0x353C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC880u, 0x27CDDCu, 0x27CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDE4u;
label_27cde4:
    // 0x27cde4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x27cde4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27cde8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x27cde8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x27cdec: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CDECu;
    {
        const bool branch_taken_0x27cdec = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27cdec) {
            ctx->pc = 0x27CE08u;
            goto label_27ce08;
        }
    }
    ctx->pc = 0x27CDF4u;
    // 0x27cdf4: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27CDF4u;
    SET_GPR_U32(ctx, 31, 0x27CDFCu);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27CDF4u, 0x27CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDFCu;
label_27cdfc:
    // 0x27cdfc: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27CDFCu;
    SET_GPR_U32(ctx, 31, 0x27CE04u);
    ctx->pc = 0x27CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CDFCu;
    // 0x27ce00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27CDFCu, 0x27CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE04u;
label_27ce04:
    // 0x27ce04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ce04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ce08:
    // 0x27ce08: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27CE08u;
    {
        const bool branch_taken_0x27ce08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE08u;
        // 0x27ce0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce08) {
            ctx->pc = 0x27CE1Cu;
            goto label_27ce1c;
        }
    }
    ctx->pc = 0x27CE10u;
    // 0x27ce10: 0xc09ef8a  jal         func_27BE28
    ctx->pc = 0x27CE10u;
    SET_GPR_U32(ctx, 31, 0x27CE18u);
    ctx->pc = 0x27BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE28u, 0x27CE10u, 0x27CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CE18u;
label_27ce18:
    // 0x27ce18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ce18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ce1c:
    // 0x27ce1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ce1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ce20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ce20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ce24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ce24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ce28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x27CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE2Cu;
        // 0x27ce30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CE34u;
    // 0x27ce34: 0x0  nop
    ctx->pc = 0x27ce34u;
    // NOP
}
