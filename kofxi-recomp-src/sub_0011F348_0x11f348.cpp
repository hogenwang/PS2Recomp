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

// Function: sub_0011F348
// Address: 0x11f348 - 0x11fb68
void sub_0011F348_0x11f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F348_0x11f348");
#endif

    switch (ctx->pc) {
        case 0x11f38cu: goto label_11f38c;
        case 0x11f3d4u: goto label_11f3d4;
        case 0x11f3e4u: goto label_11f3e4;
        case 0x11f468u: goto label_11f468;
        case 0x11f48cu: goto label_11f48c;
        case 0x11f4a8u: goto label_11f4a8;
        case 0x11f4ecu: goto label_11f4ec;
        case 0x11f4fcu: goto label_11f4fc;
        case 0x11f574u: goto label_11f574;
        case 0x11f5b8u: goto label_11f5b8;
        case 0x11f5c8u: goto label_11f5c8;
        case 0x11f658u: goto label_11f658;
        case 0x11f67cu: goto label_11f67c;
        case 0x11f738u: goto label_11f738;
        case 0x11f744u: goto label_11f744;
        case 0x11f774u: goto label_11f774;
        case 0x11f784u: goto label_11f784;
        case 0x11f820u: goto label_11f820;
        case 0x11f84cu: goto label_11f84c;
        case 0x11f878u: goto label_11f878;
        case 0x11f894u: goto label_11f894;
        case 0x11f8a4u: goto label_11f8a4;
        case 0x11f8d4u: goto label_11f8d4;
        case 0x11f8e4u: goto label_11f8e4;
        case 0x11f964u: goto label_11f964;
        case 0x11f9acu: goto label_11f9ac;
        case 0x11f9bcu: goto label_11f9bc;
        case 0x11fa3cu: goto label_11fa3c;
        case 0x11fa60u: goto label_11fa60;
        case 0x11fa84u: goto label_11fa84;
        case 0x11fab8u: goto label_11fab8;
        case 0x11fac8u: goto label_11fac8;
        case 0x11fb18u: goto label_11fb18;
        case 0x11fb24u: goto label_11fb24;
        case 0x11fb54u: goto label_11fb54;
        default: break;
    }

    ctx->pc = 0x11f348u;

    // 0x11f348: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f34c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f350: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f354: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f358: 0x2452de00  addiu       $s2, $v0, -0x2200
    ctx->pc = 0x11f358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f35c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f360: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11f360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f368: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f36c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11f370: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F370u;
    {
        const bool branch_taken_0x11f370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F370u;
        // 0x11f374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f370) {
            ctx->pc = 0x11F380u;
            goto label_11f380;
        }
    }
    ctx->pc = 0x11F378u;
    // 0x11f378: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11F378u;
    {
        const bool branch_taken_0x11f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F378u;
        // 0x11f37c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f378) {
            ctx->pc = 0x11F3F8u;
            goto label_11f3f8;
        }
    }
    ctx->pc = 0x11F380u;
label_11f380:
    // 0x11f380: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11f380u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x11f384: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F384u;
    SET_GPR_U32(ctx, 31, 0x11F38Cu);
    ctx->pc = 0x11F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F384u;
    // 0x11f388: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F384u, 0x11F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F38Cu;
label_11f38c:
    // 0x11f38c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F38Cu;
    {
        const bool branch_taken_0x11f38c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F38Cu;
        // 0x11f390: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f38c) {
            ctx->pc = 0x11F39Cu;
            goto label_11f39c;
        }
    }
    ctx->pc = 0x11F394u;
    // 0x11f394: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11F394u;
    {
        const bool branch_taken_0x11f394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F394u;
        // 0x11f398: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f394) {
            ctx->pc = 0x11F3F8u;
            goto label_11f3f8;
        }
    }
    ctx->pc = 0x11F39Cu;
label_11f39c:
    // 0x11f39c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f39cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f3a0: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11f3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11f3a4: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f3a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f3a8: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x11f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x11f3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3b0: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x11f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
    // 0x11f3b4: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f3b8: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f3b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f3bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f3c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11f3c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f3c8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11f3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11f3cc: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F3CCu;
    SET_GPR_U32(ctx, 31, 0x11F3D4u);
    ctx->pc = 0x11F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3CCu;
    // 0x11f3d0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F3CCu, 0x11F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3D4u;
