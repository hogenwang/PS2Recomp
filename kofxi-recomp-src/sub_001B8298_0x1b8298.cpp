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

// Function: sub_001B8298
// Address: 0x1b8298 - 0x1b85c8
void sub_001B8298_0x1b8298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8298_0x1b8298");
#endif

    switch (ctx->pc) {
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b8338u: goto label_1b8338;
        case 0x1b8348u: goto label_1b8348;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b83b0u: goto label_1b83b0;
        case 0x1b8458u: goto label_1b8458;
        case 0x1b8464u: goto label_1b8464;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b8504u: goto label_1b8504;
        default: break;
    }

    ctx->pc = 0x1b8298u;

    // 0x1b8298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b829c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b82a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b82a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B82A8u;
    {
        const bool branch_taken_0x1b82a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82A8u;
        // 0x1b82ac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82a8) {
            ctx->pc = 0x1B82D0u;
            goto label_1b82d0;
        }
    }
    ctx->pc = 0x1B82B0u;
    // 0x1b82b0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b82b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b82b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b82bc: 0xc070f44  jal         func_1C3D10
    ctx->pc = 0x1B82BCu;
    SET_GPR_U32(ctx, 31, 0x1B82C4u);
    ctx->pc = 0x1B82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82BCu;
    // 0x1b82c0: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D10u, 0x1B82BCu, 0x1B82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82C4u;
label_1b82c4:
    // 0x1b82c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B82C4u;
    {
        const bool branch_taken_0x1b82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C4u;
        // 0x1b82c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82c4) {
            ctx->pc = 0x1B82E0u;
            goto label_1b82e0;
        }
    }
    ctx->pc = 0x1B82CCu;
    // 0x1b82cc: 0x0  nop
    ctx->pc = 0x1b82ccu;
    // NOP
label_1b82d0:
    // 0x1b82d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b82d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b82d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82d8: 0xc070f44  jal         func_1C3D10
    ctx->pc = 0x1B82D8u;
    SET_GPR_U32(ctx, 31, 0x1B82E0u);
    ctx->pc = 0x1B82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82D8u;
    // 0x1b82dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D10u, 0x1B82D8u, 0x1B82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82E0u;
label_1b82e0:
    // 0x1b82e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b82e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b82e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b82e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b82e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b82ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ECu;
        // 0x1b82f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82F4u;
    // 0x1b82f4: 0x0  nop
    ctx->pc = 0x1b82f4u;
    // NOP
    // 0x1b82f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b82fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b82fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8304: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b8304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8308: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b8308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b830c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8310: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b8310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8318u;
    {
        const bool branch_taken_0x1b8318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8318u;
        // 0x1b831c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8318) {
            ctx->pc = 0x1B8340u;
            goto label_1b8340;
        }
    }
    ctx->pc = 0x1B8320u;
    // 0x1b8320: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8324: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x1b8324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b8328: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1b8328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b832c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8330: 0xc070fa4  jal         func_1C3E90
    ctx->pc = 0x1B8330u;
    SET_GPR_U32(ctx, 31, 0x1B8338u);
    ctx->pc = 0x1B8334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8330u;
    // 0x1b8334: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3E90u, 0x1B8330u, 0x1B8338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8338u;
label_1b8338:
    // 0x1b8338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8338u;
    {
        const bool branch_taken_0x1b8338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8338u;
        // 0x1b833c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8338) {
            ctx->pc = 0x1B8348u;
            goto label_1b8348;
        }
    }
    ctx->pc = 0x1B8340u;
label_1b8340:
    // 0x1b8340: 0xc070f44  jal         func_1C3D10
    ctx->pc = 0x1B8340u;
    SET_GPR_U32(ctx, 31, 0x1B8348u);
    ctx->pc = 0x1B8344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8340u;
    // 0x1b8344: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D10u, 0x1B8340u, 0x1B8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8348u;
label_1b8348:
    // 0x1b8348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b834c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b834cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8354: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8354u;
        // 0x1b8358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B835Cu;
    // 0x1b835c: 0x0  nop
    ctx->pc = 0x1b835cu;
    // NOP
    // 0x1b8360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b836c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B836Cu;
    {
        const bool branch_taken_0x1b836c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B836Cu;
        // 0x1b8370: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b836c) {
            ctx->pc = 0x1B83A0u;
            goto label_1b83a0;
        }
    }
    ctx->pc = 0x1B8374u;
    // 0x1b8374: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b8374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b8378: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b8378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b837c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1b837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b8380: 0xc071000  jal         func_1C4000
    ctx->pc = 0x1B8380u;
    SET_GPR_U32(ctx, 31, 0x1B8388u);
    ctx->pc = 0x1B8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8380u;
    // 0x1b8384: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4000u, 0x1B8380u, 0x1B8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8388u;
