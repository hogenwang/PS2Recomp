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

// Function: sub_001FAEE0
// Address: 0x1faee0 - 0x1faf68
void sub_001FAEE0_0x1faee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEE0_0x1faee0");
#endif

    switch (ctx->pc) {
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1faf44u: goto label_1faf44;
        default: break;
    }

    ctx->pc = 0x1faee0u;

    // 0x1faee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faee4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1faee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1faee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faeec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faef0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faef4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1faef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1faef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1faefc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1faefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf00: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAF00u;
    {
        const bool branch_taken_0x1faf00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF00u;
        // 0x1faf04: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf00) {
            ctx->pc = 0x1FAF24u;
            goto label_1faf24;
        }
    }
    ctx->pc = 0x1FAF08u;
    // 0x1faf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faf0c: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAF0Cu;
    {
        const bool branch_taken_0x1faf0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1faf0c) {
            ctx->pc = 0x1FAF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF0Cu;
            // 0x1faf10: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF28u;
            goto label_1faf28;
        }
    }
    ctx->pc = 0x1FAF14u;
    // 0x1faf14: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1FAF14u;
    SET_GPR_U32(ctx, 31, 0x1FAF1Cu);
    ctx->pc = 0x1FAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF14u;
    // 0x1faf18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA38u, 0x1FAF14u, 0x1FAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF1Cu;
label_1faf1c:
    // 0x1faf1c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAF1Cu;
    {
        const bool branch_taken_0x1faf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf1c) {
            ctx->pc = 0x1FAF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF1Cu;
            // 0x1faf20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF54u;
            goto label_1faf54;
        }
    }
    ctx->pc = 0x1FAF24u;
label_1faf24:
    // 0x1faf24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1faf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1faf28:
    // 0x1faf28: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAF28u;
    {
        const bool branch_taken_0x1faf28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF28u;
        // 0x1faf2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf28) {
            ctx->pc = 0x1FAF50u;
            goto label_1faf50;
        }
    }
    ctx->pc = 0x1FAF30u;
    // 0x1faf30: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAF30u;
    {
        const bool branch_taken_0x1faf30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1faf30) {
            ctx->pc = 0x1FAF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF30u;
            // 0x1faf34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF54u;
            goto label_1faf54;
        }
    }
    ctx->pc = 0x1FAF38u;
    // 0x1faf38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1faf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf3c: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1FAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF44u);
    ctx->pc = 0x1FAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF3Cu;
    // 0x1faf40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA38u, 0x1FAF3Cu, 0x1FAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF44u;
    {
        const bool branch_taken_0x1faf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF44u;
        // 0x1faf48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf44) {
            ctx->pc = 0x1FAF54u;
            goto label_1faf54;
        }
    }
    ctx->pc = 0x1FAF4Cu;
    // 0x1faf4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1faf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1faf50:
    // 0x1faf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1faf54:
    // 0x1faf54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faf58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1faf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faf5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1faf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF60u;
        // 0x1faf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF68u;
}