label_11f3d4:
    // 0x11f3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3D4u;
    {
        const bool branch_taken_0x11f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D4u;
        // 0x11f3d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3d4) {
            ctx->pc = 0x11F3ECu;
            goto label_11f3ec;
        }
    }
    ctx->pc = 0x11F3DCu;
    // 0x11f3dc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F3DCu;
    SET_GPR_U32(ctx, 31, 0x11F3E4u);
    ctx->pc = 0x11F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3DCu;
    // 0x11f3e0: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F3DCu, 0x11F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3E4u;
label_11f3e4:
    // 0x11f3e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F3E4u;
    {
        const bool branch_taken_0x11f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E4u;
        // 0x11f3e8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3e4) {
            ctx->pc = 0x11F3F8u;
            goto label_11f3f8;
        }
    }
    ctx->pc = 0x11F3ECu;
label_11f3ec:
    // 0x11f3ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f3f0: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f3f8:
    // 0x11f3f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11f3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f3fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f400: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f404: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F40Cu;
        // 0x11f410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F414u;
    // 0x11f414: 0x0  nop
    ctx->pc = 0x11f414u;
    // NOP
    // 0x11f418: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11f41c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f420: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f424: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f428: 0x2455de00  addiu       $s5, $v0, -0x2200
    ctx->pc = 0x11f428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f42c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11f430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f434: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f438: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11f438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f43c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11f440: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f444: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f448: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x11f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x11f44c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F44Cu;
        // 0x11f450: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F45Cu;
            goto label_11f45c;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11F454u;
    {
        const bool branch_taken_0x11f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F454u;
        // 0x11f458: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f454) {
            ctx->pc = 0x11F510u;
            goto label_11f510;
        }
    }
    ctx->pc = 0x11F45Cu;
label_11f45c:
    // 0x11f45c: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11f45cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11f460: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F460u;
    SET_GPR_U32(ctx, 31, 0x11F468u);
    ctx->pc = 0x11F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F460u;
    // 0x11f464: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F460u, 0x11F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F468u;
label_11f468:
    // 0x11f468: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11F468u;
    {
        const bool branch_taken_0x11f468 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F468u;
        // 0x11f46c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f468) {
            ctx->pc = 0x11F510u;
            goto label_11f510;
        }
    }
    ctx->pc = 0x11F470u;
    // 0x11f470: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F470u;
    {
        const bool branch_taken_0x11f470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f470) {
            ctx->pc = 0x11F484u;
            goto label_11f484;
        }
    }
    ctx->pc = 0x11F478u;
    // 0x11f478: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11f478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11f47c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F47Cu;
    {
        const bool branch_taken_0x11f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F47Cu;
        // 0x11f480: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f47c) {
            ctx->pc = 0x11F494u;
            goto label_11f494;
        }
    }
    ctx->pc = 0x11F484u;
label_11f484:
    // 0x11f484: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F484u;
    SET_GPR_U32(ctx, 31, 0x11F48Cu);
    ctx->pc = 0x11F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F484u;
    // 0x11f488: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F484u, 0x11F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F48Cu;
label_11f48c:
    // 0x11f48c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11F48Cu;
    {
        const bool branch_taken_0x11f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F48Cu;
        // 0x11f490: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f48c) {
            ctx->pc = 0x11F510u;
            goto label_11f510;
        }
    }
    ctx->pc = 0x11F494u;
label_11f494:
    // 0x11f494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11f494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f498: 0x2610dec4  addiu       $s0, $s0, -0x213C
    ctx->pc = 0x11f498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958788));
    // 0x11f49c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x11f49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11f4a0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F4A0u;
    SET_GPR_U32(ctx, 31, 0x11F4A8u);
    ctx->pc = 0x11F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4A0u;
    // 0x11f4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11F4A0u, 0x11F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4A8u;
label_11f4a8:
    // 0x11f4a8: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x11f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x11f4ac: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x11f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x11f4b0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f4b4: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f4b8: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x11f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x11f4bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x11f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f4c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x11f4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x11f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x11f4cc: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f4d0: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f4d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11f4d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f4dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f4e0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11f4e4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F4E4u;
    SET_GPR_U32(ctx, 31, 0x11F4ECu);
    ctx->pc = 0x11F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4E4u;
    // 0x11f4e8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F4E4u, 0x11F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4ECu;
