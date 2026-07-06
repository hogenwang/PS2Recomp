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

// Function: sub_001892E0
// Address: 0x1892e0 - 0x189760
void sub_001892E0_0x1892e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001892E0_0x1892e0");
#endif

    switch (ctx->pc) {
        case 0x189374u: goto label_189374;
        case 0x1893d8u: goto label_1893d8;
        case 0x189460u: goto label_189460;
        case 0x1894ccu: goto label_1894cc;
        case 0x18952cu: goto label_18952c;
        case 0x1895a0u: goto label_1895a0;
        case 0x189630u: goto label_189630;
        case 0x1896acu: goto label_1896ac;
        case 0x18972cu: goto label_18972c;
        default: break;
    }

    ctx->pc = 0x1892e0u;

    // 0x1892e0: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x1892e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1892e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1892e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1892E8u;
    {
        const bool branch_taken_0x1892e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892e8) {
            ctx->pc = 0x1892ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1892E8u;
            // 0x1892ec: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1892F8u;
            goto label_1892f8;
        }
    }
    ctx->pc = 0x1892F0u;
    // 0x1892f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1892F0u;
    {
        const bool branch_taken_0x1892f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F0u;
        // 0x1892f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f0) {
            ctx->pc = 0x18930Cu;
            goto label_18930c;
        }
    }
    ctx->pc = 0x1892F8u;
label_1892f8:
    // 0x1892f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1892fc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1892fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x189300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189304: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x189304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189308: 0x21023  negu        $v0, $v0
    ctx->pc = 0x189308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_18930c:
    // 0x18930c: 0x3e00008  jr          $ra
    ctx->pc = 0x18930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189314u;
    // 0x189314: 0x0  nop
    ctx->pc = 0x189314u;
    // NOP
    // 0x189318: 0x0  nop
    ctx->pc = 0x189318u;
    // NOP
    // 0x18931c: 0x0  nop
    ctx->pc = 0x18931cu;
    // NOP
    // 0x189320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189328: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x18932c: 0x30621fe0  andi        $v0, $v1, 0x1FE0
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8160);
    // 0x189330: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189330u;
    {
        const bool branch_taken_0x189330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189330) {
            ctx->pc = 0x189334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189330u;
            // 0x189334: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189340u;
            goto label_189340;
        }
    }
    ctx->pc = 0x189338u;
    // 0x189338: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x189338u;
    {
        const bool branch_taken_0x189338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189338u;
        // 0x18933c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189338) {
            ctx->pc = 0x189388u;
            goto label_189388;
        }
    }
    ctx->pc = 0x189340u;
label_189340:
    // 0x189340: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x189340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x189344: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189348: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189348u;
    {
        const bool branch_taken_0x189348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189348) {
            ctx->pc = 0x18934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189348u;
            // 0x18934c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189358u;
            goto label_189358;
        }
    }
    ctx->pc = 0x189350u;
    // 0x189350: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x189350u;
    {
        const bool branch_taken_0x189350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189350u;
        // 0x189354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189350) {
            ctx->pc = 0x189388u;
            goto label_189388;
        }
    }
    ctx->pc = 0x189358u;
label_189358:
    // 0x189358: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18935c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18935Cu;
    {
        const bool branch_taken_0x18935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18935c) {
            ctx->pc = 0x189360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18935Cu;
            // 0x189360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18936Cu;
            goto label_18936c;
        }
    }
    ctx->pc = 0x189364u;
    // 0x189364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189364u;
    {
        const bool branch_taken_0x189364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189364u;
        // 0x189368: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189364) {
            ctx->pc = 0x189388u;
            goto label_189388;
        }
    }
    ctx->pc = 0x18936Cu;
label_18936c:
    // 0x18936c: 0xc059318  jal         func_164C60
    ctx->pc = 0x18936Cu;
    SET_GPR_U32(ctx, 31, 0x189374u);
    ctx->pc = 0x189370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18936Cu;
    // 0x189370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x18936Cu, 0x189374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189374u;
