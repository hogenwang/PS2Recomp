#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FDFA0
// Address: 0x2fdfa0 - 0x2fdff0
void sub_002FDFA0_0x2fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDFA0_0x2fdfa0");
#endif

    switch (ctx->pc) {
        case 0x2fdfc0u: goto label_2fdfc0;
        case 0x2fdfe0u: goto label_2fdfe0;
        default: break;
    }

    ctx->pc = 0x2fdfa0u;

    // 0x2fdfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdfa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fdfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fdfb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfb8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x2FDFB8u;
    SET_GPR_U32(ctx, 31, 0x2FDFC0u);
    ctx->pc = 0x2FDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFB8u;
            // 0x2fdfbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFC0u; }
        if (ctx->pc != 0x2FDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFC0u; }
        if (ctx->pc != 0x2FDFC0u) { return; }
    }
    ctx->pc = 0x2FDFC0u;
label_2fdfc0:
    // 0x2fdfc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdfc4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fdfc8: 0xac50be80  sw          $s0, -0x4180($v0)
    ctx->pc = 0x2fdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
    // 0x2fdfcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdfd0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdfd4: 0x2484da90  addiu       $a0, $a0, -0x2570
    ctx->pc = 0x2fdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
    // 0x2fdfd8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDFD8u;
    SET_GPR_U32(ctx, 31, 0x2FDFE0u);
    ctx->pc = 0x2FDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFD8u;
            // 0x2fdfdc: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFE0u; }
        if (ctx->pc != 0x2FDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFE0u; }
        if (ctx->pc != 0x2FDFE0u) { return; }
    }
    ctx->pc = 0x2FDFE0u;
label_2fdfe0:
    // 0x2fdfe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFE8u;
            // 0x2fdfec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDFF0u;
    ctx->pc = 0x2fdff0u;
}