label_11f4ec:
    // 0x11f4ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F4ECu;
    {
        const bool branch_taken_0x11f4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4ECu;
        // 0x11f4f0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4ec) {
            ctx->pc = 0x11F504u;
            goto label_11f504;
        }
    }
    ctx->pc = 0x11F4F4u;
    // 0x11f4f4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F4F4u;
    SET_GPR_U32(ctx, 31, 0x11F4FCu);
    ctx->pc = 0x11F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4F4u;
    // 0x11f4f8: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F4F4u, 0x11F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4FCu;
label_11f4fc:
    // 0x11f4fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F4FCu;
    {
        const bool branch_taken_0x11f4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4FCu;
        // 0x11f500: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4fc) {
            ctx->pc = 0x11F510u;
            goto label_11f510;
        }
    }
    ctx->pc = 0x11F504u;
label_11f504:
    // 0x11f504: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f508: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f510:
    // 0x11f510: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f514: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f518: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f51c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f520: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f524: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F52Cu;
        // 0x11f530: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F534u;
    // 0x11f534: 0x0  nop
    ctx->pc = 0x11f534u;
    // NOP
    // 0x11f538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f53c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11f540: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f544: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f548: 0x2471de00  addiu       $s1, $v1, -0x2200
    ctx->pc = 0x11f548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x11f54c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f550: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f554: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x11f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11f558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F558u;
    {
        const bool branch_taken_0x11f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F558u;
        // 0x11f55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f558) {
            ctx->pc = 0x11F568u;
            goto label_11f568;
        }
    }
    ctx->pc = 0x11F560u;
    // 0x11f560: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11F560u;
    {
        const bool branch_taken_0x11f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F560u;
        // 0x11f564: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f560) {
            ctx->pc = 0x11F5DCu;
            goto label_11f5dc;
        }
    }
    ctx->pc = 0x11F568u;
label_11f568:
    // 0x11f568: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11f568u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11f56c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F56Cu;
    SET_GPR_U32(ctx, 31, 0x11F574u);
    ctx->pc = 0x11F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F56Cu;
    // 0x11f570: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F56Cu, 0x11F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F574u;
label_11f574:
    // 0x11f574: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F574u;
    {
        const bool branch_taken_0x11f574 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F574u;
        // 0x11f578: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f574) {
            ctx->pc = 0x11F584u;
            goto label_11f584;
        }
    }
    ctx->pc = 0x11F57Cu;
    // 0x11f57c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11F57Cu;
    {
        const bool branch_taken_0x11f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F57Cu;
        // 0x11f580: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f57c) {
            ctx->pc = 0x11F5DCu;
            goto label_11f5dc;
        }
    }
    ctx->pc = 0x11F584u;
label_11f584:
    // 0x11f584: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f588: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f588u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f58c: 0xacf0de80  sw          $s0, -0x2180($a3)
    ctx->pc = 0x11f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294958720), GPR_U32(ctx, 16));
    // 0x11f590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f594: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11f598: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f59c: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f59cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f5a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f5a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11f5a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f5ac: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11f5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11f5b0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F5B0u;
    SET_GPR_U32(ctx, 31, 0x11F5B8u);
    ctx->pc = 0x11F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5B0u;
    // 0x11f5b4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F5B0u, 0x11F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5B8u;
label_11f5b8:
    // 0x11f5b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F5B8u;
    {
        const bool branch_taken_0x11f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5B8u;
        // 0x11f5bc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5b8) {
            ctx->pc = 0x11F5D0u;
            goto label_11f5d0;
        }
    }
    ctx->pc = 0x11F5C0u;
    // 0x11f5c0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F5C0u;
    SET_GPR_U32(ctx, 31, 0x11F5C8u);
    ctx->pc = 0x11F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5C0u;
    // 0x11f5c4: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F5C0u, 0x11F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F5C8u;
label_11f5c8:
    // 0x11f5c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F5C8u;
    {
        const bool branch_taken_0x11f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5C8u;
        // 0x11f5cc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5c8) {
            ctx->pc = 0x11F5DCu;
            goto label_11f5dc;
        }
    }
    ctx->pc = 0x11F5D0u;
