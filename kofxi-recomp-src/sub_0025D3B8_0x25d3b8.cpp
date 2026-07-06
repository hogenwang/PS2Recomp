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

// Function: sub_0025D3B8
// Address: 0x25d3b8 - 0x25d528
void sub_0025D3B8_0x25d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D3B8_0x25d3b8");
#endif

    switch (ctx->pc) {
        case 0x25d3e4u: goto label_25d3e4;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d414u: goto label_25d414;
        case 0x25d444u: goto label_25d444;
        case 0x25d458u: goto label_25d458;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d48cu: goto label_25d48c;
        case 0x25d498u: goto label_25d498;
        case 0x25d4b8u: goto label_25d4b8;
        case 0x25d4dcu: goto label_25d4dc;
        case 0x25d4f0u: goto label_25d4f0;
        case 0x25d4f8u: goto label_25d4f8;
        case 0x25d504u: goto label_25d504;
        default: break;
    }

    ctx->pc = 0x25d3b8u;

    // 0x25d3b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25d3bc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25d3c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25d3c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25d3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25d3cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25d3d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25d3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25d3dc: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D3DCu;
    SET_GPR_U32(ctx, 31, 0x25D3E4u);
    ctx->pc = 0x25D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3DCu;
    // 0x25d3e0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D3DCu, 0x25D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3E4u;
label_25d3e4:
    // 0x25d3e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25d3e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3e8: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x25D3E8u;
    {
        const bool branch_taken_0x25d3e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E8u;
        // 0x25d3ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3e8) {
            ctx->pc = 0x25D504u;
            goto label_25d504;
        }
    }
    ctx->pc = 0x25D3F0u;
    // 0x25d3f0: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25D3F0u;
    SET_GPR_U32(ctx, 31, 0x25D3F8u);
    ctx->pc = 0x25D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3F0u;
    // 0x25d3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25D3F0u, 0x25D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3F8u;
label_25d3f8:
    // 0x25d3f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D3FCu;
    {
        const bool branch_taken_0x25d3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3FCu;
        // 0x25d400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3fc) {
            ctx->pc = 0x25D40Cu;
            goto label_25d40c;
        }
    }
    ctx->pc = 0x25D404u;
    // 0x25d404: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x25D404u;
    {
        const bool branch_taken_0x25d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D404u;
        // 0x25d408: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d404) {
            ctx->pc = 0x25D4F0u;
            goto label_25d4f0;
        }
    }
    ctx->pc = 0x25D40Cu;
label_25d40c:
    // 0x25d40c: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25D40Cu;
    SET_GPR_U32(ctx, 31, 0x25D414u);
    ctx->pc = 0x25D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D40Cu;
    // 0x25d410: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25D40Cu, 0x25D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D414u;
label_25d414:
    // 0x25d414: 0x34128400  ori         $s2, $zero, 0x8400
    ctx->pc = 0x25d414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    // 0x25d418: 0x12923c  dsll32      $s2, $s2, 8
    ctx->pc = 0x25d418u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 8));
    // 0x25d41c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x25d41cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d420: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x25d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x25d424: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D424u;
    {
        const bool branch_taken_0x25d424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x25D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D424u;
        // 0x25d428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d424) {
            ctx->pc = 0x25D434u;
            goto label_25d434;
        }
    }
    ctx->pc = 0x25D42Cu;
    // 0x25d42c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25D42Cu;
    {
        const bool branch_taken_0x25d42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D42Cu;
        // 0x25d430: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d42c) {
            ctx->pc = 0x25D4F0u;
            goto label_25d4f0;
        }
    }
    ctx->pc = 0x25D434u;
label_25d434:
    // 0x25d434: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25d434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d43c: 0xc097928  jal         func_25E4A0
    ctx->pc = 0x25D43Cu;
    SET_GPR_U32(ctx, 31, 0x25D444u);
    ctx->pc = 0x25D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D43Cu;
    // 0x25d440: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E4A0u, 0x25D43Cu, 0x25D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D444u;
label_25d444:
    // 0x25d444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d448: 0x16200029  bnez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x25D448u;
    {
        const bool branch_taken_0x25d448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D448u;
        // 0x25d44c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d448) {
            ctx->pc = 0x25D4F0u;
            goto label_25d4f0;
        }
    }
    ctx->pc = 0x25D450u;
    // 0x25d450: 0xc08b8ee  jal         func_22E3B8
    ctx->pc = 0x25D450u;
    SET_GPR_U32(ctx, 31, 0x25D458u);
    ctx->pc = 0x25D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D450u;
    // 0x25d454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E3B8u, 0x25D450u, 0x25D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D458u;
