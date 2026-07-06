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

// Function: sub_001D9E38
// Address: 0x1d9e38 - 0x1d9e98
void sub_001D9E38_0x1d9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9E38_0x1d9e38");
#endif

    switch (ctx->pc) {
        case 0x1d9e54u: goto label_1d9e54;
        default: break;
    }

    ctx->pc = 0x1d9e38u;

    // 0x1d9e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9e4c: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E54u);
    ctx->pc = 0x1D9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E4Cu;
    // 0x1d9e50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1D9E4Cu, 0x1D9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E54u;
label_1d9e54:
    // 0x1d9e54: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9e58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E58u;
        // 0x1d9e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9E78u;
            goto label_1d9e78;
        }
    }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e64: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x1d9e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x1d9e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e70: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9E70u;
    ctx->pc = 0x1D9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E70u;
    // 0x1d9e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E78u;
label_1d9e78:
    // 0x1d9e78: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x1d9e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d9e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E8Cu;
        // 0x1d9e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E94u;
    // 0x1d9e94: 0x0  nop
    ctx->pc = 0x1d9e94u;
    // NOP
}