label_11f5d0:
    // 0x11f5d0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f5d4: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f5dc:
    // 0x11f5dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f5e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f5e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f5e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5ECu;
        // 0x11f5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F5F4u;
    // 0x11f5f4: 0x0  nop
    ctx->pc = 0x11f5f4u;
    // NOP
    // 0x11f5f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11f5fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f600: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11f604: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11f608: 0x2457de00  addiu       $s7, $v0, -0x2200
    ctx->pc = 0x11f608u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f60c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f610: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x11f610u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f614: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f618: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11f618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f61c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f620: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11f620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f624: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11f628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f62c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11f630: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f638: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x11f63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F63Cu;
    {
        const bool branch_taken_0x11f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F63Cu;
        // 0x11f640: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f63c) {
            ctx->pc = 0x11F64Cu;
            goto label_11f64c;
        }
    }
    ctx->pc = 0x11F644u;
    // 0x11f644: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x11F644u;
    {
        const bool branch_taken_0x11f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F644u;
        // 0x11f648: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f644) {
            ctx->pc = 0x11F798u;
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F64Cu;
label_11f64c:
    // 0x11f64c: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x11f64cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x11f650: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F650u;
    SET_GPR_U32(ctx, 31, 0x11F658u);
    ctx->pc = 0x11F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F650u;
    // 0x11f654: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F650u, 0x11F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F658u;
label_11f658:
    // 0x11f658: 0x440004f  bltz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x11F658u;
    {
        const bool branch_taken_0x11f658 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F658u;
        // 0x11f65c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f658) {
            ctx->pc = 0x11F798u;
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F660u;
    // 0x11f660: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F660u;
    {
        const bool branch_taken_0x11f660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f660) {
            ctx->pc = 0x11F674u;
            goto label_11f674;
        }
    }
    ctx->pc = 0x11F668u;
    // 0x11f668: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x11f668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11f66c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F66Cu;
    {
        const bool branch_taken_0x11f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F66Cu;
        // 0x11f670: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f66c) {
            ctx->pc = 0x11F684u;
            goto label_11f684;
        }
    }
    ctx->pc = 0x11F674u;
label_11f674:
    // 0x11f674: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F674u;
    SET_GPR_U32(ctx, 31, 0x11F67Cu);
    ctx->pc = 0x11F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F674u;
    // 0x11f678: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F674u, 0x11F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F67Cu;
label_11f67c:
    // 0x11f67c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11F67Cu;
    {
        const bool branch_taken_0x11f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F67Cu;
        // 0x11f680: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f67c) {
            ctx->pc = 0x11F798u;
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F684u;
label_11f684:
    // 0x11f684: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x11f684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x11f688: 0x2450deb0  addiu       $s0, $v0, -0x2150
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x11f68c: 0xac54deb0  sw          $s4, -0x2150($v0)
    ctx->pc = 0x11f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958768), GPR_U32(ctx, 20));
    // 0x11f690: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x11f690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x11f694: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f698: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x11f698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x11f69c: 0x2443de40  addiu       $v1, $v0, -0x21C0
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x11f6a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6a4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11f6a8: 0x2449de40  addiu       $t1, $v0, -0x21C0
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x11f6ac: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x11f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11f6b0: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x11f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11f6b4: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x11f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11f6b8: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x11f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11f6bc: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x11f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11f6c0: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x11f6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11f6c4: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x11f6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6c8: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x11f6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6cc: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x11f6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6d0: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x11f6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6d4: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x11f6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6d8: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x11f6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6dc: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x11f6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11f6e0: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x11f6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11f6e4: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x11f6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11f6e8: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x11f6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11f6ec: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x11f6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11f6f0: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x11f6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11f6f4: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x11f6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6f8: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x11f6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f6fc: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x11f6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f700: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x11f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f704: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x11f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f708: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x11f708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f70c: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x11f70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11f710: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x11f710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11f714: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x11f714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11f718: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x11f718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11f71c: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x11f71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f720: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x11f720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f724: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x11f724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f728: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x11f728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f72c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11f730: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F730u;
    SET_GPR_U32(ctx, 31, 0x11F738u);
    ctx->pc = 0x11F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F730u;
    // 0x11f734: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11F730u, 0x11F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F738u;
label_11f738:
    // 0x11f738: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x11f738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f73c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x11F73Cu;
    SET_GPR_U32(ctx, 31, 0x11F744u);
    ctx->pc = 0x11F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F73Cu;
    // 0x11f740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x11F73Cu, 0x11F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F744u;
