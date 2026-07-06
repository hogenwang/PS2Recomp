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

// Function: sub_0017A5D0
// Address: 0x17a5d0 - 0x17a650
void sub_0017A5D0_0x17a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A5D0_0x17a5d0");
#endif

    switch (ctx->pc) {
        case 0x17a5f0u: goto label_17a5f0;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a634u: goto label_17a634;
        case 0x17a63cu: goto label_17a63c;
        default: break;
    }

    ctx->pc = 0x17a5d0u;

    // 0x17a5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a5d4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a5dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17a5e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17a5e4: 0xa064d9d0  sb          $a0, -0x2630($v1)
    ctx->pc = 0x17a5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957520), (uint8_t)GPR_U32(ctx, 4));
    // 0x17a5e8: 0xc055684  jal         func_155A10
    ctx->pc = 0x17A5E8u;
    SET_GPR_U32(ctx, 31, 0x17A5F0u);
    ctx->pc = 0x17A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5E8u;
    // 0x17a5ec: 0xac40a344  sw          $zero, -0x5CBC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x17A5E8u, 0x17A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5F0u;
label_17a5f0:
    // 0x17a5f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17a5f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5f8: 0x2463a240  addiu       $v1, $v1, -0x5DC0
    ctx->pc = 0x17a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943296));
label_17a5fc:
    // 0x17a5fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17a600: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17a600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17a604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17a608: 0x28820050  slti        $v0, $a0, 0x50
    ctx->pc = 0x17a608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x17a60c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x17a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x17a610: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17a610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x17a614: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x17a614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x17a618: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x17a618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x17a61c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x17a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x17a620: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x17a620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x17a624: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17A624u;
    {
        const bool branch_taken_0x17a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A624u;
        // 0x17a628: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a624) {
            ctx->pc = 0x17A5FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a5fc;
        }
    }
    ctx->pc = 0x17A62Cu;
    // 0x17a62c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x17A62Cu;
    SET_GPR_U32(ctx, 31, 0x17A634u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x17A62Cu, 0x17A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A634u;
label_17a634:
    // 0x17a634: 0xc05df78  jal         func_177DE0
    ctx->pc = 0x17A634u;
    SET_GPR_U32(ctx, 31, 0x17A63Cu);
    ctx->pc = 0x177DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DE0u, 0x17A634u, 0x17A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A63Cu;
label_17a63c:
    // 0x17a63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a640: 0x3e00008  jr          $ra
    ctx->pc = 0x17A640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A640u;
        // 0x17a644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A648u;
    // 0x17a648: 0x0  nop
    ctx->pc = 0x17a648u;
    // NOP
    // 0x17a64c: 0x0  nop
    ctx->pc = 0x17a64cu;
    // NOP
    if (ctx->pc == 0x17a64cu) { ctx->pc = 0x17a650u; }
}