label_1b8388:
    // 0x1b8388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b838c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8394: 0x8071008  j           func_1C4020
    ctx->pc = 0x1B8394u;
    ctx->pc = 0x1B8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8394u;
    // 0x1b8398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4020u;
    sub_001C4020_0x1c4020(rdram, ctx, runtime); return;
    ctx->pc = 0x1B839Cu;
    // 0x1b839c: 0x0  nop
    ctx->pc = 0x1b839cu;
    // NOP
label_1b83a0:
    // 0x1b83a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b83a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b83a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83a8: 0xc071000  jal         func_1C4000
    ctx->pc = 0x1B83A8u;
    SET_GPR_U32(ctx, 31, 0x1B83B0u);
    ctx->pc = 0x1B83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83A8u;
    // 0x1b83ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4000u, 0x1B83A8u, 0x1B83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83B0u;
label_1b83b0:
    // 0x1b83b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b83b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b83b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b83b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b83bc: 0x8071008  j           func_1C4020
    ctx->pc = 0x1B83BCu;
    ctx->pc = 0x1B83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83BCu;
    // 0x1b83c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4020u;
    sub_001C4020_0x1c4020(rdram, ctx, runtime); return;
    ctx->pc = 0x1B83C4u;
    // 0x1b83c4: 0x0  nop
    ctx->pc = 0x1b83c4u;
    // NOP
    // 0x1b83c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b83cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b83d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b83d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83d4: 0x8070ff6  j           func_1C3FD8
    ctx->pc = 0x1B83D4u;
    ctx->pc = 0x1B83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83D4u;
    // 0x1b83d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3FD8u, 0x1B83D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B83DCu;
    // 0x1b83dc: 0x0  nop
    ctx->pc = 0x1b83dcu;
    // NOP
    // 0x1b83e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b83e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b83e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b83e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83ec: 0x8070c5e  j           func_1C3178
    ctx->pc = 0x1B83ECu;
    ctx->pc = 0x1B83F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83ECu;
    // 0x1b83f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3178u, 0x1B83ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B83F4u;
    // 0x1b83f4: 0x0  nop
    ctx->pc = 0x1b83f4u;
    // NOP
    // 0x1b83f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b83f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b83fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8404: 0x8070c66  j           func_1C3198
    ctx->pc = 0x1B8404u;
    ctx->pc = 0x1B8408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8404u;
    // 0x1b8408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3198u, 0x1B8404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B840Cu;
    // 0x1b840c: 0x0  nop
    ctx->pc = 0x1b840cu;
    // NOP
    // 0x1b8410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b841c: 0x807103e  j           func_1C40F8
    ctx->pc = 0x1B841Cu;
    ctx->pc = 0x1B8420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B841Cu;
    // 0x1b8420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40F8u, 0x1B841Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B8424u;
    // 0x1b8424: 0x0  nop
    ctx->pc = 0x1b8424u;
    // NOP
    // 0x1b8428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b842c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8430: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x1b8430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1b8434: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8438: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1b843c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b8440: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1b8440u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1b8444: 0x24a57fb8  addiu       $a1, $a1, 0x7FB8
    ctx->pc = 0x1b8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32696));
    // 0x1b8448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b844c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b8450: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1B8450u;
    SET_GPR_U32(ctx, 31, 0x1B8458u);
    ctx->pc = 0x1B8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8450u;
    // 0x1b8454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1B8450u, 0x1B8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8458u;
label_1b8458:
    // 0x1b8458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b8458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b845c: 0xc06f020  jal         func_1BC080
    ctx->pc = 0x1B845Cu;
    SET_GPR_U32(ctx, 31, 0x1B8464u);
    ctx->pc = 0x1B8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B845Cu;
    // 0x1b8460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC080u, 0x1B845Cu, 0x1B8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8464u;