label_11f744:
    // 0x11f744: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f744u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f748: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f74c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11f74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f750: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11f750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f754: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f758: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f75c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f760: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11f764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f768: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11f768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11f76c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F76Cu;
    SET_GPR_U32(ctx, 31, 0x11F774u);
    ctx->pc = 0x11F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F76Cu;
    // 0x11f770: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F76Cu, 0x11F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F774u;
label_11f774:
    // 0x11f774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F774u;
    {
        const bool branch_taken_0x11f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f774) {
            ctx->pc = 0x11F78Cu;
            goto label_11f78c;
        }
    }
    ctx->pc = 0x11F77Cu;
    // 0x11f77c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F77Cu;
    SET_GPR_U32(ctx, 31, 0x11F784u);
    ctx->pc = 0x11F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F77Cu;
    // 0x11f780: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F77Cu, 0x11F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F784u;
label_11f784:
    // 0x11f784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F784u;
    {
        const bool branch_taken_0x11f784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F784u;
        // 0x11f788: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f784) {
            ctx->pc = 0x11F798u;
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F78Cu;
label_11f78c:
    // 0x11f78c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f790: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f798:
    // 0x11f798: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11f798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f79c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11f79cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f7a0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f7a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f7a4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f7a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f7a8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f7ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f7acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f7b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f7b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f7b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f7b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7BCu;
        // 0x11f7c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F7C4u;
    // 0x11f7c4: 0x0  nop
    ctx->pc = 0x11f7c4u;
    // NOP
    // 0x11f7c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11f7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11f7cc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f7d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11f7d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f7d8: 0x2456de00  addiu       $s6, $v0, -0x2200
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f7dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f7e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11f7e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f7e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11f7e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f7f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11f7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11f7f8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11f7fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f800: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x11f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x11f804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F804u;
    {
        const bool branch_taken_0x11f804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F804u;
        // 0x11f808: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f804) {
            ctx->pc = 0x11F814u;
            goto label_11f814;
        }
    }
    ctx->pc = 0x11F80Cu;
    // 0x11f80c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11F80Cu;
    {
        const bool branch_taken_0x11f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F80Cu;
        // 0x11f810: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f80c) {
            ctx->pc = 0x11F8F8u;
            goto label_11f8f8;
        }
    }
    ctx->pc = 0x11F814u;
label_11f814:
    // 0x11f814: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x11f814u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x11f818: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F818u;
    SET_GPR_U32(ctx, 31, 0x11F820u);
    ctx->pc = 0x11F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F818u;
    // 0x11f81c: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F818u, 0x11F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F820u;
label_11f820:
    // 0x11f820: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11F820u;
    {
        const bool branch_taken_0x11f820 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F820u;
        // 0x11f824: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f820) {
            ctx->pc = 0x11F8F8u;
            goto label_11f8f8;
        }
    }
    ctx->pc = 0x11F828u;
    // 0x11f828: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F828u;
    {
        const bool branch_taken_0x11f828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f828) {
            ctx->pc = 0x11F844u;
            goto label_11f844;
        }
    }
    ctx->pc = 0x11F830u;
    // 0x11f830: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F834u;
    {
        const bool branch_taken_0x11f834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f834) {
            ctx->pc = 0x11F844u;
            goto label_11f844;
        }
    }
    ctx->pc = 0x11F83Cu;
    // 0x11f83c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F83Cu;
    {
        const bool branch_taken_0x11f83c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F83Cu;
        // 0x11f840: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f83c) {
            ctx->pc = 0x11F854u;
            goto label_11f854;
        }
    }
    ctx->pc = 0x11F844u;
label_11f844:
    // 0x11f844: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F844u;
    SET_GPR_U32(ctx, 31, 0x11F84Cu);
    ctx->pc = 0x11F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F844u;
    // 0x11f848: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F844u, 0x11F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F84Cu;
label_11f84c:
    // 0x11f84c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11F84Cu;
    {
        const bool branch_taken_0x11f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F84Cu;
        // 0x11f850: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f84c) {
            ctx->pc = 0x11F8F8u;
            goto label_11f8f8;
        }
    }
    ctx->pc = 0x11F854u;
