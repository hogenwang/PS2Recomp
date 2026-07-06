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

// Function: sub_001F8AB8
// Address: 0x1f8ab8 - 0x1f8af8
void sub_001F8AB8_0x1f8ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8AB8_0x1f8ab8");
#endif

    switch (ctx->pc) {
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8abcu: goto label_1f8abc;
        case 0x1f8ac0u: goto label_1f8ac0;
        case 0x1f8ac4u: goto label_1f8ac4;
        case 0x1f8ac8u: goto label_1f8ac8;
        case 0x1f8accu: goto label_1f8acc;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8ad4u: goto label_1f8ad4;
        case 0x1f8ad8u: goto label_1f8ad8;
        case 0x1f8adcu: goto label_1f8adc;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8ae4u: goto label_1f8ae4;
        case 0x1f8ae8u: goto label_1f8ae8;
        case 0x1f8aecu: goto label_1f8aec;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8af4u: goto label_1f8af4;
        default: break;
    }

    ctx->pc = 0x1f8ab8u;

label_1f8ab8:
    // 0x1f8ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8abc:
    // 0x1f8abc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f8abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ac0:
    // 0x1f8ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8ac4:
    // 0x1f8ac4: 0x24860950  addiu       $a2, $a0, 0x950
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_1f8ac8:
    // 0x1f8ac8: 0x8c820950  lw          $v0, 0x950($a0)
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2384)));
label_1f8acc:
    // 0x1f8acc: 0x8c870d5c  lw          $a3, 0xD5C($a0)
    ctx->pc = 0x1f8accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3420)));
label_1f8ad0:
    // 0x1f8ad0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f8ad4:
    // 0x1f8ad4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f8ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ad8:
    // 0x1f8ad8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1f8adc:
    if (ctx->pc == 0x1F8ADCu) {
        ctx->pc = 0x1F8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD8u;
        // 0x1f8adc: 0xac820950  sw          $v0, 0x950($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AE0u;
        goto label_1f8ae0;
    }
    ctx->pc = 0x1F8AD8u;
    {
        const bool branch_taken_0x1f8ad8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD8u;
        // 0x1f8adc: 0xac820950  sw          $v0, 0x950($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ad8) {
            ctx->pc = 0x1F8AE8u;
            goto label_1f8ae8;
        }
    }
    ctx->pc = 0x1F8AE0u;
label_1f8ae0:
    // 0x1f8ae0: 0xe0f809  jalr        $a3
label_1f8ae4:
    if (ctx->pc == 0x1F8AE4u) {
        ctx->pc = 0x1F8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AE0u;
        // 0x1f8ae4: 0x8c840d60  lw          $a0, 0xD60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AE8u;
        goto label_1f8ae8;
    }
    ctx->pc = 0x1F8AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1F8AE8u);
        ctx->pc = 0x1F8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AE0u;
        // 0x1f8ae4: 0x8c840d60  lw          $a0, 0xD60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AE0u, 0x1F8AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8AE8u;
label_1f8ae8:
    // 0x1f8ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8aec:
    // 0x1f8aec: 0x3e00008  jr          $ra
label_1f8af0:
    if (ctx->pc == 0x1F8AF0u) {
        ctx->pc = 0x1F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AECu;
        // 0x1f8af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AF4u;
        goto label_1f8af4;
    }
    ctx->pc = 0x1F8AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AECu;
        // 0x1f8af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8AF4u;
label_1f8af4:
    // 0x1f8af4: 0x0  nop
    ctx->pc = 0x1f8af4u;
    // NOP
}
