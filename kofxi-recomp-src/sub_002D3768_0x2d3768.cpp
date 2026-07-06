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

// Function: sub_002D3768
// Address: 0x2d3768 - 0x2d3d08
void sub_002D3768_0x2d3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3768_0x2d3768");
#endif

    switch (ctx->pc) {
        case 0x2d37bcu: goto label_2d37bc;
        case 0x2d37ccu: goto label_2d37cc;
        case 0x2d37d8u: goto label_2d37d8;
        case 0x2d37e4u: goto label_2d37e4;
        case 0x2d37f0u: goto label_2d37f0;
        case 0x2d37f8u: goto label_2d37f8;
        case 0x2d3804u: goto label_2d3804;
        case 0x2d3814u: goto label_2d3814;
        case 0x2d3824u: goto label_2d3824;
        case 0x2d385cu: goto label_2d385c;
        case 0x2d38bcu: goto label_2d38bc;
        case 0x2d38e0u: goto label_2d38e0;
        case 0x2d3914u: goto label_2d3914;
        case 0x2d3958u: goto label_2d3958;
        case 0x2d3978u: goto label_2d3978;
        case 0x2d399cu: goto label_2d399c;
        case 0x2d39ecu: goto label_2d39ec;
        case 0x2d3a10u: goto label_2d3a10;
        case 0x2d3a60u: goto label_2d3a60;
        case 0x2d3a84u: goto label_2d3a84;
        case 0x2d3ae0u: goto label_2d3ae0;
        case 0x2d3af4u: goto label_2d3af4;
        case 0x2d3b04u: goto label_2d3b04;
        case 0x2d3b28u: goto label_2d3b28;
        case 0x2d3b4cu: goto label_2d3b4c;
        case 0x2d3b50u: goto label_2d3b50;
        case 0x2d3b6cu: goto label_2d3b6c;
        case 0x2d3b94u: goto label_2d3b94;
        case 0x2d3bbcu: goto label_2d3bbc;
        case 0x2d3bd8u: goto label_2d3bd8;
        case 0x2d3be8u: goto label_2d3be8;
        case 0x2d3c00u: goto label_2d3c00;
        case 0x2d3c1cu: goto label_2d3c1c;
        case 0x2d3c4cu: goto label_2d3c4c;
        case 0x2d3c78u: goto label_2d3c78;
        case 0x2d3c8cu: goto label_2d3c8c;
        case 0x2d3ca0u: goto label_2d3ca0;
        case 0x2d3cacu: goto label_2d3cac;
        case 0x2d3cb8u: goto label_2d3cb8;
        case 0x2d3cc4u: goto label_2d3cc4;
        case 0x2d3cccu: goto label_2d3ccc;
        case 0x2d3cd4u: goto label_2d3cd4;
        default: break;
    }

    ctx->pc = 0x2d3768u;

    // 0x2d3768: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d376c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3770: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2d3770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2d3774: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d3774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d377c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2d377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2d3780: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2d3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d3784: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d3784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3788: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2d3788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2d378c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d378cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3790: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2d3790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2d3794: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d3794u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3798: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2d3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2d379c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2d379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2d37a0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2d37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2d37a4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2d37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2d37a8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2d37a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2d37ac: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2d37acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2d37b0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2d37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2d37b4: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D37B4u;
    SET_GPR_U32(ctx, 31, 0x2D37BCu);
    ctx->pc = 0x2D37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37B4u;
    // 0x2d37b8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D37B4u, 0x2D37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37BCu;
label_2d37bc:
    // 0x2d37bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d37c0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2d37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2d37c4: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D37C4u;
    SET_GPR_U32(ctx, 31, 0x2D37CCu);
    ctx->pc = 0x2D37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37C4u;
    // 0x2d37c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D37C4u, 0x2D37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37CCu;
label_2d37cc:
    // 0x2d37cc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d37d0: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D37D0u;
    SET_GPR_U32(ctx, 31, 0x2D37D8u);
    ctx->pc = 0x2D37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37D0u;
    // 0x2d37d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D37D0u, 0x2D37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37D8u;
label_2d37d8:
    // 0x2d37d8: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x2d37d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d37dc: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D37DCu;
    SET_GPR_U32(ctx, 31, 0x2D37E4u);
    ctx->pc = 0x2D37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37DCu;
    // 0x2d37e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D37DCu, 0x2D37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37E4u;