label_11f854:
    // 0x11f854: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11f858: 0x2451deb0  addiu       $s1, $v0, -0x2150
    ctx->pc = 0x11f858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x11f85c: 0xac54deb0  sw          $s4, -0x2150($v0)
    ctx->pc = 0x11f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958768), GPR_U32(ctx, 20));
    // 0x11f860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f864: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x11f864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x11f868: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x11f868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11f86c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11f870: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F870u;
    SET_GPR_U32(ctx, 31, 0x11F878u);
    ctx->pc = 0x11F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F870u;
    // 0x11f874: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11F870u, 0x11F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F878u;
label_11f878:
    // 0x11f878: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11f878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11f87c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f880: 0x2610de60  addiu       $s0, $s0, -0x21A0
    ctx->pc = 0x11f880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958688));
    // 0x11f884: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x11f884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f88c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11F88Cu;
    SET_GPR_U32(ctx, 31, 0x11F894u);
    ctx->pc = 0x11F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F88Cu;
    // 0x11f890: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11F88Cu, 0x11F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F894u;
label_11f894:
    // 0x11f894: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x11f898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f89c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x11F89Cu;
    SET_GPR_U32(ctx, 31, 0x11F8A4u);
    ctx->pc = 0x11F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F89Cu;
    // 0x11f8a0: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x11F89Cu, 0x11F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8A4u;
label_11f8a4:
    // 0x11f8a4: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f8a8: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f8ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11f8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8b4: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f8b8: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f8bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f8c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11f8c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f8c8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11f8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11f8cc: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F8CCu;
    SET_GPR_U32(ctx, 31, 0x11F8D4u);
    ctx->pc = 0x11F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8CCu;
    // 0x11f8d0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F8CCu, 0x11F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8D4u;
label_11f8d4:
    // 0x11f8d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F8D4u;
    {
        const bool branch_taken_0x11f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8D4u;
        // 0x11f8d8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8d4) {
            ctx->pc = 0x11F8ECu;
            goto label_11f8ec;
        }
    }
    ctx->pc = 0x11F8DCu;
    // 0x11f8dc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F8DCu;
    SET_GPR_U32(ctx, 31, 0x11F8E4u);
    ctx->pc = 0x11F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8DCu;
    // 0x11f8e0: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F8DCu, 0x11F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8E4u;
label_11f8e4:
    // 0x11f8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F8E4u;
    {
        const bool branch_taken_0x11f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E4u;
        // 0x11f8e8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8e4) {
            ctx->pc = 0x11F8F8u;
            goto label_11f8f8;
        }
    }
    ctx->pc = 0x11F8ECu;
label_11f8ec:
    // 0x11f8ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f8f0: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f8f8:
    // 0x11f8f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f8fc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f8fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f900: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f904: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f908: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f90c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f910: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f914: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f918: 0x3e00008  jr          $ra
    ctx->pc = 0x11F918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F918u;
        // 0x11f91c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F920u;
    // 0x11f920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f924: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f928: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11f92c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11f930: 0x2452de00  addiu       $s2, $v0, -0x2200
    ctx->pc = 0x11f930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11f934: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11f938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f93c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f940: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11f944: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11f948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F948u;
    {
        const bool branch_taken_0x11f948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F948u;
        // 0x11f94c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f948) {
            ctx->pc = 0x11F958u;
            goto label_11f958;
        }
    }
    ctx->pc = 0x11F950u;
    // 0x11f950: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11F950u;
    {
        const bool branch_taken_0x11f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F950u;
        // 0x11f954: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f950) {
            ctx->pc = 0x11F9D0u;
            goto label_11f9d0;
        }
    }
    ctx->pc = 0x11F958u;
label_11f958:
    // 0x11f958: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x11f95c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11F95Cu;
    SET_GPR_U32(ctx, 31, 0x11F964u);
    ctx->pc = 0x11F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F95Cu;
    // 0x11f960: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11F95Cu, 0x11F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F964u;
label_11f964:
    // 0x11f964: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F964u;
    {
        const bool branch_taken_0x11f964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F964u;
        // 0x11f968: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f964) {
            ctx->pc = 0x11F974u;
            goto label_11f974;
        }
    }
    ctx->pc = 0x11F96Cu;
    // 0x11f96c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11F96Cu;
    {
        const bool branch_taken_0x11f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F96Cu;
        // 0x11f970: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f96c) {
            ctx->pc = 0x11F9D0u;
            goto label_11f9d0;
        }
    }
    ctx->pc = 0x11F974u;
