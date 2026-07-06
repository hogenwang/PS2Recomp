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

// Function: sub_001BBD18
// Address: 0x1bbd18 - 0x1bbd60
void sub_001BBD18_0x1bbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBD18_0x1bbd18");
#endif

    switch (ctx->pc) {
        case 0x1bbd3cu: goto label_1bbd3c;
        case 0x1bbd48u: goto label_1bbd48;
        default: break;
    }

    ctx->pc = 0x1bbd18u;

    // 0x1bbd18: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD18u;
        // 0x1bbd1c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBD20u;
    // 0x1bbd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbd30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbd34: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBD34u;
    SET_GPR_U32(ctx, 31, 0x1BBD3Cu);
    ctx->pc = 0x1BBD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD34u;
    // 0x1bbd38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BBD34u, 0x1BBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD3Cu;
label_1bbd3c:
    // 0x1bbd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd40: 0xc06ef58  jal         func_1BBD60
    ctx->pc = 0x1BBD40u;
    SET_GPR_U32(ctx, 31, 0x1BBD48u);
    ctx->pc = 0x1BBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD40u;
    // 0x1bbd44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD60u, 0x1BBD40u, 0x1BBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD48u;
label_1bbd48:
    // 0x1bbd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd54: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBD54u;
    ctx->pc = 0x1BBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD54u;
    // 0x1bbd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BBD5Cu;
    // 0x1bbd5c: 0x0  nop
    ctx->pc = 0x1bbd5cu;
    // NOP
}