label_2d37e4:
    // 0x2d37e4: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x2d37e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d37e8: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D37E8u;
    SET_GPR_U32(ctx, 31, 0x2D37F0u);
    ctx->pc = 0x2D37ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37E8u;
    // 0x2d37ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D37E8u, 0x2D37F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37F0u;
label_2d37f0:
    // 0x2d37f0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x2D37F0u;
    {
        const bool branch_taken_0x2d37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37F0u;
        // 0x2d37f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37f0) {
            ctx->pc = 0x2D3BE0u;
            goto label_2d3be0;
        }
    }
    ctx->pc = 0x2D37F8u;
label_2d37f8:
    // 0x2d37f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d37f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37fc: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D37FCu;
    SET_GPR_U32(ctx, 31, 0x2D3804u);
    ctx->pc = 0x2D3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37FCu;
    // 0x2d3800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D37FCu, 0x2D3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3804u;
label_2d3804:
    // 0x2d3804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3808: 0x16000114  bnez        $s0, . + 4 + (0x114 << 2)
    ctx->pc = 0x2D3808u;
    {
        const bool branch_taken_0x2d3808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3808u;
        // 0x2d380c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3808) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3810u;
    // 0x2d3810: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2d3810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_2d3814:
    // 0x2d3814: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d3814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d381c: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D381Cu;
    SET_GPR_U32(ctx, 31, 0x2D3824u);
    ctx->pc = 0x2D3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D381Cu;
    // 0x2d3820: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D381Cu, 0x2D3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3824u;
label_2d3824:
    // 0x2d3824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3828: 0x1600010c  bnez        $s0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2D3828u;
    {
        const bool branch_taken_0x2d3828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3828u;
        // 0x2d382c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3828) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3830u;
    // 0x2d3830: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3834: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d3834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3838: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d3838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d383c: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x2d383cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x2d3840: 0xfc740000  sd          $s4, 0x0($v1)
    ctx->pc = 0x2d3840u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 20));
    // 0x2d3844: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d3848: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3848u;
    {
        const bool branch_taken_0x2d3848 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d3848) {
            ctx->pc = 0x2D384Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3848u;
            // 0x2d384c: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D386Cu;
            goto label_2d386c;
        }
    }
    ctx->pc = 0x2D3850u;
    // 0x2d3850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3854: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D3854u;
    SET_GPR_U32(ctx, 31, 0x2D385Cu);
    ctx->pc = 0x2D3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3854u;
    // 0x2d3858: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D3854u, 0x2D385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D385Cu;