label_11f974:
    // 0x11f974: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11f974u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11f978: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11f978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11f97c: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11f97cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11f980: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x11f980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x11f984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f988: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x11f988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
    // 0x11f98c: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11f98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11f990: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11f990u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11f994: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f998: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x11f998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11f99c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f9a0: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11f9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11f9a4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11F9A4u;
    SET_GPR_U32(ctx, 31, 0x11F9ACu);
    ctx->pc = 0x11F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F9A4u;
    // 0x11f9a8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11F9A4u, 0x11F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9ACu;
label_11f9ac:
    // 0x11f9ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F9ACu;
    {
        const bool branch_taken_0x11f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9ACu;
        // 0x11f9b0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9ac) {
            ctx->pc = 0x11F9C4u;
            goto label_11f9c4;
        }
    }
    ctx->pc = 0x11F9B4u;
    // 0x11f9b4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11F9B4u;
    SET_GPR_U32(ctx, 31, 0x11F9BCu);
    ctx->pc = 0x11F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F9B4u;
    // 0x11f9b8: 0x8e64b9dc  lw          $a0, -0x4624($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11F9B4u, 0x11F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9BCu;
label_11f9bc:
    // 0x11f9bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F9BCu;
    {
        const bool branch_taken_0x11f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9BCu;
        // 0x11f9c0: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9bc) {
            ctx->pc = 0x11F9D0u;
            goto label_11f9d0;
        }
    }
    ctx->pc = 0x11F9C4u;
label_11f9c4:
    // 0x11f9c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11f9c8: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11f9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f9d0:
    // 0x11f9d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f9d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f9d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f9d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f9d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f9dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f9e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9E4u;
        // 0x11f9e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F9ECu;
    // 0x11f9ec: 0x0  nop
    ctx->pc = 0x11f9ecu;
    // NOP
    // 0x11f9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f9f4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f9f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11f9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11f9fc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11f9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11fa00: 0x2454de00  addiu       $s4, $v0, -0x2200
    ctx->pc = 0x11fa00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11fa04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11fa08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11fa08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11fa10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11fa10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11fa18: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11fa1c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x11fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x11fa20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA20u;
    {
        const bool branch_taken_0x11fa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA20u;
        // 0x11fa24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa20) {
            ctx->pc = 0x11FA30u;
            goto label_11fa30;
        }
    }
    ctx->pc = 0x11FA28u;
    // 0x11fa28: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x11FA28u;
    {
        const bool branch_taken_0x11fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA28u;
        // 0x11fa2c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa28) {
            ctx->pc = 0x11FADCu;
            goto label_11fadc;
        }
    }
    ctx->pc = 0x11FA30u;
label_11fa30:
    // 0x11fa30: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11fa30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11fa34: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11FA34u;
    SET_GPR_U32(ctx, 31, 0x11FA3Cu);
    ctx->pc = 0x11FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA34u;
    // 0x11fa38: 0x8e24b9dc  lw          $a0, -0x4624($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11FA34u, 0x11FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA3Cu;
label_11fa3c:
    // 0x11fa3c: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11FA3Cu;
    {
        const bool branch_taken_0x11fa3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA3Cu;
        // 0x11fa40: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa3c) {
            ctx->pc = 0x11FADCu;
            goto label_11fadc;
        }
    }
    ctx->pc = 0x11FA44u;
    // 0x11fa44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FA44u;
    {
        const bool branch_taken_0x11fa44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fa44) {
            ctx->pc = 0x11FA58u;
            goto label_11fa58;
        }
    }
    ctx->pc = 0x11FA4Cu;
    // 0x11fa4c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x11fa4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fa50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FA50u;
    {
        const bool branch_taken_0x11fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA50u;
        // 0x11fa54: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa50) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11FA58u;
label_11fa58:
    // 0x11fa58: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11FA58u;
    SET_GPR_U32(ctx, 31, 0x11FA60u);
    ctx->pc = 0x11FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA58u;
    // 0x11fa5c: 0x8e24b9dc  lw          $a0, -0x4624($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11FA58u, 0x11FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA60u;
label_11fa60:
    // 0x11fa60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11FA60u;
    {
        const bool branch_taken_0x11fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA60u;
        // 0x11fa64: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa60) {
            ctx->pc = 0x11FADCu;
            goto label_11fadc;
        }
    }
    ctx->pc = 0x11FA68u;
