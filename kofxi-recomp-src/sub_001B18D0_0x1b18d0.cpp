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

// Function: sub_001B18D0
// Address: 0x1b18d0 - 0x1b1940
void sub_001B18D0_0x1b18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B18D0_0x1b18d0");
#endif

    switch (ctx->pc) {
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b192cu: goto label_1b192c;
        default: break;
    }

    ctx->pc = 0x1b18d0u;

    // 0x1b18d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b18d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b18d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b18d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b18d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b18dc: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b18dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b18e0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B18E0u;
    {
        const bool branch_taken_0x1b18e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18E0u;
        // 0x1b18e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18e0) {
            ctx->pc = 0x1B18F8u;
            goto label_1b18f8;
        }
    }
    ctx->pc = 0x1B18E8u;
    // 0x1b18e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b18ec: 0x24847ae0  addiu       $a0, $a0, 0x7AE0
    ctx->pc = 0x1b18ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31456));
    // 0x1b18f0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B18F0u;
    ctx->pc = 0x1B18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18F0u;
    // 0x1b18f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B18F8u;
label_1b18f8:
    // 0x1b18f8: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x1b18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x1b18fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18FCu;
        // 0x1b1900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B18FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1904u;
    // 0x1b1904: 0x0  nop
    ctx->pc = 0x1b1904u;
    // NOP
    // 0x1b1908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b190c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1914: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1914u;
    SET_GPR_U32(ctx, 31, 0x1B191Cu);
    ctx->pc = 0x1B1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1914u;
    // 0x1b1918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B1914u, 0x1B191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B191Cu;
label_1b191c:
    // 0x1b191c: 0xc06c650  jal         func_1B1940
    ctx->pc = 0x1B191Cu;
    SET_GPR_U32(ctx, 31, 0x1B1924u);
    ctx->pc = 0x1B1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B191Cu;
    // 0x1b1920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1940u, 0x1B191Cu, 0x1B1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x1B1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1924u;
    // 0x1b1928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B1924u, 0x1B192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1938: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1938u;
        // 0x1b193c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1940u;
}
