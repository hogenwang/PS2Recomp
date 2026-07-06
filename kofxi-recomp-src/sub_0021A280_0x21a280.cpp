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

// Function: sub_0021A280
// Address: 0x21a280 - 0x21a378
void sub_0021A280_0x21a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A280_0x21a280");
#endif

    switch (ctx->pc) {
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a354u: goto label_21a354;
        default: break;
    }

    ctx->pc = 0x21a280u;

label_21a280:
    // 0x21a280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a290: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a294: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A294u;
    SET_GPR_U32(ctx, 31, 0x21A29Cu);
    ctx->pc = 0x21A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A294u;
    // 0x21a298: 0x248413f0  addiu       $a0, $a0, 0x13F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21A294u, 0x21A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A29Cu;
label_21a29c:
    // 0x21a29c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a2a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a2ac: 0x24841010  addiu       $a0, $a0, 0x1010
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    // 0x21a2b0: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A2B0u;
    ctx->pc = 0x21A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2B0u;
    // 0x21a2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21A2B8u;
    // 0x21a2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a2bc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a2c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a2c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a2c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a2cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a2d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2d8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21a2dc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a2e0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21a2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a2e4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21A2E4u;
    SET_GPR_U32(ctx, 31, 0x21A2ECu);
    ctx->pc = 0x21A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2E4u;
    // 0x21a2e8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21A2E4u, 0x21A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2ECu;
label_21a2ec:
    // 0x21a2ec: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a2f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2f4: 0xc0868a0  jal         func_21A280
    ctx->pc = 0x21A2F4u;
    SET_GPR_U32(ctx, 31, 0x21A2FCu);
    ctx->pc = 0x21A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2F4u;
    // 0x21a2f8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A280u;
    goto label_21a280;
    ctx->pc = 0x21A2FCu;
label_21a2fc:
    // 0x21a2fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a30c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a310: 0x3e00008  jr          $ra
    ctx->pc = 0x21A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A310u;
        // 0x21a314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A318u;
    // 0x21a318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a31c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a320: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a324: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21a324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a32c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a338: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a33c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a340: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a340u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a344: 0xc084582  jal         func_211608
    ctx->pc = 0x21A344u;
    SET_GPR_U32(ctx, 31, 0x21A34Cu);
    ctx->pc = 0x21A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A344u;
    // 0x21a348: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21A344u, 0x21A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A34Cu;
label_21a34c:
    // 0x21a34c: 0xc0868a0  jal         func_21A280
    ctx->pc = 0x21A34Cu;
    SET_GPR_U32(ctx, 31, 0x21A354u);
    ctx->pc = 0x21A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A34Cu;
    // 0x21a350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A280u;
    goto label_21a280;
    ctx->pc = 0x21A354u;
label_21a354:
    // 0x21a354: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a35c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21a360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a368: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A36Cu;
        // 0x21a370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A374u;
    // 0x21a374: 0x0  nop
    ctx->pc = 0x21a374u;
    // NOP
    if (ctx->pc == 0x21a374u) { ctx->pc = 0x21a378u; }
}
