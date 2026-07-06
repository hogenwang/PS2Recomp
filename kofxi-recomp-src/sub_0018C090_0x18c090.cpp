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

// Function: sub_0018C090
// Address: 0x18c090 - 0x18c120
void sub_0018C090_0x18c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C090_0x18c090");
#endif

    switch (ctx->pc) {
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c104u: goto label_18c104;
        default: break;
    }

    ctx->pc = 0x18c090u;

    // 0x18c090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18c098: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18C098u;
    {
        const bool branch_taken_0x18c098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C098u;
        // 0x18c09c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c098) {
            ctx->pc = 0x18C0F0u;
            goto label_18c0f0;
        }
    }
    ctx->pc = 0x18C0A0u;
    // 0x18c0a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c0a4: 0x50c20019  beql        $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18C0A4u;
    {
        const bool branch_taken_0x18c0a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c0a4) {
            ctx->pc = 0x18C0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C0A4u;
            // 0x18c0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0ACu;
    // 0x18c0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c0b0: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18C0B0u;
    {
        const bool branch_taken_0x18c0b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c0b0) {
            ctx->pc = 0x18C0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C0B0u;
            // 0x18c0b4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C0DCu;
            goto label_18c0dc;
        }
    }
    ctx->pc = 0x18C0B8u;
    // 0x18c0b8: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C0B8u;
    {
        const bool branch_taken_0x18c0b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0b8) {
            ctx->pc = 0x18C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C0B8u;
            // 0x18c0bc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C0C8u;
            goto label_18c0c8;
        }
    }
    ctx->pc = 0x18C0C0u;
    // 0x18c0c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C0C0u;
    {
        const bool branch_taken_0x18c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0C0u;
        // 0x18c0c4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0c0) {
            ctx->pc = 0x18C0FCu;
            goto label_18c0fc;
        }
    }
    ctx->pc = 0x18C0C8u;
label_18c0c8:
    // 0x18c0c8: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C0C8u;
    SET_GPR_U32(ctx, 31, 0x18C0D0u);
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C0C8u, 0x18C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0D0u;
label_18c0d0:
    // 0x18c0d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c0d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18C0D4u;
    {
        const bool branch_taken_0x18c0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0D4u;
        // 0x18c0d8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0d4) {
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0DCu;
label_18c0dc:
    // 0x18c0dc: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C0DCu;
    SET_GPR_U32(ctx, 31, 0x18C0E4u);
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C0DCu, 0x18C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0E4u;
label_18c0e4:
    // 0x18c0e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c0e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C0E8u;
    {
        const bool branch_taken_0x18c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0E8u;
        // 0x18c0ec: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0e8) {
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0F0u;
label_18c0f0:
    // 0x18c0f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18C0F4u;
    {
        const bool branch_taken_0x18c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0f4) {
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0FCu;
label_18c0fc:
    // 0x18c0fc: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C0FCu;
    SET_GPR_U32(ctx, 31, 0x18C104u);
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C0FCu, 0x18C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C104u;
label_18c104:
    // 0x18c104: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18c10c:
    // 0x18c10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c110: 0x3e00008  jr          $ra
    ctx->pc = 0x18C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C110u;
        // 0x18c114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C118u;
    // 0x18c118: 0x0  nop
    ctx->pc = 0x18c118u;
    // NOP
    // 0x18c11c: 0x0  nop
    ctx->pc = 0x18c11cu;
    // NOP
    if (ctx->pc == 0x18c11cu) { ctx->pc = 0x18c120u; }
}
