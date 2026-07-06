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

// Function: sub_00161ED0
// Address: 0x161ed0 - 0x161f40
void sub_00161ED0_0x161ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161ED0_0x161ed0");
#endif

    switch (ctx->pc) {
        case 0x161f00u: goto label_161f00;
        default: break;
    }

    ctx->pc = 0x161ed0u;

    // 0x161ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161ed4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x161ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161edc: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x161ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161ee4: 0x24842070  addiu       $a0, $a0, 0x2070
    ctx->pc = 0x161ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8304));
    // 0x161ee8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161eec: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x161eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x161ef0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x161ef4: 0x24070390  addiu       $a3, $zero, 0x390
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x161ef8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x161EF8u;
    SET_GPR_U32(ctx, 31, 0x161F00u);
    ctx->pc = 0x161EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161EF8u;
    // 0x161efc: 0x24a5d410  addiu       $a1, $a1, -0x2BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x161EF8u, 0x161F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F00u;
label_161f00:
    // 0x161f00: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x161f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x161f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f08: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x161f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x161f0c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x161f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f10: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x161f10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f14: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x161f14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f18: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x161f18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f1c: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x161f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f20: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x161f20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x161f24: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x161f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x161f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f30: 0x3e00008  jr          $ra
    ctx->pc = 0x161F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F30u;
        // 0x161f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161F38u;
    // 0x161f38: 0x0  nop
    ctx->pc = 0x161f38u;
    // NOP
    // 0x161f3c: 0x0  nop
    ctx->pc = 0x161f3cu;
    // NOP
    if (ctx->pc == 0x161f3cu) { ctx->pc = 0x161f40u; }
}
