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

// Function: sub_0024A690
// Address: 0x24a690 - 0x24a708
void sub_0024A690_0x24a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A690_0x24a690");
#endif

    switch (ctx->pc) {
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6e0u: goto label_24a6e0;
        default: break;
    }

    ctx->pc = 0x24a690u;

    // 0x24a690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a69c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x24a6a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a6a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24A6A8u;
    {
        const bool branch_taken_0x24a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6A8u;
        // 0x24a6ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6a8) {
            ctx->pc = 0x24A6F8u;
            goto label_24a6f8;
        }
    }
    ctx->pc = 0x24A6B0u;
    // 0x24a6b0: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x24a6b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x24a6b4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x24a6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x24a6b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A6B8u;
    {
        const bool branch_taken_0x24a6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6B8u;
        // 0x24a6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6b8) {
            ctx->pc = 0x24A6D4u;
            goto label_24a6d4;
        }
    }
    ctx->pc = 0x24A6C0u;
    // 0x24a6c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a6c4: 0xc090f82  jal         func_243E08
    ctx->pc = 0x24A6C4u;
    SET_GPR_U32(ctx, 31, 0x24A6CCu);
    ctx->pc = 0x24A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6C4u;
    // 0x24a6c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E08u, 0x24A6C4u, 0x24A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6CCu;
label_24a6cc:
    // 0x24a6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A6CCu;
    {
        const bool branch_taken_0x24a6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6CCu;
        // 0x24a6d0: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6cc) {
            ctx->pc = 0x24A6E4u;
            goto label_24a6e4;
        }
    }
    ctx->pc = 0x24A6D4u;
label_24a6d4:
    // 0x24a6d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a6d8: 0xc090f82  jal         func_243E08
    ctx->pc = 0x24A6D8u;
    SET_GPR_U32(ctx, 31, 0x24A6E0u);
    ctx->pc = 0x24A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6D8u;
    // 0x24a6dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E08u, 0x24A6D8u, 0x24A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x24a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_24a6e4:
    // 0x24a6e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24a6e8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x24a6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x24a6ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24a6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a6f0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x24a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x24a6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a6f8:
    // 0x24a6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24A6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6FCu;
        // 0x24a700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A704u;
    // 0x24a704: 0x0  nop
    ctx->pc = 0x24a704u;
    // NOP
    if (ctx->pc == 0x24a704u) { ctx->pc = 0x24a708u; }
}
