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

// Function: sub_0025A3A8
// Address: 0x25a3a8 - 0x25a4e8
void sub_0025A3A8_0x25a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A3A8_0x25a3a8");
#endif

    switch (ctx->pc) {
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a410u: goto label_25a410;
        case 0x25a424u: goto label_25a424;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a478u: goto label_25a478;
        case 0x25a490u: goto label_25a490;
        default: break;
    }

    ctx->pc = 0x25a3a8u;

    // 0x25a3a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25a3ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25a3b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25a3b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25a3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a3bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25a3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a3c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25a3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25a3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a3d0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x25a3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A3D4u;
    {
        const bool branch_taken_0x25a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3D4u;
        // 0x25a3d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3d4) {
            ctx->pc = 0x25A3ECu;
            goto label_25a3ec;
        }
    }
    ctx->pc = 0x25A3DCu;
    // 0x25a3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3e0: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x25A3E0u;
    SET_GPR_U32(ctx, 31, 0x25A3E8u);
    ctx->pc = 0x25A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3E0u;
    // 0x25a3e4: 0x8c54001c  lw          $s4, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB98u, 0x25A3E0u, 0x25A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3E8u;
label_25a3e8:
    // 0x25a3e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25a3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a3ec:
    // 0x25a3ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25a3f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x25a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25a3f4: 0x8c5012a8  lw          $s0, 0x12A8($v0)
    ctx->pc = 0x25a3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x25a3f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3fc: 0x231800b  movn        $s0, $s1, $s1
    ctx->pc = 0x25a3fcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x25a400: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x25a400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x25a404: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x25a404u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x25a408: 0xc0969e8  jal         func_25A7A0
    ctx->pc = 0x25A408u;
    SET_GPR_U32(ctx, 31, 0x25A410u);
    ctx->pc = 0x25A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A408u;
    // 0x25a40c: 0xa6500020  sh          $s0, 0x20($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7A0u, 0x25A408u, 0x25A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A410u;
label_25a410:
    // 0x25a410: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x25a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x25a414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A414u;
    {
        const bool branch_taken_0x25a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A414u;
        // 0x25a418: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a414) {
            ctx->pc = 0x25A428u;
            goto label_25a428;
        }
    }
    ctx->pc = 0x25A41Cu;
    // 0x25a41c: 0xc0945d0  jal         func_251740
    ctx->pc = 0x25A41Cu;
    SET_GPR_U32(ctx, 31, 0x25A424u);
    ctx->pc = 0x251740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251740u, 0x25A41Cu, 0x25A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A424u;
label_25a424:
    // 0x25a424: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x25a424u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25a428:
    // 0x25a428: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A428u;
    {
        const bool branch_taken_0x25a428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a428) {
            ctx->pc = 0x25A42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A428u;
            // 0x25a42c: 0xde830088  ld          $v1, 0x88($s4) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A440u;
            goto label_25a440;
        }
    }
    ctx->pc = 0x25A430u;
    // 0x25a430: 0xde630080  ld          $v1, 0x80($s3)
    ctx->pc = 0x25a430u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x25a434: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A434u;
    {
        const bool branch_taken_0x25a434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A434u;
        // 0x25a438: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a434) {
            ctx->pc = 0x25A444u;
            goto label_25a444;
        }
    }
    ctx->pc = 0x25A43Cu;
    // 0x25a43c: 0xde830088  ld          $v1, 0x88($s4)
    ctx->pc = 0x25a43cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 136)));
label_25a440:
    // 0x25a440: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25a440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a444:
    // 0x25a444: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x25a444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x25a448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A448u;
    {
        const bool branch_taken_0x25a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A448u;
        // 0x25a44c: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a448) {
            ctx->pc = 0x25A460u;
            goto label_25a460;
        }
    }
    ctx->pc = 0x25A450u;
    // 0x25a450: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x25a450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25a454: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x25a454u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x25a458: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25A458u;
    {
        const bool branch_taken_0x25a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A458u;
        // 0x25a45c: 0xa6500024  sh          $s0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a458) {
            ctx->pc = 0x25A494u;
            goto label_25a494;
        }
    }
    ctx->pc = 0x25A460u;
label_25a460:
    // 0x25a460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25a460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a464: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x25A464u;
    SET_GPR_U32(ctx, 31, 0x25A46Cu);
    ctx->pc = 0x25A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A464u;
    // 0x25a468: 0x64202d  daddu       $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x25A464u, 0x25A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A46Cu;
label_25a46c:
    // 0x25a46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a470: 0xc048082  jal         func_120208
    ctx->pc = 0x25A470u;
    SET_GPR_U32(ctx, 31, 0x25A478u);
    ctx->pc = 0x25A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A470u;
    // 0x25a474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x25A470u, 0x25A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A478u;
label_25a478:
    // 0x25a478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25a478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a47c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x25a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x25a480: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x25a480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a484: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x25a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x25a488: 0xc08c284  jal         func_230A10
    ctx->pc = 0x25A488u;
    SET_GPR_U32(ctx, 31, 0x25A490u);
    ctx->pc = 0x25A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A488u;
    // 0x25a48c: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A10u, 0x25A488u, 0x25A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A490u;
label_25a490:
    // 0x25a490: 0xa6500024  sh          $s0, 0x24($s2)
    ctx->pc = 0x25a490u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 16));
label_25a494:
    // 0x25a494: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x25A494u;
    {
        const bool branch_taken_0x25a494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A494u;
        // 0x25a498: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a494) {
            ctx->pc = 0x25A4C8u;
            goto label_25a4c8;
        }
    }
    ctx->pc = 0x25A49Cu;
    // 0x25a49c: 0xde620088  ld          $v0, 0x88($s3)
    ctx->pc = 0x25a49cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x25a4a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A4A0u;
    {
        const bool branch_taken_0x25a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4A0u;
        // 0x25a4a4: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4a0) {
            ctx->pc = 0x25A4C8u;
            goto label_25a4c8;
        }
    }
    ctx->pc = 0x25A4A8u;
    // 0x25a4a8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x25a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x25a4ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25a4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4b0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x25a4b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a4b4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x25a4b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x25a4b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25a4bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25a4c0: 0xfe420090  sd          $v0, 0x90($s2)
    ctx->pc = 0x25a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 2));
    // 0x25a4c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25a4c8:
    // 0x25a4c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25a4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a4cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25a4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a4d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4DCu;
        // 0x25a4e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A4E4u;
    // 0x25a4e4: 0x0  nop
    ctx->pc = 0x25a4e4u;
    // NOP
    if (ctx->pc == 0x25a4e4u) { ctx->pc = 0x25a4e8u; }
}
