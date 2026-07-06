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

// Function: sub_0024B958
// Address: 0x24b958 - 0x24ba10
void sub_0024B958_0x24b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B958_0x24b958");
#endif

    switch (ctx->pc) {
        case 0x24b97cu: goto label_24b97c;
        case 0x24b998u: goto label_24b998;
        case 0x24b9b0u: goto label_24b9b0;
        case 0x24b9ecu: goto label_24b9ec;
        case 0x24b9f4u: goto label_24b9f4;
        default: break;
    }

    ctx->pc = 0x24b958u;

    // 0x24b958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24b95c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b964: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24b964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b96c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24b96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b970: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24b974: 0xc098552  jal         func_261548
    ctx->pc = 0x24B974u;
    SET_GPR_U32(ctx, 31, 0x24B97Cu);
    ctx->pc = 0x24B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B974u;
    // 0x24b978: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24B974u, 0x24B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B97Cu;
label_24b97c:
    // 0x24b97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b980: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B980u;
    {
        const bool branch_taken_0x24b980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b980) {
            ctx->pc = 0x24B984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B980u;
            // 0x24b984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B990u;
            goto label_24b990;
        }
    }
    ctx->pc = 0x24B988u;
    // 0x24b988: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24B988u;
    {
        const bool branch_taken_0x24b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B988u;
        // 0x24b98c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b988) {
            ctx->pc = 0x24B9F8u;
            goto label_24b9f8;
        }
    }
    ctx->pc = 0x24B990u;
label_24b990:
    // 0x24b990: 0xc048c96  jal         func_123258
    ctx->pc = 0x24B990u;
    SET_GPR_U32(ctx, 31, 0x24B998u);
    ctx->pc = 0x24B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B990u;
    // 0x24b994: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24B990u, 0x24B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B998u;
label_24b998:
    // 0x24b998: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b99c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x24b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x24b9a0: 0xae110058  sw          $s1, 0x58($s0)
    ctx->pc = 0x24b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
    // 0x24b9a4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x24b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x24b9a8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24B9A8u;
    SET_GPR_U32(ctx, 31, 0x24B9B0u);
    ctx->pc = 0x24B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9A8u;
    // 0x24b9ac: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24B9A8u, 0x24B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9B0u;
label_24b9b0:
    // 0x24b9b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24b9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24b9b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x24b9bc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x24b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x24b9c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24b9c4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B9C4u;
    {
        const bool branch_taken_0x24b9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x24b9c4) {
            ctx->pc = 0x24B9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B9C4u;
            // 0x24b9c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B9D8u;
            goto label_24b9d8;
        }
    }
    ctx->pc = 0x24B9CCu;
    // 0x24b9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24B9CCu;
    {
        const bool branch_taken_0x24b9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9CCu;
        // 0x24b9d0: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9cc) {
            ctx->pc = 0x24B9DCu;
            goto label_24b9dc;
        }
    }
    ctx->pc = 0x24B9D4u;
    // 0x24b9d4: 0x0  nop
    ctx->pc = 0x24b9d4u;
    // NOP
label_24b9d8:
    // 0x24b9d8: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x24b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_24b9dc:
    // 0x24b9dc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x24b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x24b9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9e4: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x24B9E4u;
    SET_GPR_U32(ctx, 31, 0x24B9ECu);
    ctx->pc = 0x24B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9E4u;
    // 0x24b9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C8D0u, 0x24B9E4u, 0x24B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9ECu;
label_24b9ec:
    // 0x24b9ec: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24B9ECu;
    SET_GPR_U32(ctx, 31, 0x24B9F4u);
    ctx->pc = 0x24B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9ECu;
    // 0x24b9f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24B9ECu, 0x24B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9F4u;
label_24b9f4:
    // 0x24b9f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24b9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b9f8:
    // 0x24b9f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24b9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b9fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ba00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ba00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ba04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba08: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA08u;
        // 0x24ba0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA10u;
}