label_25d458:
    // 0x25d458: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d45c: 0x56200020  bnel        $s1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x25D45Cu;
    {
        const bool branch_taken_0x25d45c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d45c) {
            ctx->pc = 0x25D460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D45Cu;
            // 0x25d460: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D4E0u;
            goto label_25d4e0;
        }
    }
    ctx->pc = 0x25D464u;
    // 0x25d464: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x25d464u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d468: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x25d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x25d46c: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D46Cu;
    {
        const bool branch_taken_0x25d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x25D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D46Cu;
        // 0x25d470: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d46c) {
            ctx->pc = 0x25D484u;
            goto label_25d484;
        }
    }
    ctx->pc = 0x25D474u;
    // 0x25d474: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25D474u;
    SET_GPR_U32(ctx, 31, 0x25D47Cu);
    ctx->pc = 0x25D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D474u;
    // 0x25d478: 0x24110077  addiu       $s1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25D474u, 0x25D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D47Cu;
label_25d47c:
    // 0x25d47c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25D47Cu;
    {
        const bool branch_taken_0x25d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d47c) {
            ctx->pc = 0x25D4F0u;
            goto label_25d4f0;
        }
    }
    ctx->pc = 0x25D484u;
label_25d484:
    // 0x25d484: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25D484u;
    SET_GPR_U32(ctx, 31, 0x25D48Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25D484u, 0x25D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D48Cu;
label_25d48c:
    // 0x25d48c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25d48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d490: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25d490u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25d494: 0x0  nop
    ctx->pc = 0x25d494u;
    // NOP
label_25d498:
    // 0x25d498: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25d49c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D49Cu;
    {
        const bool branch_taken_0x25d49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d49c) {
            ctx->pc = 0x25D4C4u;
            goto label_25d4c4;
        }
    }
    ctx->pc = 0x25D4A4u;
    // 0x25d4a4: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x25d4a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25d4a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D4A8u;
    {
        const bool branch_taken_0x25d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4A8u;
        // 0x25d4ac: 0x26040036  addiu       $a0, $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4a8) {
            ctx->pc = 0x25D4C4u;
            goto label_25d4c4;
        }
    }
    ctx->pc = 0x25D4B0u;
    // 0x25d4b0: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x25D4B0u;
    SET_GPR_U32(ctx, 31, 0x25D4B8u);
    ctx->pc = 0x25D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4B0u;
    // 0x25d4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x25D4B0u, 0x25D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4B8u;
label_25d4b8:
    // 0x25d4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4bc: 0x5220fff6  beql        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x25D4BCu;
    {
        const bool branch_taken_0x25d4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d4bc) {
            ctx->pc = 0x25D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D4BCu;
            // 0x25d4c0: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25d498;
        }
    }
    ctx->pc = 0x25D4C4u;
label_25d4c4:
    // 0x25d4c4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D4C4u;
    {
        const bool branch_taken_0x25d4c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d4c4) {
            ctx->pc = 0x25D4D4u;
            goto label_25d4d4;
        }
    }
    ctx->pc = 0x25D4CCu;
    // 0x25d4cc: 0x96110038  lhu         $s1, 0x38($s0)
    ctx->pc = 0x25d4ccu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25d4d0: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x25d4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
label_25d4d4:
    // 0x25d4d4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25D4D4u;
    SET_GPR_U32(ctx, 31, 0x25D4DCu);
    ctx->pc = 0x25D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4D4u;
    // 0x25d4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25D4D4u, 0x25D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4DCu;
label_25d4dc:
    // 0x25d4dc: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25d4dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_25d4e0:
    // 0x25d4e0: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x25d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x25d4e4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x25d4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d4e8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25D4E8u;
    SET_GPR_U32(ctx, 31, 0x25D4F0u);
    ctx->pc = 0x25D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4E8u;
    // 0x25d4ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25D4E8u, 0x25D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4F0u;
label_25d4f0:
    // 0x25d4f0: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25D4F0u;
    SET_GPR_U32(ctx, 31, 0x25D4F8u);
    ctx->pc = 0x25D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4F0u;
    // 0x25d4f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25D4F0u, 0x25D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4F8u;
label_25d4f8:
    // 0x25d4f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4fc: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D4FCu;
    SET_GPR_U32(ctx, 31, 0x25D504u);
    ctx->pc = 0x25D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4FCu;
    // 0x25d500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D4FCu, 0x25D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D504u;
label_25d504:
    // 0x25d504: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25d504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d508: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25d508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d50c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25d50cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d510: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25d510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d514: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25d514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d518: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25d518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D51Cu;
        // 0x25d520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D524u;
    // 0x25d524: 0x0  nop
    ctx->pc = 0x25d524u;
    // NOP
}