label_1b8464:
    // 0x1b8464: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8468: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b846c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B846Cu;
        // 0x1b8470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B846Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8474u;
    // 0x1b8474: 0x0  nop
    ctx->pc = 0x1b8474u;
    // NOP
    // 0x1b8478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b847c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b847cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8480: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1b8484: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8488: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1b848c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b8490: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1b8494: 0x24a57fb8  addiu       $a1, $a1, 0x7FB8
    ctx->pc = 0x1b8494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32696));
    // 0x1b8498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b849c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b84a0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1B84A0u;
    SET_GPR_U32(ctx, 31, 0x1B84A8u);
    ctx->pc = 0x1B84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84A0u;
    // 0x1b84a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1B84A0u, 0x1B84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84A8u;
label_1b84a8:
    // 0x1b84a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84ac: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b84b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b84b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b84b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b84bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84BCu;
        // 0x1b84c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B84C4u;
    // 0x1b84c4: 0x0  nop
    ctx->pc = 0x1b84c4u;
    // NOP
    // 0x1b84c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b84cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b84ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d0: 0x24a707ff  addiu       $a3, $a1, 0x7FF
    ctx->pc = 0x1b84d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x1b84d4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1b84d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b84d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b84dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b84dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b84e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84e4: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1b84e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1b84e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b84e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b84ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b84f0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1B84F0u;
    SET_GPR_U32(ctx, 31, 0x1B84F8u);
    ctx->pc = 0x1B84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F0u;
    // 0x1b84f4: 0x24a57fb8  addiu       $a1, $a1, 0x7FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1B84F0u, 0x1B84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84F8u;
label_1b84f8:
    // 0x1b84f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b84f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84fc: 0xc06bff8  jal         func_1AFFE0
    ctx->pc = 0x1B84FCu;
    SET_GPR_U32(ctx, 31, 0x1B8504u);
    ctx->pc = 0x1B8500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84FCu;
    // 0x1b8500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFE0u, 0x1B84FCu, 0x1B8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8504u;
label_1b8504:
    // 0x1b8504: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b8504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8508: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b8508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b850c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B850Cu;
        // 0x1b8510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8514u;
    // 0x1b8514: 0x0  nop
    ctx->pc = 0x1b8514u;
    // NOP
    // 0x1b8518: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b851c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B851Cu;
        // 0x1b8520: 0xac44c358  sw          $a0, -0x3CA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8524u;
    // 0x1b8524: 0x0  nop
    ctx->pc = 0x1b8524u;
    // NOP
    // 0x1b8528: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b852c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B852Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B852Cu;
        // 0x1b8530: 0x8c62c358  lw          $v0, -0x3CA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951768)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B852Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8534u;
    // 0x1b8534: 0x0  nop
    ctx->pc = 0x1b8534u;
    // NOP
    // 0x1b8538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b853c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8544: 0x80701d2  j           func_1C0748
    ctx->pc = 0x1B8544u;
    ctx->pc = 0x1B8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8544u;
    // 0x1b8548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0748u, 0x1B8544u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B854Cu;
    // 0x1b854c: 0x0  nop
    ctx->pc = 0x1b854cu;
    // NOP
    // 0x1b8550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b855c: 0x80701d6  j           func_1C0758
    ctx->pc = 0x1B855Cu;
    ctx->pc = 0x1B8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B855Cu;
    // 0x1b8560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0758u, 0x1B855Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B8564u;
    // 0x1b8564: 0x0  nop
    ctx->pc = 0x1b8564u;
    // NOP
    // 0x1b8568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b856c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8574: 0x80701ca  j           func_1C0728
    ctx->pc = 0x1B8574u;
    ctx->pc = 0x1B8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8574u;
    // 0x1b8578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0728u, 0x1B8574u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B857Cu;
    // 0x1b857c: 0x0  nop
    ctx->pc = 0x1b857cu;
    // NOP
    // 0x1b8580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b858c: 0x80701ce  j           func_1C0738
    ctx->pc = 0x1B858Cu;
    ctx->pc = 0x1B8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B858Cu;
    // 0x1b8590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0738u, 0x1B858Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B8594u;
    // 0x1b8594: 0x0  nop
    ctx->pc = 0x1b8594u;
    // NOP
    // 0x1b8598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b859c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b85a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b85a4: 0x80701f0  j           func_1C07C0
    ctx->pc = 0x1B85A4u;
    ctx->pc = 0x1B85A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85A4u;
    // 0x1b85a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C07C0u, 0x1B85A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B85ACu;
    // 0x1b85ac: 0x0  nop
    ctx->pc = 0x1b85acu;
    // NOP
    // 0x1b85b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b85b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b85b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b85bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b85bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b85c0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B85C0u;
    ctx->pc = 0x1B85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85C0u;
    // 0x1b85c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B85C8u;
}
