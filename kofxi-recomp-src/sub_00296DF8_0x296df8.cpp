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

// Function: sub_00296DF8
// Address: 0x296df8 - 0x296e70
void sub_00296DF8_0x296df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296DF8_0x296df8");
#endif

    switch (ctx->pc) {
        case 0x296e0cu: goto label_296e0c;
        case 0x296e28u: goto label_296e28;
        case 0x296e40u: goto label_296e40;
        case 0x296e58u: goto label_296e58;
        default: break;
    }

    ctx->pc = 0x296df8u;

    // 0x296df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296e04: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x296E04u;
    SET_GPR_U32(ctx, 31, 0x296E0Cu);
    ctx->pc = 0x296E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E04u;
    // 0x296e08: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x296E04u, 0x296E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E0Cu;
label_296e0c:
    // 0x296e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e10: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x296E10u;
    {
        const bool branch_taken_0x296e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E10u;
        // 0x296e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e10) {
            ctx->pc = 0x296E40u;
            goto label_296e40;
        }
    }
    ctx->pc = 0x296E18u;
    // 0x296e18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x296e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x296e1c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x296e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x296e20: 0xc0a5b50  jal         func_296D40
    ctx->pc = 0x296E20u;
    SET_GPR_U32(ctx, 31, 0x296E28u);
    ctx->pc = 0x296E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E20u;
    // 0x296e24: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D40u, 0x296E20u, 0x296E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E28u;
label_296e28:
    // 0x296e28: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x296E28u;
    {
        const bool branch_taken_0x296e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E28u;
        // 0x296e2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e28) {
            ctx->pc = 0x296E5Cu;
            goto label_296e5c;
        }
    }
    ctx->pc = 0x296E30u;
    // 0x296e30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E30u;
    {
        const bool branch_taken_0x296e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E30u;
        // 0x296e34: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e30) {
            ctx->pc = 0x296E44u;
            goto label_296e44;
        }
    }
    ctx->pc = 0x296E38u;
    // 0x296e38: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296E38u;
    SET_GPR_U32(ctx, 31, 0x296E40u);
    ctx->pc = 0x296E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E38u;
    // 0x296e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296E38u, 0x296E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E40u;
label_296e40:
    // 0x296e40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_296e44:
    // 0x296e44: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x296e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x296e48: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e50: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296E50u;
    SET_GPR_U32(ctx, 31, 0x296E58u);
    ctx->pc = 0x296E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E50u;
    // 0x296e54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x296E50u, 0x296E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E58u;
label_296e58:
    // 0x296e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296e5c:
    // 0x296e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e64: 0x3e00008  jr          $ra
    ctx->pc = 0x296E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E64u;
        // 0x296e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E6Cu;
    // 0x296e6c: 0x0  nop
    ctx->pc = 0x296e6cu;
    // NOP
}
