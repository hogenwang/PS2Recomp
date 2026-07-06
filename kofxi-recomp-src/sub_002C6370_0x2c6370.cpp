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

// Function: sub_002C6370
// Address: 0x2c6370 - 0x2c63b0
void sub_002C6370_0x2c6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6370_0x2c6370");
#endif

    switch (ctx->pc) {
        case 0x2c6370u: goto label_2c6370;
        case 0x2c6374u: goto label_2c6374;
        case 0x2c6378u: goto label_2c6378;
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6380u: goto label_2c6380;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c6388u: goto label_2c6388;
        case 0x2c638cu: goto label_2c638c;
        case 0x2c6390u: goto label_2c6390;
        case 0x2c6394u: goto label_2c6394;
        case 0x2c6398u: goto label_2c6398;
        case 0x2c639cu: goto label_2c639c;
        case 0x2c63a0u: goto label_2c63a0;
        case 0x2c63a4u: goto label_2c63a4;
        case 0x2c63a8u: goto label_2c63a8;
        case 0x2c63acu: goto label_2c63ac;
        default: break;
    }

    ctx->pc = 0x2c6370u;

label_2c6370:
    // 0x2c6370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c6374:
    // 0x2c6374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6378:
    // 0x2c6378: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c6378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c637c:
    // 0x2c637c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c6380:
    // 0x2c6380: 0x40f809  jalr        $v0
label_2c6384:
    if (ctx->pc == 0x2C6384u) {
        ctx->pc = 0x2C6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6380u;
        // 0x2c6384: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6388u;
        goto label_2c6388;
    }
    ctx->pc = 0x2C6380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6388u);
        ctx->pc = 0x2C6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6380u;
        // 0x2c6384: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6380u, 0x2C6388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6388u;
label_2c6388:
    // 0x2c6388: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c638c:
    // 0x2c638c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c6390:
    if (ctx->pc == 0x2C6390u) {
        ctx->pc = 0x2C6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C638Cu;
        // 0x2c6390: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6394u;
        goto label_2c6394;
    }
    ctx->pc = 0x2C638Cu;
    {
        const bool branch_taken_0x2c638c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C638Cu;
        // 0x2c6390: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c638c) {
            ctx->pc = 0x2C63A0u;
            goto label_2c63a0;
        }
    }
    ctx->pc = 0x2C6394u;
label_2c6394:
    // 0x2c6394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6398:
    // 0x2c6398: 0x80b21d8  j           func_2C8760
label_2c639c:
    if (ctx->pc == 0x2C639Cu) {
        ctx->pc = 0x2C639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6398u;
        // 0x2c639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63A0u;
        goto label_2c63a0;
    }
    ctx->pc = 0x2C6398u;
    ctx->pc = 0x2C639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6398u;
    // 0x2c639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C63A0u;
label_2c63a0:
    // 0x2c63a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c63a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c63a4:
    // 0x2c63a4: 0x3e00008  jr          $ra
label_2c63a8:
    if (ctx->pc == 0x2C63A8u) {
        ctx->pc = 0x2C63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A4u;
        // 0x2c63a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63ACu;
        goto label_2c63ac;
    }
    ctx->pc = 0x2C63A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A4u;
        // 0x2c63a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C63A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C63ACu;
label_2c63ac:
    // 0x2c63ac: 0x0  nop
    ctx->pc = 0x2c63acu;
    // NOP
    if (ctx->pc == 0x2c63acu) { ctx->pc = 0x2c63b0u; }
}
