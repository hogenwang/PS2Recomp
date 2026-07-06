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

// Function: sub_002C65D8
// Address: 0x2c65d8 - 0x2c6618
void sub_002C65D8_0x2c65d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C65D8_0x2c65d8");
#endif

    switch (ctx->pc) {
        case 0x2c65d8u: goto label_2c65d8;
        case 0x2c65dcu: goto label_2c65dc;
        case 0x2c65e0u: goto label_2c65e0;
        case 0x2c65e4u: goto label_2c65e4;
        case 0x2c65e8u: goto label_2c65e8;
        case 0x2c65ecu: goto label_2c65ec;
        case 0x2c65f0u: goto label_2c65f0;
        case 0x2c65f4u: goto label_2c65f4;
        case 0x2c65f8u: goto label_2c65f8;
        case 0x2c65fcu: goto label_2c65fc;
        case 0x2c6600u: goto label_2c6600;
        case 0x2c6604u: goto label_2c6604;
        case 0x2c6608u: goto label_2c6608;
        case 0x2c660cu: goto label_2c660c;
        case 0x2c6610u: goto label_2c6610;
        case 0x2c6614u: goto label_2c6614;
        default: break;
    }

    ctx->pc = 0x2c65d8u;

label_2c65d8:
    // 0x2c65d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c65d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c65dc:
    // 0x2c65dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c65dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c65e0:
    // 0x2c65e0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2c65e4:
    // 0x2c65e4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c65e8:
    // 0x2c65e8: 0x40f809  jalr        $v0
label_2c65ec:
    if (ctx->pc == 0x2C65ECu) {
        ctx->pc = 0x2C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65E8u;
        // 0x2c65ec: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65F0u;
        goto label_2c65f0;
    }
    ctx->pc = 0x2C65E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C65F0u);
        ctx->pc = 0x2C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65E8u;
        // 0x2c65ec: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C65E8u, 0x2C65F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C65F0u;
label_2c65f0:
    // 0x2c65f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c65f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c65f4:
    // 0x2c65f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c65f8:
    if (ctx->pc == 0x2C65F8u) {
        ctx->pc = 0x2C65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F4u;
        // 0x2c65f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65FCu;
        goto label_2c65fc;
    }
    ctx->pc = 0x2C65F4u;
    {
        const bool branch_taken_0x2c65f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F4u;
        // 0x2c65f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65f4) {
            ctx->pc = 0x2C6608u;
            goto label_2c6608;
        }
    }
    ctx->pc = 0x2C65FCu;
label_2c65fc:
    // 0x2c65fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c65fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6600:
    // 0x2c6600: 0x80b21d8  j           func_2C8760
label_2c6604:
    if (ctx->pc == 0x2C6604u) {
        ctx->pc = 0x2C6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6600u;
        // 0x2c6604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6608u;
        goto label_2c6608;
    }
    ctx->pc = 0x2C6600u;
    ctx->pc = 0x2C6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6600u;
    // 0x2c6604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6608u;
label_2c6608:
    // 0x2c6608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c660c:
    // 0x2c660c: 0x3e00008  jr          $ra
label_2c6610:
    if (ctx->pc == 0x2C6610u) {
        ctx->pc = 0x2C6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C660Cu;
        // 0x2c6610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6614u;
        goto label_2c6614;
    }
    ctx->pc = 0x2C660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C660Cu;
        // 0x2c6610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6614u;
label_2c6614:
    // 0x2c6614: 0x0  nop
    ctx->pc = 0x2c6614u;
    // NOP
}
