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

// Function: sub_0014ACB0
// Address: 0x14acb0 - 0x14ad20
void sub_0014ACB0_0x14acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ACB0_0x14acb0");
#endif

    switch (ctx->pc) {
        case 0x14acccu: goto label_14accc;
        case 0x14acdcu: goto label_14acdc;
        case 0x14ad04u: goto label_14ad04;
        default: break;
    }

    ctx->pc = 0x14acb0u;

    // 0x14acb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14acb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14acb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14acbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14acbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acc0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x14acc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14acc4: 0xc06c0d2  jal         func_1B0348
    ctx->pc = 0x14ACC4u;
    SET_GPR_U32(ctx, 31, 0x14ACCCu);
    ctx->pc = 0x14ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACC4u;
    // 0x14acc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0348u, 0x14ACC4u, 0x14ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ACCCu;
label_14accc:
    // 0x14accc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14acd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acd4: 0xc06c412  jal         func_1B1048
    ctx->pc = 0x14ACD4u;
    SET_GPR_U32(ctx, 31, 0x14ACDCu);
    ctx->pc = 0x14ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACD4u;
    // 0x14acd8: 0xac625d08  sw          $v0, 0x5D08($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 23816), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1048u, 0x14ACD4u, 0x14ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ACDCu;
label_14acdc:
    // 0x14acdc: 0x22afc  dsll32      $a1, $v0, 11
    ctx->pc = 0x14acdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 11));
    // 0x14ace0: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x14ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x14ace4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ACE4u;
    {
        const bool branch_taken_0x14ace4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACE4u;
        // 0x14ace8: 0x52aff  dsra32      $a1, $a1, 11 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ace4) {
            ctx->pc = 0x14ACF4u;
            goto label_14acf4;
        }
    }
    ctx->pc = 0x14ACECu;
    // 0x14acec: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x14acf0: 0x22ac3  sra         $a1, $v0, 11
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_14acf4:
    // 0x14acf4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14acf8: 0x8c445d08  lw          $a0, 0x5D08($v0)
    ctx->pc = 0x14acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14acfc: 0xc06c298  jal         func_1B0A60
    ctx->pc = 0x14ACFCu;
    SET_GPR_U32(ctx, 31, 0x14AD04u);
    ctx->pc = 0x14AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACFCu;
    // 0x14ad00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0A60u, 0x14ACFCu, 0x14AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD04u;
label_14ad04:
    // 0x14ad04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ad08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD14u;
    // 0x14ad14: 0x0  nop
    ctx->pc = 0x14ad14u;
    // NOP
    // 0x14ad18: 0x0  nop
    ctx->pc = 0x14ad18u;
    // NOP
    // 0x14ad1c: 0x0  nop
    ctx->pc = 0x14ad1cu;
    // NOP
}
