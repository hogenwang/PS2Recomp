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

// Function: sub_00302020
// Address: 0x302020 - 0x3020a0
void sub_00302020_0x302020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302020_0x302020");
#endif

    switch (ctx->pc) {
        case 0x302030u: goto label_302030;
        default: break;
    }

    ctx->pc = 0x302020u;

    // 0x302020: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x302020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x302024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302028: 0x24a50d00  addiu       $a1, $a1, 0xD00
    ctx->pc = 0x302028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
    // 0x30202c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x30202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_302030:
    // 0x302030: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x302030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x302034: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x302034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x302038: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x302038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x30203c: 0x2cc300b9  sltiu       $v1, $a2, 0xB9
    ctx->pc = 0x30203cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)185) ? 1 : 0);
    // 0x302040: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x302040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x302044: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x302044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x302048: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x302048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x30204c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x30204cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x302050: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x302050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x302054: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x302054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x302058: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x302058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x30205c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x30205cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x302060: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x302060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x302064: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x302064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x302068: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x302068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x30206c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x30206cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x302070: 0xa0a0003d  sb          $zero, 0x3D($a1)
    ctx->pc = 0x302070u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x302074: 0xa0a0003c  sb          $zero, 0x3C($a1)
    ctx->pc = 0x302074u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x302078: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x302078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x30207c: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x30207cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x302080: 0xa0a4003e  sb          $a0, 0x3E($a1)
    ctx->pc = 0x302080u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 62), (uint8_t)GPR_U32(ctx, 4));
    // 0x302084: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x302084u;
    {
        const bool branch_taken_0x302084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302084u;
        // 0x302088: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302084) {
            ctx->pc = 0x302030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_302030;
        }
    }
    ctx->pc = 0x30208Cu;
    // 0x30208c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x30208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x302090: 0x3e00008  jr          $ra
    ctx->pc = 0x302090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302090u;
        // 0x302094: 0xac600c68  sw          $zero, 0xC68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302098u;
    // 0x302098: 0x0  nop
    ctx->pc = 0x302098u;
    // NOP
    // 0x30209c: 0x0  nop
    ctx->pc = 0x30209cu;
    // NOP
    if (ctx->pc == 0x30209cu) { ctx->pc = 0x3020a0u; }
}
