#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001738A0
// Address: 0x1738a0 - 0x173920
void sub_001738A0_0x1738a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001738A0_0x1738a0");
#endif

    switch (ctx->pc) {
        case 0x1738ccu: goto label_1738cc;
        default: break;
    }

    ctx->pc = 0x1738a0u;

    // 0x1738a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1738a4: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x1738a8: 0xac609e00  sw          $zero, -0x6200($v1)
    ctx->pc = 0x1738a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942208), GPR_U32(ctx, 0));
    // 0x1738ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1738acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1738b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1738b4: 0x24846bc0  addiu       $a0, $a0, 0x6BC0
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
    // 0x1738b8: 0xac609df8  sw          $zero, -0x6208($v1)
    ctx->pc = 0x1738b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942200), GPR_U32(ctx, 0));
    // 0x1738bc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1738bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1738c0: 0xac606dc8  sw          $zero, 0x6DC8($v1)
    ctx->pc = 0x1738c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28104), GPR_U32(ctx, 0));
    // 0x1738c4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1738c8: 0xac606dc0  sw          $zero, 0x6DC0($v1)
    ctx->pc = 0x1738c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28096), GPR_U32(ctx, 0));
label_1738cc:
    // 0x1738cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1738ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1738d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1738d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1738d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1738d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1738d8: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x1738d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1738dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1738dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1738e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1738e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1738e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1738e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1738e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1738e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1738ec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1738ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1738f0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1738f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1738f4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1738F4u;
    {
        const bool branch_taken_0x1738f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738F4u;
            // 0x1738f8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738f4) {
            ctx->pc = 0x1738CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1738cc;
        }
    }
    ctx->pc = 0x1738FCu;
    // 0x1738fc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x173900: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x173904: 0xac806bb8  sw          $zero, 0x6BB8($a0)
    ctx->pc = 0x173904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27576), GPR_U32(ctx, 0));
    // 0x173908: 0xac606bb0  sw          $zero, 0x6BB0($v1)
    ctx->pc = 0x173908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27568), GPR_U32(ctx, 0));
    // 0x17390c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x17390cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x173910: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x173914: 0xac806ba8  sw          $zero, 0x6BA8($a0)
    ctx->pc = 0x173914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27560), GPR_U32(ctx, 0));
    // 0x173918: 0x3e00008  jr          $ra
    ctx->pc = 0x173918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173918u;
            // 0x17391c: 0xac606ba0  sw          $zero, 0x6BA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173920u;
    ctx->pc = 0x173920u;
}
