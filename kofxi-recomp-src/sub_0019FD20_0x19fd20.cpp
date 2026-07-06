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

// Function: sub_0019FD20
// Address: 0x19fd20 - 0x19fdd0
void sub_0019FD20_0x19fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FD20_0x19fd20");
#endif

    ctx->pc = 0x19fd20u;

    // 0x19fd20: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x19fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x19fd24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fd24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fd28: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD28u;
    {
        const bool branch_taken_0x19fd28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19fd28) {
            ctx->pc = 0x19FD38u;
            goto label_19fd38;
        }
    }
    ctx->pc = 0x19FD30u;
    // 0x19fd30: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19FD30u;
    {
        const bool branch_taken_0x19fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd30) {
            ctx->pc = 0x19FDBCu;
            goto label_19fdbc;
        }
    }
    ctx->pc = 0x19FD38u;
label_19fd38:
    // 0x19fd38: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19fd3c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19fd40: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x19fd40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19fd44: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD44u;
    {
        const bool branch_taken_0x19fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fd44) {
            ctx->pc = 0x19FD54u;
            goto label_19fd54;
        }
    }
    ctx->pc = 0x19FD4Cu;
    // 0x19fd4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19FD4Cu;
    {
        const bool branch_taken_0x19fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD4Cu;
        // 0x19fd50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd4c) {
            ctx->pc = 0x19FDBCu;
            goto label_19fdbc;
        }
    }
    ctx->pc = 0x19FD54u;
label_19fd54:
    // 0x19fd54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19fd58: 0x30a3000c  andi        $v1, $a1, 0xC
    ctx->pc = 0x19fd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x19fd5c: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x19fd5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x19fd60: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19fd64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD64u;
    {
        const bool branch_taken_0x19fd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fd64) {
            ctx->pc = 0x19FD74u;
            goto label_19fd74;
        }
    }
    ctx->pc = 0x19FD6Cu;
    // 0x19fd6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19FD6Cu;
    {
        const bool branch_taken_0x19fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD6Cu;
        // 0x19fd70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd6c) {
            ctx->pc = 0x19FDBCu;
            goto label_19fdbc;
        }
    }
    ctx->pc = 0x19FD74u;
label_19fd74:
    // 0x19fd74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19fd78: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19fd7c: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x19fd7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19fd80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19fd84: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD84u;
    {
        const bool branch_taken_0x19fd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fd84) {
            ctx->pc = 0x19FD94u;
            goto label_19fd94;
        }
    }
    ctx->pc = 0x19FD8Cu;
    // 0x19fd8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19FD8Cu;
    {
        const bool branch_taken_0x19fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD8Cu;
        // 0x19fd90: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd8c) {
            ctx->pc = 0x19FDBCu;
            goto label_19fdbc;
        }
    }
    ctx->pc = 0x19FD94u;
label_19fd94:
    // 0x19fd94: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x19fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x19fd98: 0x8c42beec  lw          $v0, -0x4114($v0)
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950636)));
    // 0x19fd9c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FD9Cu;
    {
        const bool branch_taken_0x19fd9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19fd9c) {
            ctx->pc = 0x19FDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FD9Cu;
            // 0x19fda0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FDBCu;
            goto label_19fdbc;
        }
    }
    ctx->pc = 0x19FDA4u;
    // 0x19fda4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fda8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fda8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fdac: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x19fdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19fdb0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19fdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fdb4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19fdb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19fdb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19fdb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fdbc:
    // 0x19fdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x19FDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FDC4u;
    // 0x19fdc4: 0x0  nop
    ctx->pc = 0x19fdc4u;
    // NOP
    // 0x19fdc8: 0x0  nop
    ctx->pc = 0x19fdc8u;
    // NOP
    // 0x19fdcc: 0x0  nop
    ctx->pc = 0x19fdccu;
    // NOP
    if (ctx->pc == 0x19fdccu) { ctx->pc = 0x19fdd0u; }
}
