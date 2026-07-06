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

// Function: sub_00323AD0
// Address: 0x323ad0 - 0x323b40
void sub_00323AD0_0x323ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AD0_0x323ad0");
#endif

    switch (ctx->pc) {
        case 0x323af8u: goto label_323af8;
        default: break;
    }

    ctx->pc = 0x323ad0u;

    // 0x323ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x323ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x323ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x323ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323ae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x323ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323ae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323aec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x323aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323af0: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x323AF0u;
    SET_GPR_U32(ctx, 31, 0x323AF8u);
    ctx->pc = 0x323AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AF0u;
    // 0x323af4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321FE0u, 0x323AF0u, 0x323AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AF8u;
label_323af8:
    // 0x323af8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x323af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323afc: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x323afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x323b00: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x323b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x323b04: 0xa6110010  sh          $s1, 0x10($s0)
    ctx->pc = 0x323b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x323b08: 0xa6120012  sh          $s2, 0x12($s0)
    ctx->pc = 0x323b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x323b0c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x323b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x323b10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x323b14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x323b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x323b18: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x323b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x323b1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x323b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x323B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B2Cu;
        // 0x323b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B34u;
    // 0x323b34: 0x0  nop
    ctx->pc = 0x323b34u;
    // NOP
    // 0x323b38: 0x0  nop
    ctx->pc = 0x323b38u;
    // NOP
    // 0x323b3c: 0x0  nop
    ctx->pc = 0x323b3cu;
    // NOP
    if (ctx->pc == 0x323b3cu) { ctx->pc = 0x323b40u; }
}