label_189374:
    // 0x189374: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x189374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189378: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x189378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18937c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x189380: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x189380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x189384: 0x21023  negu        $v0, $v0
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_189388:
    // 0x189388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18938c: 0x3e00008  jr          $ra
    ctx->pc = 0x18938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18938Cu;
        // 0x189390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189394u;
    // 0x189394: 0x0  nop
    ctx->pc = 0x189394u;
    // NOP
    // 0x189398: 0x0  nop
    ctx->pc = 0x189398u;
    // NOP
    // 0x18939c: 0x0  nop
    ctx->pc = 0x18939cu;
    // NOP
    // 0x1893a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1893a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1893a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1893a8: 0x8c82048c  lw          $v0, 0x48C($a0)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x1893ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1893acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1893b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1893B0u;
    {
        const bool branch_taken_0x1893b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893b0) {
            ctx->pc = 0x1893B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1893B0u;
            // 0x1893b4: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893C0u;
            goto label_1893c0;
        }
    }
    ctx->pc = 0x1893B8u;
    // 0x1893b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1893B8u;
    {
        const bool branch_taken_0x1893b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893B8u;
        // 0x1893bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893b8) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893C0u;
label_1893c0:
    // 0x1893c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1893C0u;
    {
        const bool branch_taken_0x1893c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893c0) {
            ctx->pc = 0x1893C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1893C0u;
            // 0x1893c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893D0u;
            goto label_1893d0;
        }
    }
    ctx->pc = 0x1893C8u;
    // 0x1893c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1893C8u;
    {
        const bool branch_taken_0x1893c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C8u;
        // 0x1893cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893c8) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893D0u;
label_1893d0:
    // 0x1893d0: 0xc059318  jal         func_164C60
    ctx->pc = 0x1893D0u;
    SET_GPR_U32(ctx, 31, 0x1893D8u);
    ctx->pc = 0x1893D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893D0u;
    // 0x1893d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x1893D0u, 0x1893D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893D8u;
label_1893d8:
    // 0x1893d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1893D8u;
    {
        const bool branch_taken_0x1893d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893d8) {
            ctx->pc = 0x1893DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1893D8u;
            // 0x1893dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893E0u;
    // 0x1893e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1893E0u;
    {
        const bool branch_taken_0x1893e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893E0u;
        // 0x1893e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893e0) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893E8u;
label_1893e8:
    // 0x1893e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1893e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1893ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1893ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893ECu;
        // 0x1893f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893F4u;
    // 0x1893f4: 0x0  nop
    ctx->pc = 0x1893f4u;
    // NOP
    // 0x1893f8: 0x0  nop
    ctx->pc = 0x1893f8u;
    // NOP
    // 0x1893fc: 0x0  nop
    ctx->pc = 0x1893fcu;
    // NOP
    // 0x189400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189404: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x189404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x189408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18940c: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x18940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x189410: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189414: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189414u;
    {
        const bool branch_taken_0x189414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189414) {
            ctx->pc = 0x189418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189414u;
            // 0x189418: 0x8c820494  lw          $v0, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189424u;
            goto label_189424;
        }
    }
    ctx->pc = 0x18941Cu;
    // 0x18941c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18941Cu;
    {
        const bool branch_taken_0x18941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18941c) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189424u;
label_189424:
    // 0x189424: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x189424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x189428: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189428u;
    {
        const bool branch_taken_0x189428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189428) {
            ctx->pc = 0x18942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189428u;
            // 0x18942c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x189438u;
            goto label_189438;
        }
    }
    ctx->pc = 0x189430u;
    // 0x189430: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189430u;
    {
        const bool branch_taken_0x189430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189430u;
        // 0x189434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189430) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189438u;
label_189438:
    // 0x189438: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189438u;
    {
        const bool branch_taken_0x189438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189438) {
            ctx->pc = 0x18943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189438u;
            // 0x18943c: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189448u;
            goto label_189448;
        }
    }
    ctx->pc = 0x189440u;
    // 0x189440: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189440u;
    {
        const bool branch_taken_0x189440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189440u;
        // 0x189444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189440) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189448u;
label_189448:
    // 0x189448: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189448u;
    {
        const bool branch_taken_0x189448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189448) {
            ctx->pc = 0x18944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189448u;
            // 0x18944c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189458u;
            goto label_189458;
        }
    }
    ctx->pc = 0x189450u;
    // 0x189450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189450u;
    {
        const bool branch_taken_0x189450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189450u;
        // 0x189454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189450) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189458u;
label_189458:
    // 0x189458: 0xc059318  jal         func_164C60
    ctx->pc = 0x189458u;
    SET_GPR_U32(ctx, 31, 0x189460u);
    ctx->pc = 0x18945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189458u;
    // 0x18945c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x189458u, 0x189460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189460u;
label_189460:
    // 0x189460: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189460u;
    {
        const bool branch_taken_0x189460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189460) {
            ctx->pc = 0x189464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189460u;
            // 0x189464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189468u;
    // 0x189468: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x189468u;
    {
        const bool branch_taken_0x189468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189468u;
        // 0x18946c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189468) {
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x189470u;
label_189470:
    // 0x189470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189474: 0x3e00008  jr          $ra
    ctx->pc = 0x189474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189474u;
        // 0x189478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18947Cu;
    // 0x18947c: 0x0  nop
    ctx->pc = 0x18947cu;
    // NOP
    // 0x189480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189488: 0x8c820494  lw          $v0, 0x494($a0)
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x18948c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x189490: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189490u;
    {
        const bool branch_taken_0x189490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189490) {
            ctx->pc = 0x189494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189490u;
            // 0x189494: 0x8c82048c  lw          $v0, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894A0u;
            goto label_1894a0;
        }
    }
    ctx->pc = 0x189498u;
    // 0x189498: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x189498u;
    {
        const bool branch_taken_0x189498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189498u;
        // 0x18949c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189498) {
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894A0u;
label_1894a0:
    // 0x1894a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1894a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1894a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1894A4u;
    {
        const bool branch_taken_0x1894a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894a4) {
            ctx->pc = 0x1894A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1894A4u;
            // 0x1894a8: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894B4u;
            goto label_1894b4;
        }
    }
    ctx->pc = 0x1894ACu;
    // 0x1894ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1894ACu;
    {
        const bool branch_taken_0x1894ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ACu;
        // 0x1894b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894ac) {
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894B4u;
label_1894b4:
    // 0x1894b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1894B4u;
    {
        const bool branch_taken_0x1894b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894b4) {
            ctx->pc = 0x1894B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1894B4u;
            // 0x1894b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894C4u;
            goto label_1894c4;
        }
    }
    ctx->pc = 0x1894BCu;
    // 0x1894bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1894BCu;
    {
        const bool branch_taken_0x1894bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894BCu;
        // 0x1894c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894bc) {
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894C4u;
label_1894c4:
    // 0x1894c4: 0xc059318  jal         func_164C60
    ctx->pc = 0x1894C4u;
    SET_GPR_U32(ctx, 31, 0x1894CCu);
    ctx->pc = 0x1894C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894C4u;
    // 0x1894c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x1894C4u, 0x1894CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894CCu;
label_1894cc:
    // 0x1894cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1894CCu;
    {
        const bool branch_taken_0x1894cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894cc) {
            ctx->pc = 0x1894D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1894CCu;
            // 0x1894d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894D4u;
    // 0x1894d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1894D4u;
    {
        const bool branch_taken_0x1894d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894D4u;
        // 0x1894d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894d4) {
            ctx->pc = 0x1894DCu;
            goto label_1894dc;
        }
    }
    ctx->pc = 0x1894DCu;
label_1894dc:
    // 0x1894dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1894dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1894e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1894E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1894E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894E0u;
        // 0x1894e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1894E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1894E8u;
    // 0x1894e8: 0x0  nop
    ctx->pc = 0x1894e8u;
    // NOP
    // 0x1894ec: 0x0  nop
    ctx->pc = 0x1894ecu;
    // NOP
    // 0x1894f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1894f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1894f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1894f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1894fc: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x189500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189504: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189504u;
    {
        const bool branch_taken_0x189504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189504) {
            ctx->pc = 0x189508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189504u;
            // 0x189508: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189514u;
            goto label_189514;
        }
    }
    ctx->pc = 0x18950Cu;
    // 0x18950c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18950Cu;
    {
        const bool branch_taken_0x18950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18950Cu;
        // 0x189510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18950c) {
            ctx->pc = 0x18953Cu;
            goto label_18953c;
        }
    }
    ctx->pc = 0x189514u;
label_189514:
    // 0x189514: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189514u;
    {
        const bool branch_taken_0x189514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189514) {
            ctx->pc = 0x189518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189514u;
            // 0x189518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189524u;
            goto label_189524;
        }
    }
    ctx->pc = 0x18951Cu;
    // 0x18951c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18951Cu;
    {
        const bool branch_taken_0x18951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18951Cu;
        // 0x189520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18951c) {
            ctx->pc = 0x18953Cu;
            goto label_18953c;
        }
    }
    ctx->pc = 0x189524u;
