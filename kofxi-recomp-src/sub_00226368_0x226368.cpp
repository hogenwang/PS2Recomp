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

// Function: sub_00226368
// Address: 0x226368 - 0x226480
void sub_00226368_0x226368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226368_0x226368");
#endif

    switch (ctx->pc) {
        case 0x2263bcu: goto label_2263bc;
        case 0x2263e8u: goto label_2263e8;
        case 0x226450u: goto label_226450;
        default: break;
    }

    ctx->pc = 0x226368u;

    // 0x226368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22636c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22636cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226374: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x226374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226378: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x226378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x22637c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22637cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226380: 0x24c63790  addiu       $a2, $a2, 0x3790
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14224));
    // 0x226384: 0x80898b0  j           func_2262C0
    ctx->pc = 0x226384u;
    ctx->pc = 0x226388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226384u;
    // 0x226388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    sub_002262C0_0x2262c0(rdram, ctx, runtime); return;
    ctx->pc = 0x22638Cu;
    // 0x22638c: 0x0  nop
    ctx->pc = 0x22638cu;
    // NOP
    // 0x226390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226394: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226394u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22639c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2263a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2263a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2263a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2263a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2263a8: 0xadf1f1cc  sw          $s1, -0xE34($t7)
    ctx->pc = 0x2263a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963660), GPR_U32(ctx, 17));
    // 0x2263ac: 0x4a1000c  bgez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2263ACu;
    {
        const bool branch_taken_0x2263ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2263B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ACu;
        // 0x2263b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263ac) {
            ctx->pc = 0x2263E0u;
            goto label_2263e0;
        }
    }
    ctx->pc = 0x2263B4u;
    // 0x2263b4: 0xc089920  jal         func_226480
    ctx->pc = 0x2263B4u;
    SET_GPR_U32(ctx, 31, 0x2263BCu);
    ctx->pc = 0x226480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226480u, 0x2263B4u, 0x2263BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263BCu;
label_2263bc:
    // 0x2263bc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2263bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2263c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2263c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2263c4: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2263c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x2263c8: 0xadf1f1d4  sw          $s1, -0xE2C($t7)
    ctx->pc = 0x2263c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963668), GPR_U32(ctx, 17));
    // 0x2263cc: 0xadd1f1d0  sw          $s1, -0xE30($t6)
    ctx->pc = 0x2263ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963664), GPR_U32(ctx, 17));
    // 0x2263d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2263d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2263d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2263d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2263d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2263D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263D8u;
        // 0x2263dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2263E0u;
label_2263e0:
    // 0x2263e0: 0xc08998e  jal         func_226638
    ctx->pc = 0x2263E0u;
    SET_GPR_U32(ctx, 31, 0x2263E8u);
    ctx->pc = 0x226638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226638u, 0x2263E0u, 0x2263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263E8u;
label_2263e8:
    // 0x2263e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2263e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2263ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2263f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2263f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2263f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2263f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2263f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2263f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2263fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2263fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226400: 0x248437a0  addiu       $a0, $a0, 0x37A0
    ctx->pc = 0x226400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
    // 0x226404: 0x24e737b0  addiu       $a3, $a3, 0x37B0
    ctx->pc = 0x226404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14256));
    // 0x226408: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x226408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x22640c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22640cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226410: 0x80897d6  j           func_225F58
    ctx->pc = 0x226410u;
    ctx->pc = 0x226414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226410u;
    // 0x226414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    ctx->pc = 0x226418u;
    // 0x226418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22641c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226424: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226424u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22642c: 0xadeef1d4  sw          $t6, -0xE2C($t7)
    ctx->pc = 0x22642cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963668), GPR_U32(ctx, 14));
    // 0x226430: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226430u;
    {
        const bool branch_taken_0x226430 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x226434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226430u;
        // 0x226434: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226430) {
            ctx->pc = 0x226448u;
            goto label_226448;
        }
    }
    ctx->pc = 0x226438u;
    // 0x226438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22643c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226440: 0x8089920  j           func_226480
    ctx->pc = 0x226440u;
    ctx->pc = 0x226444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226440u;
    // 0x226444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226480u;
    sub_00226480_0x226480(rdram, ctx, runtime); return;
    ctx->pc = 0x226448u;
label_226448:
    // 0x226448: 0xc08998e  jal         func_226638
    ctx->pc = 0x226448u;
    SET_GPR_U32(ctx, 31, 0x226450u);
    ctx->pc = 0x226638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226638u, 0x226448u, 0x226450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226450u;
label_226450:
    // 0x226450: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x226454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226458: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x226458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22645c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22645cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226460: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226464: 0x248437d8  addiu       $a0, $a0, 0x37D8
    ctx->pc = 0x226464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14296));
    // 0x226468: 0x24e737e8  addiu       $a3, $a3, 0x37E8
    ctx->pc = 0x226468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14312));
    // 0x22646c: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x22646cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x226470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226474: 0x80897d6  j           func_225F58
    ctx->pc = 0x226474u;
    ctx->pc = 0x226478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226474u;
    // 0x226478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    ctx->pc = 0x22647Cu;
    // 0x22647c: 0x0  nop
    ctx->pc = 0x22647cu;
    // NOP
}