label_2d385c:
    // 0x2d385c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d385cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3860: 0x160000fe  bnez        $s0, . + 4 + (0xFE << 2)
    ctx->pc = 0x2D3860u;
    {
        const bool branch_taken_0x2d3860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3860u;
        // 0x2d3864: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3860) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3868u;
    // 0x2d3868: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2d3868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2d386c:
    // 0x2d386c: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x2d386cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x2d3870: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2d3870u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2d3874: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d3874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d3878: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d387c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d3880: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d3880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d3884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3888: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d3888u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d388c: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D388Cu;
    {
        const bool branch_taken_0x2d388c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D388Cu;
        // 0x2d3890: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d388c) {
            ctx->pc = 0x2D3900u;
            goto label_2d3900;
        }
    }
    ctx->pc = 0x2D3894u;
    // 0x2d3894: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d3898: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2d3898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2d389c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d389cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d38a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d38a4: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d38a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d38a8: 0x108000eb  beqz        $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2D38A8u;
    {
        const bool branch_taken_0x2d38a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38A8u;
        // 0x2d38ac: 0x2410010a  addiu       $s0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38a8) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D38B0u;
    // 0x2d38b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38b4: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D38B4u;
    SET_GPR_U32(ctx, 31, 0x2D38BCu);
    ctx->pc = 0x2D38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38B4u;
    // 0x2d38b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D38B4u, 0x2D38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38BCu;
label_2d38bc:
    // 0x2d38bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d38bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38c0: 0x160000e6  bnez        $s0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2D38C0u;
    {
        const bool branch_taken_0x2d38c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38C0u;
        // 0x2d38c4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38c0) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D38C8u;
    // 0x2d38c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d38cc: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D38CCu;
    {
        const bool branch_taken_0x2d38cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d38cc) {
            ctx->pc = 0x2D38D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D38CCu;
            // 0x2d38d0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D38F0u;
            goto label_2d38f0;
        }
    }
    ctx->pc = 0x2D38D4u;
    // 0x2d38d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d38d8: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D38D8u;
    SET_GPR_U32(ctx, 31, 0x2D38E0u);
    ctx->pc = 0x2D38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38D8u;
    // 0x2d38dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D38D8u, 0x2D38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38E0u;
label_2d38e0:
    // 0x2d38e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d38e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38e4: 0x160000dd  bnez        $s0, . + 4 + (0xDD << 2)
    ctx->pc = 0x2D38E4u;
    {
        const bool branch_taken_0x2d38e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38E4u;
        // 0x2d38e8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38e4) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D38ECu;
    // 0x2d38ec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d38f0:
    // 0x2d38f0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x2d38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x2d38f4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2D38F4u;
    {
        const bool branch_taken_0x2d38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38F4u;
        // 0x2d38f8: 0xfc540000  sd          $s4, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38f4) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D38FCu;
    // 0x2d38fc: 0x0  nop
    ctx->pc = 0x2d38fcu;
    // NOP
label_2d3900:
    // 0x2d3900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d3904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d390c: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D390Cu;
    SET_GPR_U32(ctx, 31, 0x2D3914u);
    ctx->pc = 0x2D3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D390Cu;
    // 0x2d3910: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D390Cu, 0x2D3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3914u;
label_2d3914:
    // 0x2d3914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3918: 0x160000d0  bnez        $s0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2D3918u;
    {
        const bool branch_taken_0x2d3918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3918u;
        // 0x2d391c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3918) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3920u;
    // 0x2d3920: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d3920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3924: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d3928: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d3928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d392c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3930: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d3930u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3934: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3934u;
    {
        const bool branch_taken_0x2d3934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3934u;
        // 0x2d3938: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3934) {
            ctx->pc = 0x2D3958u;
            goto label_2d3958;
        }
    }
    ctx->pc = 0x2D393Cu;
    // 0x2d393c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d3940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3944: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d3944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d3948: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x2d3948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x2d394c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2D394Cu;
    {
        const bool branch_taken_0x2d394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D394Cu;
        // 0x2d3950: 0xfc540000  sd          $s4, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d394c) {
            ctx->pc = 0x2D3BD0u;
            goto label_2d3bd0;
        }
    }
    ctx->pc = 0x2D3954u;
    // 0x2d3954: 0x0  nop
    ctx->pc = 0x2d3954u;
    // NOP
label_2d3958:
    // 0x2d3958: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d395c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d395cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3960: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3964: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2d3964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d3968: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x2d3968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d396c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2d396cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3970: 0xc0b4f42  jal         func_2D3D08
    ctx->pc = 0x2D3970u;
    SET_GPR_U32(ctx, 31, 0x2D3978u);
    ctx->pc = 0x2D3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3970u;
    // 0x2d3974: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3D08u, 0x2D3970u, 0x2D3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3978u;
label_2d3978:
    // 0x2d3978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d397c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d397cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3980: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3988: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d398c: 0x160000b2  bnez        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2D398Cu;
    {
        const bool branch_taken_0x2d398c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D398Cu;
        // 0x2d3990: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d398c) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3994u;
    // 0x2d3994: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D3994u;
    SET_GPR_U32(ctx, 31, 0x2D399Cu);
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D3994u, 0x2D399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D399Cu;
label_2d399c:
    // 0x2d399c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2d399cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d39a0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d39a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d39a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39ac: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2d39acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d39b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d39b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39b8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2d39b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d39bc: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x2d39bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d39c0: 0x160000a5  bnez        $s0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2D39C0u;
    {
        const bool branch_taken_0x2d39c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39C0u;
        // 0x2d39c4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39c0) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D39C8u;
    // 0x2d39c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d39cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d39d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d39d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d39d8: 0xdc6bfff8  ld          $t3, -0x8($v1)
    ctx->pc = 0x2d39d8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d39dc: 0x11600033  beqz        $t3, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D39DCu;
    {
        const bool branch_taken_0x2d39dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39dc) {
            ctx->pc = 0x2D3AACu;
            goto label_2d3aac;
        }
    }
    ctx->pc = 0x2D39E4u;
    // 0x2d39e4: 0xc0b4f42  jal         func_2D3D08
    ctx->pc = 0x2D39E4u;
    SET_GPR_U32(ctx, 31, 0x2D39ECu);
    ctx->pc = 0x2D3D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3D08u, 0x2D39E4u, 0x2D39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39ECu;
label_2d39ec:
    // 0x2d39ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d39ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d39f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d39f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d39f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d39fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a00: 0x16000095  bnez        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2D3A00u;
    {
        const bool branch_taken_0x2d3a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A00u;
        // 0x2d3a04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a00) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3A08u;
    // 0x2d3a08: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D3A08u;
    SET_GPR_U32(ctx, 31, 0x2D3A10u);
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D3A08u, 0x2D3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A10u;
label_2d3a10:
    // 0x2d3a10: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2d3a10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3a14: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a20: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2d3a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a2c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2d3a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d3a30: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d3a34: 0x16000088  bnez        $s0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2D3A34u;
    {
        const bool branch_taken_0x2d3a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A34u;
        // 0x2d3a38: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a34) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3A3Cu;
    // 0x2d3a3c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d3a40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d3a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3a4c: 0xdc6bfff8  ld          $t3, -0x8($v1)
    ctx->pc = 0x2d3a4cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3a50: 0x11600016  beqz        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D3A50u;
    {
        const bool branch_taken_0x2d3a50 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a50) {
            ctx->pc = 0x2D3AACu;
            goto label_2d3aac;
        }
    }
    ctx->pc = 0x2D3A58u;
    // 0x2d3a58: 0xc0b4f42  jal         func_2D3D08
    ctx->pc = 0x2D3A58u;
    SET_GPR_U32(ctx, 31, 0x2D3A60u);
    ctx->pc = 0x2D3D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3D08u, 0x2D3A58u, 0x2D3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A60u;
label_2d3a60:
    // 0x2d3a60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a68: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d3a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a74: 0x16000078  bnez        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D3A74u;
    {
        const bool branch_taken_0x2d3a74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A74u;
        // 0x2d3a78: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a74) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3A7Cu;
    // 0x2d3a7c: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A84u);
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D3A7Cu, 0x2D3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A84u;
label_2d3a84:
    // 0x2d3a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a88: 0x16000073  bnez        $s0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2D3A88u;
    {
        const bool branch_taken_0x2d3a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A88u;
        // 0x2d3a8c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a88) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3A90u;
    // 0x2d3a90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3a94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d3a98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d3a9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3aa0: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d3aa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3aa4: 0x1480ffac  bnez        $a0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2D3AA4u;
    {
        const bool branch_taken_0x2d3aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AA4u;
        // 0x2d3aa8: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3aa4) {
            ctx->pc = 0x2D3958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3958;
        }
    }
    ctx->pc = 0x2D3AACu;
label_2d3aac:
    // 0x2d3aac: 0x1600006b  bnez        $s0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D3AACu;
    {
        const bool branch_taken_0x2d3aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AACu;
        // 0x2d3ab0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3aac) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3AB4u;
    // 0x2d3ab4: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3AB4u;
    {
        const bool branch_taken_0x2d3ab4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AB4u;
        // 0x2d3ab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ab4) {
            ctx->pc = 0x2D3AD0u;
            goto label_2d3ad0;
        }
    }
    ctx->pc = 0x2D3ABCu;
    // 0x2d3abc: 0x1182000a  beq         $t4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3ABCu;
    {
        const bool branch_taken_0x2d3abc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ABCu;
        // 0x2d3ac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3abc) {
            ctx->pc = 0x2D3AE8u;
            goto label_2d3ae8;
        }
    }
    ctx->pc = 0x2D3AC4u;
    // 0x2d3ac4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D3AC4u;
    {
        const bool branch_taken_0x2d3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AC4u;
        // 0x2d3ac8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ac4) {
            ctx->pc = 0x2D3AFCu;
            goto label_2d3afc;
        }
    }
    ctx->pc = 0x2D3ACCu;
    // 0x2d3acc: 0x0  nop
    ctx->pc = 0x2d3accu;
    // NOP
label_2d3ad0:
    // 0x2d3ad0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ad8: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3AD8u;
    SET_GPR_U32(ctx, 31, 0x2D3AE0u);
    ctx->pc = 0x2D3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3AD8u;
    // 0x2d3adc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3AD8u, 0x2D3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AE0u;
label_2d3ae0:
    // 0x2d3ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3AE0u;
    {
        const bool branch_taken_0x2d3ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AE0u;
        // 0x2d3ae4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ae0) {
            ctx->pc = 0x2D3AF8u;
            goto label_2d3af8;
        }
    }
    ctx->pc = 0x2D3AE8u;
label_2d3ae8:
    // 0x2d3ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3aec: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3AECu;
    SET_GPR_U32(ctx, 31, 0x2D3AF4u);
    ctx->pc = 0x2D3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3AECu;
    // 0x2d3af0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3AECu, 0x2D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AF4u;
label_2d3af4:
    // 0x2d3af4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d3af8:
    // 0x2d3af8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d3af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d3afc:
    // 0x2d3afc: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D3AFCu;
    SET_GPR_U32(ctx, 31, 0x2D3B04u);
    ctx->pc = 0x2D3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3AFCu;
    // 0x2d3b00: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D3AFCu, 0x2D3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B04u;
label_2d3b04:
    // 0x2d3b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b08: 0x16000054  bnez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D3B08u;
    {
        const bool branch_taken_0x2d3b08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B08u;
        // 0x2d3b0c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b08) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3B10u;
    // 0x2d3b10: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2d3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d3b14: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3B14u;
    {
        const bool branch_taken_0x2d3b14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B14u;
        // 0x2d3b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b14) {
            ctx->pc = 0x2D3B40u;
            goto label_2d3b40;
        }
    }
    ctx->pc = 0x2D3B1Cu;
    // 0x2d3b1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d3b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b20: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D3B20u;
    SET_GPR_U32(ctx, 31, 0x2D3B28u);
    ctx->pc = 0x2D3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B20u;
    // 0x2d3b24: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D3B20u, 0x2D3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B28u;
label_2d3b28:
    // 0x2d3b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b2c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3B2Cu;
    {
        const bool branch_taken_0x2d3b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B2Cu;
        // 0x2d3b30: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b2c) {
            ctx->pc = 0x2D3B58u;
            goto label_2d3b58;
        }
    }
    ctx->pc = 0x2D3B34u;
    // 0x2d3b34: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D3B34u;
    {
        const bool branch_taken_0x2d3b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b34) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3B3Cu;
    // 0x2d3b3c: 0x0  nop
    ctx->pc = 0x2d3b3cu;
    // NOP
label_2d3b40:
    // 0x2d3b40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d3b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b44: 0xc0b3f3e  jal         func_2CFCF8
    ctx->pc = 0x2D3B44u;
    SET_GPR_U32(ctx, 31, 0x2D3B4Cu);
    ctx->pc = 0x2D3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B44u;
    // 0x2d3b48: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCF8u, 0x2D3B44u, 0x2D3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B4Cu;
label_2d3b4c:
    // 0x2d3b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b50:
    // 0x2d3b50: 0x16000042  bnez        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D3B50u;
    {
        const bool branch_taken_0x2d3b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B50u;
        // 0x2d3b54: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b50) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3B58u;
label_2d3b58:
    // 0x2d3b58: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d3b5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d3b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b64: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D3B64u;
    SET_GPR_U32(ctx, 31, 0x2D3B6Cu);
    ctx->pc = 0x2D3B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B64u;
    // 0x2d3b68: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D3B64u, 0x2D3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B6Cu;
label_2d3b6c:
    // 0x2d3b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b70: 0x1600003a  bnez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D3B70u;
    {
        const bool branch_taken_0x2d3b70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B70u;
        // 0x2d3b74: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b70) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3B78u;
    // 0x2d3b78: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d3b7c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3B7Cu;
    {
        const bool branch_taken_0x2d3b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B7Cu;
        // 0x2d3b80: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b7c) {
            ctx->pc = 0x2D3BB0u;
            goto label_2d3bb0;
        }
    }
    ctx->pc = 0x2D3B84u;
    // 0x2d3b84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d3b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d3b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b8c: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B94u);
    ctx->pc = 0x2D3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B8Cu;
    // 0x2d3b90: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D3B8Cu, 0x2D3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B94u;
label_2d3b94:
    // 0x2d3b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b98: 0x56000030  bnel        $s0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D3B98u;
    {
        const bool branch_taken_0x2d3b98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b98) {
            ctx->pc = 0x2D3B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3B98u;
            // 0x2d3b9c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3BA0u;
    // 0x2d3ba0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d3ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ba4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D3BA4u;
    {
        const bool branch_taken_0x2d3ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BA4u;
        // 0x2d3ba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ba4) {
            ctx->pc = 0x2D3BD0u;
            goto label_2d3bd0;
        }
    }
    ctx->pc = 0x2D3BACu;
    // 0x2d3bac: 0x0  nop
    ctx->pc = 0x2d3bacu;
    // NOP
label_2d3bb0:
    // 0x2d3bb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bb4: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D3BB4u;
    SET_GPR_U32(ctx, 31, 0x2D3BBCu);
    ctx->pc = 0x2D3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BB4u;
    // 0x2d3bb8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D3BB4u, 0x2D3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BBCu;
label_2d3bbc:
    // 0x2d3bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bc0: 0x16000026  bnez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D3BC0u;
    {
        const bool branch_taken_0x2d3bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BC0u;
        // 0x2d3bc4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bc0) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3BC8u;
    // 0x2d3bc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d3bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d3bd0:
    // 0x2d3bd0: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3BD0u;
    SET_GPR_U32(ctx, 31, 0x2D3BD8u);
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3BD0u, 0x2D3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BD8u;
label_2d3bd8:
    // 0x2d3bd8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D3BD8u;
    {
        const bool branch_taken_0x2d3bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BD8u;
        // 0x2d3bdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bd8) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3BE0u;
label_2d3be0:
    // 0x2d3be0: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D3BE0u;
    SET_GPR_U32(ctx, 31, 0x2D3BE8u);
    ctx->pc = 0x2D3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BE0u;
    // 0x2d3be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D3BE0u, 0x2D3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BE8u;
label_2d3be8:
    // 0x2d3be8: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3BE8u;
    {
        const bool branch_taken_0x2d3be8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D3BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BE8u;
        // 0x2d3bec: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3be8) {
            ctx->pc = 0x2D3C38u;
            goto label_2d3c38;
        }
    }
    ctx->pc = 0x2D3BF0u;
    // 0x2d3bf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d3bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d3bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bf8: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3BF8u;
    SET_GPR_U32(ctx, 31, 0x2D3C00u);
    ctx->pc = 0x2D3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BF8u;
    // 0x2d3bfc: 0xafb30058  sw          $s3, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3BF8u, 0x2D3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C00u;
label_2d3c00:
    // 0x2d3c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c04: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3C04u;
    {
        const bool branch_taken_0x2d3c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C04u;
        // 0x2d3c08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c04) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3C0Cu;
    // 0x2d3c0c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c14: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3C14u;
    SET_GPR_U32(ctx, 31, 0x2D3C1Cu);
    ctx->pc = 0x2D3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C14u;
    // 0x2d3c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3C14u, 0x2D3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C1Cu;
label_2d3c1c:
    // 0x2d3c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c20: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3C20u;
    {
        const bool branch_taken_0x2d3c20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C20u;
        // 0x2d3c24: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c20) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3C28u;
    // 0x2d3c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c2c: 0x1000fef9  b           . + 4 + (-0x107 << 2)
    ctx->pc = 0x2D3C2Cu;
    {
        const bool branch_taken_0x2d3c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C2Cu;
        // 0x2d3c30: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c2c) {
            ctx->pc = 0x2D3814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3814;
        }
    }
    ctx->pc = 0x2D3C34u;
    // 0x2d3c34: 0x0  nop
    ctx->pc = 0x2d3c34u;
    // NOP
label_2d3c38:
    // 0x2d3c38: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x2d3c38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d3c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c44: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3C44u;
    SET_GPR_U32(ctx, 31, 0x2D3C4Cu);
    ctx->pc = 0x2D3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C44u;
    // 0x2d3c48: 0xafb40058  sw          $s4, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3C44u, 0x2D3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C4Cu;
label_2d3c4c:
    // 0x2d3c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c50: 0x1200fee9  beqz        $s0, . + 4 + (-0x117 << 2)
    ctx->pc = 0x2D3C50u;
    {
        const bool branch_taken_0x2d3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C50u;
        // 0x2d3c54: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c50) {
            ctx->pc = 0x2D37F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d37f8;
        }
    }
    ctx->pc = 0x2D3C58u;
label_2d3c58:
    // 0x2d3c58: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2d3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2d3c5c:
    // 0x2d3c5c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3C5Cu;
    {
        const bool branch_taken_0x2d3c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c5c) {
            ctx->pc = 0x2D3CA4u;
            goto label_2d3ca4;
        }
    }
    ctx->pc = 0x2D3C64u;
    // 0x2d3c64: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D3C64u;
    {
        const bool branch_taken_0x2d3c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c64) {
            ctx->pc = 0x2D3CA4u;
            goto label_2d3ca4;
        }
    }
    ctx->pc = 0x2D3C6Cu;
    // 0x2d3c6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d3c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c70: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3C70u;
    SET_GPR_U32(ctx, 31, 0x2D3C78u);
    ctx->pc = 0x2D3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C70u;
    // 0x2d3c74: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3C70u, 0x2D3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C78u;
label_2d3c78:
    // 0x2d3c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c7c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3C7Cu;
    {
        const bool branch_taken_0x2d3c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C7Cu;
        // 0x2d3c80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c7c) {
            ctx->pc = 0x2D3CA4u;
            goto label_2d3ca4;
        }
    }
    ctx->pc = 0x2D3C84u;
    // 0x2d3c84: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3C84u;
    SET_GPR_U32(ctx, 31, 0x2D3C8Cu);
    ctx->pc = 0x2D3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C84u;
    // 0x2d3c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3C84u, 0x2D3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C8Cu;
