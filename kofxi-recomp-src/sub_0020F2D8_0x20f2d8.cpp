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

// Function: sub_0020F2D8
// Address: 0x20f2d8 - 0x20f5b0
void sub_0020F2D8_0x20f2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F2D8_0x20f2d8");
#endif

    switch (ctx->pc) {
        case 0x20f350u: goto label_20f350;
        case 0x20f358u: goto label_20f358;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f458u: goto label_20f458;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f524u: goto label_20f524;
        case 0x20f538u: goto label_20f538;
        case 0x20f570u: goto label_20f570;
        default: break;
    }

    ctx->pc = 0x20f2d8u;

    // 0x20f2d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20f2dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20f2e0: 0x27af0060  addiu       $t7, $sp, 0x60
    ctx->pc = 0x20f2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f2e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20f2e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f2ec: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x20f2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20f2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20f2f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2f8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20f2fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20f2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f300: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20f304: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x20f304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f308: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x20f30c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x20f30cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f310: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x20f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x20f314: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x20f314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f318: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20f31c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20f320: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x20f320u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f324: 0x8fb70068  lw          $s7, 0x68($sp)
    ctx->pc = 0x20f324u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20f328: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20f32c: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20F32Cu;
    {
        const bool branch_taken_0x20f32c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F32Cu;
        // 0x20f330: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f32c) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F334u;
    // 0x20f334: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f338: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f33c: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x20f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
    // 0x20f340: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20f340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f344: 0x2529fb58  addiu       $t1, $t1, -0x4A8
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966104));
    // 0x20f348: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x20f34c: 0x0  nop
    ctx->pc = 0x20f34cu;
    // NOP
label_20f350:
    // 0x20f350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f354: 0x2408d8ef  addiu       $t0, $zero, -0x2711
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_20f358:
    // 0x20f358: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f35c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f364: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f368: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f36c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f36cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f370: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f370u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f374: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f374u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f378: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f378u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f37c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f380: 0x8084408  j           func_211020
    ctx->pc = 0x20F380u;
    ctx->pc = 0x20F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F380u;
    // 0x20f384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20F380u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x20f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20f38c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F38Cu;
    {
        const bool branch_taken_0x20f38c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F38Cu;
        // 0x20f390: 0x3c09003f  lui         $t1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f38c) {
            ctx->pc = 0x20F3ACu;
            goto label_20f3ac;
        }
    }
    ctx->pc = 0x20F394u;
    // 0x20f394: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f398: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x20f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
    // 0x20f39c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20f39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3a0: 0x2529fb68  addiu       $t1, $t1, -0x498
    ctx->pc = 0x20f3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966120));
    // 0x20f3a4: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x20F3A4u;
    {
        const bool branch_taken_0x20f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3A4u;
        // 0x20f3a8: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3a4) {
            ctx->pc = 0x20F350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f350;
        }
    }
    ctx->pc = 0x20F3ACu;
label_20f3ac:
    // 0x20f3ac: 0xc088696  jal         func_221A58
    ctx->pc = 0x20F3ACu;
    SET_GPR_U32(ctx, 31, 0x20F3B4u);
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x20F3ACu, 0x20F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3B4u;
label_20f3b4:
    // 0x20f3b4: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x20f3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20f3b8: 0x104f0016  beq         $v0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x20F3B8u;
    {
        const bool branch_taken_0x20f3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x20F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B8u;
        // 0x20f3bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b8) {
            ctx->pc = 0x20F414u;
            goto label_20f414;
        }
    }
    ctx->pc = 0x20F3C0u;
    // 0x20f3c0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x20f3c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20f3c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f3c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f3cc: 0x8dea0010  lw          $t2, 0x10($t7)
    ctx->pc = 0x20f3ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x20f3d0: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f3d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f3d8: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
    // 0x20f3dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f3e0: 0x2529fb88  addiu       $t1, $t1, -0x478
    ctx->pc = 0x20f3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966152));
    // 0x20f3e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f3e8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20f3ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f3ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f3f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f3f4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f3f8: 0x2408d8ea  addiu       $t0, $zero, -0x2716
    ctx->pc = 0x20f3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957290));
    // 0x20f3fc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f3fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f400: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f400u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f404: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f404u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f408: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f40c: 0x8084408  j           func_211020
    ctx->pc = 0x20F40Cu;
    ctx->pc = 0x20F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F40Cu;
    // 0x20f410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211020u, 0x20F40Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x20F414u;
