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

// Function: sub_0019C060
// Address: 0x19c060 - 0x19c100
void sub_0019C060_0x19c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C060_0x19c060");
#endif

    switch (ctx->pc) {
        case 0x19c094u: goto label_19c094;
        case 0x19c0c4u: goto label_19c0c4;
        default: break;
    }

    ctx->pc = 0x19c060u;

    // 0x19c060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c068: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c06c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c070: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19c070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19c078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c07c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c080: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19c080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c084: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19c084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c08c: 0xc066020  jal         func_198080
    ctx->pc = 0x19C08Cu;
    SET_GPR_U32(ctx, 31, 0x19C094u);
    ctx->pc = 0x19C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C08Cu;
    // 0x19c090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x19C08Cu, 0x19C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C094u;
label_19c094:
    // 0x19c094: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19c094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19c098: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19c098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19c09c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c0a0: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19C0A0u;
    {
        const bool branch_taken_0x19c0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c0a0) {
            ctx->pc = 0x19C0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C0A0u;
            // 0x19c0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C0D8u;
            goto label_19c0d8;
        }
    }
    ctx->pc = 0x19C0A8u;
    // 0x19c0a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c0ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0b0: 0x8c44d4e0  lw          $a0, -0x2B20($v0)
    ctx->pc = 0x19c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956256)));
    // 0x19c0b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19c0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19c0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0bc: 0xc06704c  jal         func_19C130
    ctx->pc = 0x19C0BCu;
    SET_GPR_U32(ctx, 31, 0x19C0C4u);
    ctx->pc = 0x19C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0BCu;
    // 0x19c0c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C130u, 0x19C0BCu, 0x19C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0C4u;
label_19c0c4:
    // 0x19c0c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C0C4u;
    {
        const bool branch_taken_0x19c0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0c4) {
            ctx->pc = 0x19C0D4u;
            goto label_19c0d4;
        }
    }
    ctx->pc = 0x19C0CCu;
    // 0x19c0cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C0CCu;
    {
        const bool branch_taken_0x19c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0CCu;
        // 0x19c0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0cc) {
            ctx->pc = 0x19C0D8u;
            goto label_19c0d8;
        }
    }
    ctx->pc = 0x19C0D4u;
label_19c0d4:
    // 0x19c0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c0d8:
    // 0x19c0d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c0e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0ECu;
        // 0x19c0f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0F4u;
    // 0x19c0f4: 0x0  nop
    ctx->pc = 0x19c0f4u;
    // NOP
    // 0x19c0f8: 0x0  nop
    ctx->pc = 0x19c0f8u;
    // NOP
    // 0x19c0fc: 0x0  nop
    ctx->pc = 0x19c0fcu;
    // NOP
    if (ctx->pc == 0x19c0fcu) { ctx->pc = 0x19c100u; }
}
