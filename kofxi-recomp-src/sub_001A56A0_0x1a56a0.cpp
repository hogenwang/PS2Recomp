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

// Function: sub_001A56A0
// Address: 0x1a56a0 - 0x1a5710
void sub_001A56A0_0x1a56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A56A0_0x1a56a0");
#endif

    switch (ctx->pc) {
        case 0x1a56c8u: goto label_1a56c8;
        default: break;
    }

    ctx->pc = 0x1a56a0u;

    // 0x1a56a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a56a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a56a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a56ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a56b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a56b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a56b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a56bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a56bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56c0: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A56C0u;
    SET_GPR_U32(ctx, 31, 0x1A56C8u);
    ctx->pc = 0x1A56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56C0u;
    // 0x1a56c4: 0x509023  subu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A56C0u, 0x1A56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56C8u;
label_1a56c8:
    // 0x1a56c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a56cc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a56d0: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x1a56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x1a56d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a56d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a56dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a56dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a56e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a56e4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a56e8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a56e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a56ec: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1a56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1a56f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a56f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a56f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a56f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a56f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a56fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a56fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5704: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5704u;
        // 0x1a5708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A570Cu;
    // 0x1a570c: 0x0  nop
    ctx->pc = 0x1a570cu;
    // NOP
    if (ctx->pc == 0x1a570cu) { ctx->pc = 0x1a5710u; }
}