label_20f414:
    // 0x20f414: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x20F414u;
    SET_GPR_U32(ctx, 31, 0x20F41Cu);
    ctx->pc = 0x20F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F414u;
    // 0x20f418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x20F414u, 0x20F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F41Cu;
label_20f41c:
    // 0x20f41c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f41cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f420: 0x104f0009  beq         $v0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F420u;
    {
        const bool branch_taken_0x20f420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x20F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F420u;
        // 0x20f424: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f420) {
            ctx->pc = 0x20F448u;
            goto label_20f448;
        }
    }
    ctx->pc = 0x20F428u;
    // 0x20f428: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f428u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f42c: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
    // 0x20f430: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20f430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f434: 0x2529fba0  addiu       $t1, $t1, -0x460
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966176));
    // 0x20f438: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_20f43c:
    // 0x20f43c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f440: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x20F440u;
    {
        const bool branch_taken_0x20f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F440u;
        // 0x20f444: 0x2408d8e9  addiu       $t0, $zero, -0x2717 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f440) {
            ctx->pc = 0x20F358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f358;
        }
    }
    ctx->pc = 0x20F448u;
label_20f448:
    // 0x20f448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f450: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x20F450u;
    SET_GPR_U32(ctx, 31, 0x20F458u);
    ctx->pc = 0x20F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F450u;
    // 0x20f454: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x20F450u, 0x20F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F458u;
label_20f458:
    // 0x20f458: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x20f458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x20f45c: 0x16a00052  bnez        $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x20F45Cu;
    {
        const bool branch_taken_0x20f45c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F45Cu;
        // 0x20f460: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f45c) {
            ctx->pc = 0x20F5A8u;
            goto label_20f5a8;
        }
    }
    ctx->pc = 0x20F464u;
    // 0x20f464: 0x8e2f104c  lw          $t7, 0x104C($s1)
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4172)));
    // 0x20f468: 0xae4f0070  sw          $t7, 0x70($s2)
    ctx->pc = 0x20f468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 15));
label_20f46c:
    // 0x20f46c: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x20f46cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20f470: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F470u;
    {
        const bool branch_taken_0x20f470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x1f4a00a  movz        $s4, $t7, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f470) {
            ctx->pc = 0x20F498u;
            goto label_20f498;
        }
    }
    ctx->pc = 0x20F478u;
    // 0x20f478: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f47c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f480: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20f484: 0xc089e36  jal         func_2278D8
    ctx->pc = 0x20F484u;
    SET_GPR_U32(ctx, 31, 0x20F48Cu);
    ctx->pc = 0x20F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F484u;
    // 0x20f488: 0x2484fbb8  addiu       $a0, $a0, -0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278D8u, 0x20F484u, 0x20F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F48Cu;
label_20f48c:
    // 0x20f48c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20f490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f494: 0xae4f0010  sw          $t7, 0x10($s2)
    ctx->pc = 0x20f494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 15));
label_20f498:
    // 0x20f498: 0x240f2000  addiu       $t7, $zero, 0x2000
    ctx->pc = 0x20f498u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x20f49c: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F49Cu;
    {
        const bool branch_taken_0x20f49c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F49Cu;
        // 0x20f4a0: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f49c) {
            ctx->pc = 0x20F4C4u;
            goto label_20f4c4;
        }
    }
    ctx->pc = 0x20F4A4u;
    // 0x20f4a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f4a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20f4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x20f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20f4b0: 0xc089e36  jal         func_2278D8
    ctx->pc = 0x20F4B0u;
    SET_GPR_U32(ctx, 31, 0x20F4B8u);
    ctx->pc = 0x20F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F4B0u;
    // 0x20f4b4: 0x2484fbc8  addiu       $a0, $a0, -0x438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278D8u, 0x20F4B0u, 0x20F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4B8u;
