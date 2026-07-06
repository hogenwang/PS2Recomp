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

// Function: sub_0017C2B0
// Address: 0x17c2b0 - 0x17c330
void sub_0017C2B0_0x17c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C2B0_0x17c2b0");
#endif

    switch (ctx->pc) {
        case 0x17c2ccu: goto label_17c2cc;
        case 0x17c2f4u: goto label_17c2f4;
        default: break;
    }

    ctx->pc = 0x17c2b0u;

    // 0x17c2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c2b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c2c0: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17c2c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17c2c4: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17C2C4u;
    {
        const bool branch_taken_0x17c2c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2C4u;
        // 0x17c2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2c4) {
            ctx->pc = 0x17C318u;
            goto label_17c318;
        }
    }
    ctx->pc = 0x17C2CCu;
label_17c2cc:
    // 0x17c2cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c2d0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x17c2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c2d4: 0x2463da58  addiu       $v1, $v1, -0x25A8
    ctx->pc = 0x17c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957656));
    // 0x17c2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c2dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17c2dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c2e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17c2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17c2e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C2E4u;
    {
        const bool branch_taken_0x17c2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c2e4) {
            ctx->pc = 0x17C2F8u;
            goto label_17c2f8;
        }
    }
    ctx->pc = 0x17C2ECu;
    // 0x17c2ec: 0xc05f130  jal         func_17C4C0
    ctx->pc = 0x17C2ECu;
    SET_GPR_U32(ctx, 31, 0x17C2F4u);
    ctx->pc = 0x17C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C2ECu;
    // 0x17c2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C4C0u, 0x17C2ECu, 0x17C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2F4u;
label_17c2f4:
    // 0x17c2f4: 0x0  nop
    ctx->pc = 0x17c2f4u;
    // NOP
label_17c2f8:
    // 0x17c2f8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c2fc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x17c2fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17c300: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17c304: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17c304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x17c308: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17c308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c30c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17C30Cu;
    {
        const bool branch_taken_0x17c30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c30c) {
            ctx->pc = 0x17C2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c2cc;
        }
    }
    ctx->pc = 0x17C314u;
    // 0x17c314: 0x0  nop
    ctx->pc = 0x17c314u;
    // NOP
label_17c318:
    // 0x17c318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c320: 0x3e00008  jr          $ra
    ctx->pc = 0x17C320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C320u;
        // 0x17c324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C328u;
    // 0x17c328: 0x0  nop
    ctx->pc = 0x17c328u;
    // NOP
    // 0x17c32c: 0x0  nop
    ctx->pc = 0x17c32cu;
    // NOP
}