label_2d3c8c:
    // 0x2d3c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3C90u;
    {
        const bool branch_taken_0x2d3c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C90u;
        // 0x2d3c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c90) {
            ctx->pc = 0x2D3CA4u;
            goto label_2d3ca4;
        }
    }
    ctx->pc = 0x2D3C98u;
    // 0x2d3c98: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3C98u;
    SET_GPR_U32(ctx, 31, 0x2D3CA0u);
    ctx->pc = 0x2D3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C98u;
    // 0x2d3c9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D3C98u, 0x2D3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CA0u;
label_2d3ca0:
    // 0x2d3ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d3ca4:
    // 0x2d3ca4: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3CA4u;
    SET_GPR_U32(ctx, 31, 0x2D3CACu);
    ctx->pc = 0x2D3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CA4u;
    // 0x2d3ca8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D3CA4u, 0x2D3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CACu;
label_2d3cac:
    // 0x2d3cac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3cb0: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3CB0u;
    SET_GPR_U32(ctx, 31, 0x2D3CB8u);
    ctx->pc = 0x2D3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CB0u;
    // 0x2d3cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D3CB0u, 0x2D3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CB8u;
label_2d3cb8:
    // 0x2d3cb8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3cbc: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3CBCu;
    SET_GPR_U32(ctx, 31, 0x2D3CC4u);
    ctx->pc = 0x2D3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CBCu;
    // 0x2d3cc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D3CBCu, 0x2D3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CC4u;
label_2d3cc4:
    // 0x2d3cc4: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3CC4u;
    SET_GPR_U32(ctx, 31, 0x2D3CCCu);
    ctx->pc = 0x2D3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CC4u;
    // 0x2d3cc8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D3CC4u, 0x2D3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CCCu;
label_2d3ccc:
    // 0x2d3ccc: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3CCCu;
    SET_GPR_U32(ctx, 31, 0x2D3CD4u);
    ctx->pc = 0x2D3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CCCu;
    // 0x2d3cd0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D3CCCu, 0x2D3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CD4u;
label_2d3cd4:
    // 0x2d3cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cd8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2d3cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d3cdc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2d3cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3ce0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2d3ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3ce4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2d3ce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d3ce8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2d3ce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3cec: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2d3cecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d3cf0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2d3cf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d3cf4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2d3cf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d3cf8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2d3cf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d3cfc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2d3cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d3d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D00u;
        // 0x2d3d04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3D08u;
}