label_20f4b8:
    // 0x20f4b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f4b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f4bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20f4bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4c0: 0xae4f001c  sw          $t7, 0x1C($s2)
    ctx->pc = 0x20f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 15));
label_20f4c4:
    // 0x20f4c4: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x20f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x20f4c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20f4cc: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x20f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x20f4d0: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x20f4d4: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x20f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x20f4d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4dc: 0xae570018  sw          $s7, 0x18($s2)
    ctx->pc = 0x20f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 23));
    // 0x20f4e0: 0xc08984a  jal         func_226128
    ctx->pc = 0x20F4E0u;
    SET_GPR_U32(ctx, 31, 0x20F4E8u);
    ctx->pc = 0x20F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F4E0u;
    // 0x20f4e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226128u, 0x20F4E0u, 0x20F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4E8u;
label_20f4e8:
    // 0x20f4e8: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x20f4e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x20f4ec: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f4f0: 0x25f3fb40  addiu       $s3, $t7, -0x4C0
    ctx->pc = 0x20f4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966080));
    // 0x20f4f4: 0x24e7fbd8  addiu       $a3, $a3, -0x428
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966232));
    // 0x20f4f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4fc: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x20f500: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20f504: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F504u;
    SET_GPR_U32(ctx, 31, 0x20F50Cu);
    ctx->pc = 0x20F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F504u;
    // 0x20f508: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F504u, 0x20F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F50Cu;
label_20f50c:
    // 0x20f50c: 0xae500024  sw          $s0, 0x24($s2)
    ctx->pc = 0x20f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
    // 0x20f510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f514: 0x8e470070  lw          $a3, 0x70($s2)
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x20f518: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x20f518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f51c: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x20F51Cu;
    SET_GPR_U32(ctx, 31, 0x20F524u);
    ctx->pc = 0x20F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F51Cu;
    // 0x20f520: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x20F51Cu, 0x20F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F524u;
label_20f524:
    // 0x20f524: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x20F524u;
    {
        const bool branch_taken_0x20f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F524u;
        // 0x20f528: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f524) {
            ctx->pc = 0x20F550u;
            goto label_20f550;
        }
    }
    ctx->pc = 0x20F52Cu;
    // 0x20f52c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f530: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x20F530u;
    SET_GPR_U32(ctx, 31, 0x20F538u);
    ctx->pc = 0x20F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F530u;
    // 0x20f534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x20F530u, 0x20F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F538u;
label_20f538:
    // 0x20f538: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x20f53c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f540: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20f540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f544: 0x2529fbf0  addiu       $t1, $t1, -0x410
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966256));
    // 0x20f548: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x20F548u;
    {
        const bool branch_taken_0x20f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0x240500b1  addiu       $a1, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f548) {
            ctx->pc = 0x20F43Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f43c;
        }
    }
    ctx->pc = 0x20F550u;
label_20f550:
    // 0x20f550: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x20f550u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f554: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f55c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x20f55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f560: 0x24e7fc08  addiu       $a3, $a3, -0x3F8
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966280));
    // 0x20f564: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20f568: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F568u;
    SET_GPR_U32(ctx, 31, 0x20F570u);
    ctx->pc = 0x20F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F568u;
    // 0x20f56c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F568u, 0x20F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F570u;
label_20f570:
    // 0x20f570: 0xae510074  sw          $s1, 0x74($s2)
    ctx->pc = 0x20f570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 17));
    // 0x20f574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f578: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f57c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f580: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f584: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f588: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20f588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f58c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20f58cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f590: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20f590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f594: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20f594u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20f598: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20f598u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f59c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20f59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20f5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x20F5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A0u;
        // 0x20f5a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F5A8u;
label_20f5a8:
    // 0x20f5a8: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x20F5A8u;
    {
        const bool branch_taken_0x20f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5A8u;
        // 0x20f5ac: 0xae550070  sw          $s5, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5a8) {
            ctx->pc = 0x20F46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f46c;
        }
    }
    ctx->pc = 0x20F5B0u;
}
