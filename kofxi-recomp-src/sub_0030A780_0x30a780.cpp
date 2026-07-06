#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A780
// Address: 0x30a780 - 0x30a7e0
void sub_0030A780_0x30a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A780_0x30a780");
#endif

    switch (ctx->pc) {
        case 0x30a78cu: goto label_30a78c;
        default: break;
    }

    ctx->pc = 0x30a780u;

    // 0x30a780: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30a780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30a784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a788: 0x24a53dc0  addiu       $a1, $a1, 0x3DC0
    ctx->pc = 0x30a788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
label_30a78c:
    // 0x30a78c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x30a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x30a790: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x30a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30a794: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30a794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x30a798: 0x288301ce  slti        $v1, $a0, 0x1CE
    ctx->pc = 0x30a798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)462) ? 1 : 0);
    // 0x30a79c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x30a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x30a7a0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x30a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x30a7a4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x30a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x30a7a8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30a7ac: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x30a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x30a7b0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x30a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x30a7b4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x30A7B4u;
    {
        const bool branch_taken_0x30a7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7B4u;
            // 0x30a7b8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7b4) {
            ctx->pc = 0x30A78Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a78c;
        }
    }
    ctx->pc = 0x30A7BCu;
    // 0x30a7bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x30a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x30a7c0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a7c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x30a7c8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x30a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x30a7cc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x30a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x30a7d0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x30a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x30a7d4: 0xac603ba8  sw          $zero, 0x3BA8($v1)
    ctx->pc = 0x30a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15272), GPR_U32(ctx, 0));
    // 0x30a7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7D8u;
            // 0x30a7dc: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A7E0u;
    ctx->pc = 0x30a7e0u;
}
