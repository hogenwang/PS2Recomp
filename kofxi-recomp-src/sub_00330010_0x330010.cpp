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

// Function: sub_00330010
// Address: 0x330010 - 0x3300b0
void sub_00330010_0x330010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330010_0x330010");
#endif

    switch (ctx->pc) {
        case 0x330058u: goto label_330058;
        default: break;
    }

    ctx->pc = 0x330010u;

    // 0x330010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x330014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x330014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x330018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x330018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33001c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x330020: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x330020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x330028: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x330028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33002c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x330030: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x330030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330038: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x330038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33003c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x330040: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x330040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330044: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x330044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x330048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33004c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x330050: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x330050u;
    SET_GPR_U32(ctx, 31, 0x330058u);
    ctx->pc = 0x330054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330050u;
    // 0x330054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x330050u, 0x330058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330058u;
label_330058:
    // 0x330058: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x330058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33005c: 0x142e3c  dsll32      $a1, $s4, 24
    ctx->pc = 0x33005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 24));
    // 0x330060: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x330060u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x330064: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x330064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x330068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33006c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x33006cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x330070: 0xa0d30000  sb          $s3, 0x0($a2)
    ctx->pc = 0x330070u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x330074: 0xa4d20002  sh          $s2, 0x2($a2)
    ctx->pc = 0x330074u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x330078: 0xa4d10004  sh          $s1, 0x4($a2)
    ctx->pc = 0x330078u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x33007c: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x33007cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x330080: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x330080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x330084: 0xacd00018  sw          $s0, 0x18($a2)
    ctx->pc = 0x330084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 16));
    // 0x330088: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x330088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x33008c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x330090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x330090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x330094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33009c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33009cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3300a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3300a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3300a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3300A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3300A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300A4u;
        // 0x3300a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3300ACu;
    // 0x3300ac: 0x0  nop
    ctx->pc = 0x3300acu;
    // NOP
}
