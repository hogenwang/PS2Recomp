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

// Function: sub_002D7230
// Address: 0x2d7230 - 0x2d7310
void sub_002D7230_0x2d7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7230_0x2d7230");
#endif

    switch (ctx->pc) {
        case 0x2d7248u: goto label_2d7248;
        case 0x2d7268u: goto label_2d7268;
        case 0x2d7280u: goto label_2d7280;
        case 0x2d729cu: goto label_2d729c;
        case 0x2d72a8u: goto label_2d72a8;
        case 0x2d72b0u: goto label_2d72b0;
        case 0x2d72e4u: goto label_2d72e4;
        case 0x2d72f0u: goto label_2d72f0;
        case 0x2d72f8u: goto label_2d72f8;
        default: break;
    }

    ctx->pc = 0x2d7230u;

    // 0x2d7230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d723c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d7240: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D7240u;
    SET_GPR_U32(ctx, 31, 0x2D7248u);
    ctx->pc = 0x2D7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7240u;
    // 0x2d7244: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D7240u, 0x2D7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7248u;
label_2d7248:
    // 0x2d7248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d724c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d724cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7250: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2d7250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2d7254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d7254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2d7258: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7258u;
    {
        const bool branch_taken_0x2d7258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7258u;
        // 0x2d725c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7258) {
            ctx->pc = 0x2D726Cu;
            goto label_2d726c;
        }
    }
    ctx->pc = 0x2D7260u;
    // 0x2d7260: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7260u;
    SET_GPR_U32(ctx, 31, 0x2D7268u);
    ctx->pc = 0x2D7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7260u;
    // 0x2d7264: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D7260u, 0x2D7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7268u;
label_2d7268:
    // 0x2d7268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d726c:
    // 0x2d726c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d726cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7274: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7274u;
        // 0x2d7278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D727Cu;
    // 0x2d727c: 0x0  nop
    ctx->pc = 0x2d727cu;
    // NOP
label_2d7280:
    // 0x2d7280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d728c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d7294: 0xc0b5cc4  jal         func_2D7310
    ctx->pc = 0x2D7294u;
    SET_GPR_U32(ctx, 31, 0x2D729Cu);
    ctx->pc = 0x2D7298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7294u;
    // 0x2d7298: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7310u, 0x2D7294u, 0x2D729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D729Cu;
label_2d729c:
    // 0x2d729c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d72a0: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D72A0u;
    SET_GPR_U32(ctx, 31, 0x2D72A8u);
    ctx->pc = 0x2D72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72A0u;
    // 0x2d72a4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D72A0u, 0x2D72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72A8u;
label_2d72a8:
    // 0x2d72a8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D72A8u;
    SET_GPR_U32(ctx, 31, 0x2D72B0u);
    ctx->pc = 0x2D72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72A8u;
    // 0x2d72ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D72A8u, 0x2D72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72B0u;
label_2d72b0:
    // 0x2d72b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d72b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d72b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d72b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d72b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d72bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d72c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D72C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72C0u;
        // 0x2d72c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D72C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D72C8u;
    // 0x2d72c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d72c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d72cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d72d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d72d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d72d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d72d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d72dc: 0xc0b5cc4  jal         func_2D7310
    ctx->pc = 0x2D72DCu;
    SET_GPR_U32(ctx, 31, 0x2D72E4u);
    ctx->pc = 0x2D72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72DCu;
    // 0x2d72e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7310u, 0x2D72DCu, 0x2D72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72E4u;
label_2d72e4:
    // 0x2d72e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d72e8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D72E8u;
    SET_GPR_U32(ctx, 31, 0x2D72F0u);
    ctx->pc = 0x2D72ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72E8u;
    // 0x2d72ec: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D72E8u, 0x2D72F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72F0u;
label_2d72f0:
    // 0x2d72f0: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D72F0u;
    SET_GPR_U32(ctx, 31, 0x2D72F8u);
    ctx->pc = 0x2D72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72F0u;
    // 0x2d72f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D72F0u, 0x2D72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72F8u;
label_2d72f8:
    // 0x2d72f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d72fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d72fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7308: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7308u;
        // 0x2d730c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7310u;
}