label_189524:
    // 0x189524: 0xc059318  jal         func_164C60
    ctx->pc = 0x189524u;
    SET_GPR_U32(ctx, 31, 0x18952Cu);
    ctx->pc = 0x189528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189524u;
    // 0x189528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x189524u, 0x18952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18952Cu;
label_18952c:
    // 0x18952c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18952Cu;
    {
        const bool branch_taken_0x18952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18952c) {
            ctx->pc = 0x189530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18952Cu;
            // 0x189530: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18953Cu;
            goto label_18953c;
        }
    }
    ctx->pc = 0x189534u;
    // 0x189534: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x189534u;
    {
        const bool branch_taken_0x189534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189534u;
        // 0x189538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189534) {
            ctx->pc = 0x18953Cu;
            goto label_18953c;
        }
    }
    ctx->pc = 0x18953Cu;
label_18953c:
    // 0x18953c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18953cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189540: 0x3e00008  jr          $ra
    ctx->pc = 0x189540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189540u;
        // 0x189544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189548u;
    // 0x189548: 0x0  nop
    ctx->pc = 0x189548u;
    // NOP
    // 0x18954c: 0x0  nop
    ctx->pc = 0x18954cu;
    // NOP
    // 0x189550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189554: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x189558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18955c: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x189560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189564: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189564u;
    {
        const bool branch_taken_0x189564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189564) {
            ctx->pc = 0x189568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189564u;
            // 0x189568: 0x8c820494  lw          $v0, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189574u;
            goto label_189574;
        }
    }
    ctx->pc = 0x18956Cu;
    // 0x18956c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18956Cu;
    {
        const bool branch_taken_0x18956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18956Cu;
        // 0x189570: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18956c) {
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x189574u;
label_189574:
    // 0x189574: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x189574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x189578: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189578u;
    {
        const bool branch_taken_0x189578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189578) {
            ctx->pc = 0x18957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189578u;
            // 0x18957c: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189588u;
            goto label_189588;
        }
    }
    ctx->pc = 0x189580u;
    // 0x189580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189580u;
    {
        const bool branch_taken_0x189580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189580u;
        // 0x189584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189580) {
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x189588u;
label_189588:
    // 0x189588: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189588u;
    {
        const bool branch_taken_0x189588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189588) {
            ctx->pc = 0x18958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189588u;
            // 0x18958c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189598u;
            goto label_189598;
        }
    }
    ctx->pc = 0x189590u;
    // 0x189590: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189590u;
    {
        const bool branch_taken_0x189590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189590u;
        // 0x189594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189590) {
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x189598u;
label_189598:
    // 0x189598: 0xc059318  jal         func_164C60
    ctx->pc = 0x189598u;
    SET_GPR_U32(ctx, 31, 0x1895A0u);
    ctx->pc = 0x18959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189598u;
    // 0x18959c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x189598u, 0x1895A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895A0u;
label_1895a0:
    // 0x1895a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1895A0u;
    {
        const bool branch_taken_0x1895a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895a0) {
            ctx->pc = 0x1895A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895A0u;
            // 0x1895a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x1895A8u;
    // 0x1895a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1895A8u;
    {
        const bool branch_taken_0x1895a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895A8u;
        // 0x1895ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895a8) {
            ctx->pc = 0x1895B0u;
            goto label_1895b0;
        }
    }
    ctx->pc = 0x1895B0u;
label_1895b0:
    // 0x1895b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1895b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1895b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1895B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1895B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895B4u;
        // 0x1895b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1895B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1895BCu;
    // 0x1895bc: 0x0  nop
    ctx->pc = 0x1895bcu;
    // NOP
    // 0x1895c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1895c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1895c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1895c8: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x1895c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x1895cc: 0x30620fe0  andi        $v0, $v1, 0xFE0
    ctx->pc = 0x1895ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4064);
    // 0x1895d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1895D0u;
    {
        const bool branch_taken_0x1895d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895d0) {
            ctx->pc = 0x1895D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895D0u;
            // 0x1895d4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895E0u;
            goto label_1895e0;
        }
    }
    ctx->pc = 0x1895D8u;
    // 0x1895d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1895D8u;
    {
        const bool branch_taken_0x1895d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895D8u;
        // 0x1895dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895d8) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x1895E0u;
label_1895e0:
    // 0x1895e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1895e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1895e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1895E4u;
    {
        const bool branch_taken_0x1895e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895e4) {
            ctx->pc = 0x1895E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895E4u;
            // 0x1895e8: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1895F4u;
            goto label_1895f4;
        }
    }
    ctx->pc = 0x1895ECu;
    // 0x1895ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1895ECu;
    {
        const bool branch_taken_0x1895ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895ECu;
        // 0x1895f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895ec) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x1895F4u;
label_1895f4:
    // 0x1895f4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1895f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1895f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1895F8u;
    {
        const bool branch_taken_0x1895f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895f8) {
            ctx->pc = 0x1895FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1895F8u;
            // 0x1895fc: 0x84820500  lh          $v0, 0x500($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189608u;
            goto label_189608;
        }
    }
    ctx->pc = 0x189600u;
    // 0x189600: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189600u;
    {
        const bool branch_taken_0x189600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189600u;
        // 0x189604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189600) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189608u;
label_189608:
    // 0x189608: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189608u;
    {
        const bool branch_taken_0x189608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189608) {
            ctx->pc = 0x18960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189608u;
            // 0x18960c: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x189610u;
    // 0x189610: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189610u;
    {
        const bool branch_taken_0x189610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189610u;
        // 0x189614: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189610) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189618u;
label_189618:
    // 0x189618: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189618u;
    {
        const bool branch_taken_0x189618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189618) {
            ctx->pc = 0x18961Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189618u;
            // 0x18961c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189628u;
            goto label_189628;
        }
    }
    ctx->pc = 0x189620u;
    // 0x189620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189620u;
    {
        const bool branch_taken_0x189620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189620u;
        // 0x189624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189620) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189628u;
label_189628:
    // 0x189628: 0xc059318  jal         func_164C60
    ctx->pc = 0x189628u;
    SET_GPR_U32(ctx, 31, 0x189630u);
    ctx->pc = 0x18962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189628u;
    // 0x18962c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x189628u, 0x189630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189630u;
label_189630:
    // 0x189630: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189630u;
    {
        const bool branch_taken_0x189630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189630) {
            ctx->pc = 0x189634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189630u;
            // 0x189634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189638u;
    // 0x189638: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x189638u;
    {
        const bool branch_taken_0x189638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189638u;
        // 0x18963c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189638) {
            ctx->pc = 0x189640u;
            goto label_189640;
        }
    }
    ctx->pc = 0x189640u;
label_189640:
    // 0x189640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189644: 0x3e00008  jr          $ra
    ctx->pc = 0x189644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189644u;
        // 0x189648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18964Cu;
    // 0x18964c: 0x0  nop
    ctx->pc = 0x18964cu;
    // NOP
    // 0x189650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189658: 0x8c82048c  lw          $v0, 0x48C($a0)
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x18965c: 0x30420fe0  andi        $v0, $v0, 0xFE0
    ctx->pc = 0x18965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4064);
    // 0x189660: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189660u;
    {
        const bool branch_taken_0x189660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189660) {
            ctx->pc = 0x189664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189660u;
            // 0x189664: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189670u;
            goto label_189670;
        }
    }
    ctx->pc = 0x189668u;
    // 0x189668: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x189668u;
    {
        const bool branch_taken_0x189668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189668u;
        // 0x18966c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189668) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x189670u;
label_189670:
    // 0x189670: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x189670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x189674: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189674u;
    {
        const bool branch_taken_0x189674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189674) {
            ctx->pc = 0x189678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189674u;
            // 0x189678: 0x84820500  lh          $v0, 0x500($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189684u;
            goto label_189684;
        }
    }
    ctx->pc = 0x18967Cu;
    // 0x18967c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18967Cu;
    {
        const bool branch_taken_0x18967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18967Cu;
        // 0x189680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18967c) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x189684u;
label_189684:
    // 0x189684: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189684u;
    {
        const bool branch_taken_0x189684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189684) {
            ctx->pc = 0x189688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189684u;
            // 0x189688: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189694u;
            goto label_189694;
        }
    }
    ctx->pc = 0x18968Cu;
    // 0x18968c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18968Cu;
    {
        const bool branch_taken_0x18968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18968Cu;
        // 0x189690: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18968c) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x189694u;
label_189694:
    // 0x189694: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189694u;
    {
        const bool branch_taken_0x189694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189694) {
            ctx->pc = 0x189698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189694u;
            // 0x189698: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1896A4u;
            goto label_1896a4;
        }
    }
    ctx->pc = 0x18969Cu;
    // 0x18969c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18969Cu;
    {
        const bool branch_taken_0x18969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18969Cu;
        // 0x1896a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18969c) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896A4u;
label_1896a4:
    // 0x1896a4: 0xc059318  jal         func_164C60
    ctx->pc = 0x1896A4u;
    SET_GPR_U32(ctx, 31, 0x1896ACu);
    ctx->pc = 0x1896A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896A4u;
    // 0x1896a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x1896A4u, 0x1896ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896ACu;
label_1896ac:
    // 0x1896ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1896ACu;
    {
        const bool branch_taken_0x1896ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1896ac) {
            ctx->pc = 0x1896B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1896ACu;
            // 0x1896b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896B4u;
    // 0x1896b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1896B4u;
    {
        const bool branch_taken_0x1896b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B4u;
        // 0x1896b8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896b4) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896BCu;
label_1896bc:
    // 0x1896bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1896bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1896c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1896C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896C0u;
        // 0x1896c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1896C8u;
    // 0x1896c8: 0x0  nop
    ctx->pc = 0x1896c8u;
    // NOP
    // 0x1896cc: 0x0  nop
    ctx->pc = 0x1896ccu;
    // NOP
    // 0x1896d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1896d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1896d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1896d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1896d8: 0x8c82048c  lw          $v0, 0x48C($a0)
    ctx->pc = 0x1896d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x1896dc: 0x30420fe0  andi        $v0, $v0, 0xFE0
    ctx->pc = 0x1896dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4064);
    // 0x1896e0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1896E0u;
    {
        const bool branch_taken_0x1896e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1896e0) {
            ctx->pc = 0x1896E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1896E0u;
            // 0x1896e4: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1896F0u;
            goto label_1896f0;
        }
    }
    ctx->pc = 0x1896E8u;
    // 0x1896e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1896E8u;
    {
        const bool branch_taken_0x1896e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896E8u;
        // 0x1896ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896e8) {
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x1896F0u;
label_1896f0:
    // 0x1896f0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1896f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1896f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1896F4u;
    {
        const bool branch_taken_0x1896f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1896f4) {
            ctx->pc = 0x1896F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1896F4u;
            // 0x1896f8: 0x84820500  lh          $v0, 0x500($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189704u;
            goto label_189704;
        }
    }
    ctx->pc = 0x1896FCu;
    // 0x1896fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1896FCu;
    {
        const bool branch_taken_0x1896fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896FCu;
        // 0x189700: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896fc) {
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x189704u;
label_189704:
    // 0x189704: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189704u;
    {
        const bool branch_taken_0x189704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189704) {
            ctx->pc = 0x189708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189704u;
            // 0x189708: 0x848204fe  lh          $v0, 0x4FE($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189714u;
            goto label_189714;
        }
    }
    ctx->pc = 0x18970Cu;
    // 0x18970c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18970Cu;
    {
        const bool branch_taken_0x18970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18970Cu;
        // 0x189710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18970c) {
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x189714u;
label_189714:
    // 0x189714: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x189714u;
    {
        const bool branch_taken_0x189714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189714) {
            ctx->pc = 0x189718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189714u;
            // 0x189718: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189724u;
            goto label_189724;
        }
    }
    ctx->pc = 0x18971Cu;
    // 0x18971c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18971Cu;
    {
        const bool branch_taken_0x18971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18971Cu;
        // 0x189720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18971c) {
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x189724u;
label_189724:
    // 0x189724: 0xc059318  jal         func_164C60
    ctx->pc = 0x189724u;
    SET_GPR_U32(ctx, 31, 0x18972Cu);
    ctx->pc = 0x189728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189724u;
    // 0x189728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x189724u, 0x18972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18972Cu;
label_18972c:
    // 0x18972c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18972Cu;
    {
        const bool branch_taken_0x18972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18972c) {
            ctx->pc = 0x189730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18972Cu;
            // 0x189730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x189734u;
    // 0x189734: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x189734u;
    {
        const bool branch_taken_0x189734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189734u;
        // 0x189738: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189734) {
            ctx->pc = 0x18973Cu;
            goto label_18973c;
        }
    }
    ctx->pc = 0x18973Cu;
label_18973c:
    // 0x18973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189740: 0x3e00008  jr          $ra
    ctx->pc = 0x189740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189740u;
        // 0x189744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189748u;
    // 0x189748: 0x0  nop
    ctx->pc = 0x189748u;
    // NOP
    // 0x18974c: 0x0  nop
    ctx->pc = 0x18974cu;
    // NOP
    // 0x189750: 0x3e00008  jr          $ra
    ctx->pc = 0x189750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189750u;
        // 0x189754: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189758u;
    // 0x189758: 0x0  nop
    ctx->pc = 0x189758u;
    // NOP
    // 0x18975c: 0x0  nop
    ctx->pc = 0x18975cu;
    // NOP
}
