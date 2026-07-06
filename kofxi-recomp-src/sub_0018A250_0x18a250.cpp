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

// Function: sub_0018A250
// Address: 0x18a250 - 0x18a2f0
void sub_0018A250_0x18a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A250_0x18a250");
#endif

    switch (ctx->pc) {
        case 0x18a294u: goto label_18a294;
        default: break;
    }

    ctx->pc = 0x18a250u;

    // 0x18a250: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a254: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a258: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a25c: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x18a260: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a268: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a26c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a270: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a278: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18a278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a27c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18A27Cu;
    {
        const bool branch_taken_0x18a27c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A27Cu;
        // 0x18a280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a27c) {
            ctx->pc = 0x18A2E0u;
            goto label_18a2e0;
        }
    }
    ctx->pc = 0x18A284u;
    // 0x18a284: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a288: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x18a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x18a28c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a290: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x18a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_18a294:
    // 0x18a294: 0x84a30154  lh          $v1, 0x154($a1)
    ctx->pc = 0x18a294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x18a298: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x18a298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18a29c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A29Cu;
    {
        const bool branch_taken_0x18a29c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a29c) {
            ctx->pc = 0x18A2B8u;
            goto label_18a2b8;
        }
    }
    ctx->pc = 0x18A2A4u;
    // 0x18a2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a2a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18a2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18A2ACu;
    {
        const bool branch_taken_0x18a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2ACu;
        // 0x18a2b0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2ac) {
            ctx->pc = 0x18A2C8u;
            goto label_18a2c8;
        }
    }
    ctx->pc = 0x18A2B4u;
    // 0x18a2b4: 0x0  nop
    ctx->pc = 0x18a2b4u;
    // NOP
label_18a2b8:
    // 0x18a2b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a2bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18a2c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18a2c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18a2c4: 0x0  nop
    ctx->pc = 0x18a2c4u;
    // NOP
label_18a2c8:
    // 0x18a2c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18a2c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a2cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a2d0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18a2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a2d4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18A2D4u;
    {
        const bool branch_taken_0x18a2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2D4u;
        // 0x18a2d8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d4) {
            ctx->pc = 0x18A294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a294;
        }
    }
    ctx->pc = 0x18A2DCu;
    // 0x18a2dc: 0x0  nop
    ctx->pc = 0x18a2dcu;
    // NOP
label_18a2e0:
    // 0x18a2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2E8u;
    // 0x18a2e8: 0x0  nop
    ctx->pc = 0x18a2e8u;
    // NOP
    // 0x18a2ec: 0x0  nop
    ctx->pc = 0x18a2ecu;
    // NOP
}
