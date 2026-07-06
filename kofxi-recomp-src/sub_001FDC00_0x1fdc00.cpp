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

// Function: sub_001FDC00
// Address: 0x1fdc00 - 0x1fdc58
void sub_001FDC00_0x1fdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDC00_0x1fdc00");
#endif

    switch (ctx->pc) {
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc38u: goto label_1fdc38;
        default: break;
    }

    ctx->pc = 0x1fdc00u;

    // 0x1fdc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fdc10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fdc14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fdc18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDC18u;
    {
        const bool branch_taken_0x1fdc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC18u;
        // 0x1fdc1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc18) {
            ctx->pc = 0x1FDC44u;
            goto label_1fdc44;
        }
    }
    ctx->pc = 0x1FDC20u;
    // 0x1fdc20: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1fdc20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fdc24: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDC24u;
    SET_GPR_U32(ctx, 31, 0x1FDC2Cu);
    ctx->pc = 0x1FDC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC24u;
    // 0x1fdc28: 0xde040130  ld          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x1FDC24u, 0x1FDC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC2Cu;
label_1fdc2c:
    // 0x1fdc2c: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x1fdc2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fdc30: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDC30u;
    SET_GPR_U32(ctx, 31, 0x1FDC38u);
    ctx->pc = 0x1FDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC30u;
    // 0x1fdc34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x1FDC30u, 0x1FDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC38u;
label_1fdc38:
    // 0x1fdc38: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x1fdc38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1fdc3c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1fdc3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1fdc40: 0xfe030128  sd          $v1, 0x128($s0)
    ctx->pc = 0x1fdc40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 3));
label_1fdc44:
    // 0x1fdc44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdc48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdc4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fdc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdc50: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC50u;
        // 0x1fdc54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC58u;
}
