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

// Function: sub_001E32B0
// Address: 0x1e32b0 - 0x1e3388
void sub_001E32B0_0x1e32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E32B0_0x1e32b0");
#endif

    switch (ctx->pc) {
        case 0x1e32c4u: goto label_1e32c4;
        case 0x1e32e0u: goto label_1e32e0;
        case 0x1e32f0u: goto label_1e32f0;
        case 0x1e3328u: goto label_1e3328;
        case 0x1e3360u: goto label_1e3360;
        default: break;
    }

    ctx->pc = 0x1e32b0u;

    // 0x1e32b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e32b4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1e32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1e32b8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e32bc: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E32BCu;
    SET_GPR_U32(ctx, 31, 0x1E32C4u);
    ctx->pc = 0x1E32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32BCu;
    // 0x1e32c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E32BCu, 0x1E32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32C4u;
label_1e32c4:
    // 0x1e32c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e32c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e32c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32cc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32CCu;
    {
        const bool branch_taken_0x1e32cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32CCu;
        // 0x1e32d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32cc) {
            ctx->pc = 0x1E32E8u;
            goto label_1e32e8;
        }
    }
    ctx->pc = 0x1E32D4u;
    // 0x1e32d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e32d8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E32D8u;
    SET_GPR_U32(ctx, 31, 0x1E32E0u);
    ctx->pc = 0x1E32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32D8u;
    // 0x1e32dc: 0x2484d948  addiu       $a0, $a0, -0x26B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E32D8u, 0x1E32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32E0u;
label_1e32e0:
    // 0x1e32e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E32E0u;
    {
        const bool branch_taken_0x1e32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32E0u;
        // 0x1e32e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32e0) {
            ctx->pc = 0x1E32F4u;
            goto label_1e32f4;
        }
    }
    ctx->pc = 0x1E32E8u;
label_1e32e8:
    // 0x1e32e8: 0xc0789fc  jal         func_1E27F0
    ctx->pc = 0x1E32E8u;
    SET_GPR_U32(ctx, 31, 0x1E32F0u);
    ctx->pc = 0x1E27F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27F0u, 0x1E32E8u, 0x1E32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32F0u;
label_1e32f0:
    // 0x1e32f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e32f4:
    // 0x1e32f4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1e32f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e32f8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e32f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e32fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32FCu;
        // 0x1e3300: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3304u;
    // 0x1e3304: 0x0  nop
    ctx->pc = 0x1e3304u;
    // NOP
    // 0x1e3308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e330c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e3318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e331c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e3320: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E3320u;
    SET_GPR_U32(ctx, 31, 0x1E3328u);
    ctx->pc = 0x1E3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3320u;
    // 0x1e3324: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E3320u, 0x1E3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3328u;
label_1e3328:
    // 0x1e3328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e332c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3330: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3330u;
    {
        const bool branch_taken_0x1e3330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3330u;
        // 0x1e3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3330) {
            ctx->pc = 0x1E3358u;
            goto label_1e3358;
        }
    }
    ctx->pc = 0x1E3338u;
    // 0x1e3338: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e333c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e333cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3344: 0x2484d980  addiu       $a0, $a0, -0x2680
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x1e3348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e3348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e334c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e334cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3350: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E3350u;
    ctx->pc = 0x1E3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3350u;
    // 0x1e3354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3358u;
label_1e3358:
    // 0x1e3358: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E3358u;
    SET_GPR_U32(ctx, 31, 0x1E3360u);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E3358u, 0x1E3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3360u;
label_1e3360:
    // 0x1e3360: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e3364: 0x2513026  xor         $a2, $s2, $s1
    ctx->pc = 0x1e3364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x1e3368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e336c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e336cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3374: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e3374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3378: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1e3378u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e337c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e337cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3380: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3380u;
    ctx->pc = 0x1E3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3380u;
    // 0x1e3384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3388u;
}