label_11fa68:
    // 0x11fa68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa6c: 0x2450deb0  addiu       $s0, $v0, -0x2150
    ctx->pc = 0x11fa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x11fa70: 0xac53deb0  sw          $s3, -0x2150($v0)
    ctx->pc = 0x11fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958768), GPR_U32(ctx, 19));
    // 0x11fa74: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x11fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11fa78: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11fa7c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x11FA7Cu;
    SET_GPR_U32(ctx, 31, 0x11FA84u);
    ctx->pc = 0x11FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA7Cu;
    // 0x11fa80: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x11FA7Cu, 0x11FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA84u;
label_11fa84:
    // 0x11fa84: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11fa84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11fa88: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11fa88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11fa8c: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x11fa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fa90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11fa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11fa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa98: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11fa9c: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11faa0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x11faa4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11faa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11faac: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x11faacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11fab0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11FAB0u;
    SET_GPR_U32(ctx, 31, 0x11FAB8u);
    ctx->pc = 0x11FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAB0u;
    // 0x11fab4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11FAB0u, 0x11FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAB8u;
label_11fab8:
    // 0x11fab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FAB8u;
    {
        const bool branch_taken_0x11fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAB8u;
        // 0x11fabc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fab8) {
            ctx->pc = 0x11FAD0u;
            goto label_11fad0;
        }
    }
    ctx->pc = 0x11FAC0u;
    // 0x11fac0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11FAC0u;
    SET_GPR_U32(ctx, 31, 0x11FAC8u);
    ctx->pc = 0x11FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAC0u;
    // 0x11fac4: 0x8e24b9dc  lw          $a0, -0x4624($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11FAC0u, 0x11FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAC8u;
label_11fac8:
    // 0x11fac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FAC8u;
    {
        const bool branch_taken_0x11fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAC8u;
        // 0x11facc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fac8) {
            ctx->pc = 0x11FADCu;
            goto label_11fadc;
        }
    }
    ctx->pc = 0x11FAD0u;
label_11fad0:
    // 0x11fad0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11fad4: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11fad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11fad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fadc:
    // 0x11fadc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11fadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11fae0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11fae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fae4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11fae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fae8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11fae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11faec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11faecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11faf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11faf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11faf4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FAFCu;
    // 0x11fafc: 0x0  nop
    ctx->pc = 0x11fafcu;
    // NOP
    // 0x11fb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fb08: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11fb08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11fb0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fb10: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x11FB10u;
    SET_GPR_U32(ctx, 31, 0x11FB18u);
    ctx->pc = 0x11FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB10u;
    // 0x11fb14: 0x2610f400  addiu       $s0, $s0, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x11FB10u, 0x11FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB18u;
label_11fb18:
    // 0x11fb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb1c: 0xc0443dc  jal         func_110F70
    ctx->pc = 0x11FB1Cu;
    SET_GPR_U32(ctx, 31, 0x11FB24u);
    ctx->pc = 0x11FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB1Cu;
    // 0x11fb20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F70u, 0x11FB1Cu, 0x11FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB24u;
label_11fb24:
    // 0x11fb24: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11fb28: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11fb28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11fb2c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11fb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x11fb30: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11fb34: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x11fb34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11fb38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11fb3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb40: 0x24c6ff38  addiu       $a2, $a2, -0xC8
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967096));
    // 0x11fb44: 0x24e7f480  addiu       $a3, $a3, -0xB80
    ctx->pc = 0x11fb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964352));
    // 0x11fb48: 0x2484f418  addiu       $a0, $a0, -0xBE8
    ctx->pc = 0x11fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964248));
    // 0x11fb4c: 0xc044402  jal         func_111008
    ctx->pc = 0x11FB4Cu;
    SET_GPR_U32(ctx, 31, 0x11FB54u);
    ctx->pc = 0x11FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB4Cu;
    // 0x11fb50: 0x34a50400  ori         $a1, $a1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111008u, 0x11FB4Cu, 0x11FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB54u;
label_11fb54:
    // 0x11fb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11fb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fb60: 0x8044508  j           func_111420
    ctx->pc = 0x11FB60u;
    ctx->pc = 0x11FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB60u;
    // 0x11fb64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    sub_00111420_0x111420(rdram, ctx, runtime); return;
    ctx->pc = 0x11FB68u;
}
