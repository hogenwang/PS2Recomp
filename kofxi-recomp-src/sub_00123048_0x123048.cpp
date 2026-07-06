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

// Function: sub_00123048
// Address: 0x123048 - 0x1230a0
void sub_00123048_0x123048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123048_0x123048");
#endif

    switch (ctx->pc) {
        case 0x123060u: goto label_123060;
        case 0x123090u: goto label_123090;
        default: break;
    }

    ctx->pc = 0x123048u;

    // 0x123048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12304c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x12304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x123050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x123050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123058: 0xc048998  jal         func_122660
    ctx->pc = 0x123058u;
    SET_GPR_U32(ctx, 31, 0x123060u);
    ctx->pc = 0x12305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123058u;
    // 0x12305c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x123058u, 0x123060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123060u;
label_123060:
    // 0x123060: 0xdfae0010  ld          $t6, 0x10($sp)
    ctx->pc = 0x123060u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123064: 0x3c0f3fff  lui         $t7, 0x3FFF
    ctx->pc = 0x123064u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16383 << 16));
    // 0x123068: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12306c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123070: 0xe38b8  dsll        $a3, $t6, 2
    ctx->pc = 0x123070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 2);
    // 0x123074: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123078: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x123078u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x12307c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123080: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x123080u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x123084: 0x34ed0001  ori         $t5, $a3, 0x1
    ctx->pc = 0x123084u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x123088: 0xc048924  jal         func_122490
    ctx->pc = 0x123088u;
    SET_GPR_U32(ctx, 31, 0x123090u);
    ctx->pc = 0x12308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123088u;
    // 0x12308c: 0x1ae380b  movn        $a3, $t5, $t6 (Delay Slot)
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122490u, 0x123088u, 0x123090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123090u;
label_123090:
    // 0x123090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123094: 0x3e00008  jr          $ra
    ctx->pc = 0x123094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123094u;
        // 0x123098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12309Cu;
    // 0x12309c: 0x0  nop
    ctx->pc = 0x12309cu;
    // NOP
    if (ctx->pc == 0x12309cu) { ctx->pc = 0x1230a0u; }
}
