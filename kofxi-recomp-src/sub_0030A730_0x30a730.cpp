#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A730
// Address: 0x30a730 - 0x30a780
void sub_0030A730_0x30a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A730_0x30a730");
#endif

    switch (ctx->pc) {
        case 0x30a73cu: goto label_30a73c;
        default: break;
    }

    ctx->pc = 0x30a730u;

    // 0x30a730: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30a730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30a734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a738: 0x24a54520  addiu       $a1, $a1, 0x4520
    ctx->pc = 0x30a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
label_30a73c:
    // 0x30a73c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x30a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x30a740: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x30a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30a744: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30a744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x30a748: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x30a748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30a74c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x30a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x30a750: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x30a750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x30a754: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x30a754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x30a758: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30a758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30a75c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x30a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x30a760: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x30a760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x30a764: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x30A764u;
    {
        const bool branch_taken_0x30a764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A764u;
            // 0x30a768: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a764) {
            ctx->pc = 0x30A73Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a73c;
        }
    }
    ctx->pc = 0x30A76Cu;
    // 0x30a76c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a770: 0x3e00008  jr          $ra
    ctx->pc = 0x30A770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A770u;
            // 0x30a774: 0xac603bb0  sw          $zero, 0x3BB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A778u;
    // 0x30a778: 0x0  nop
    ctx->pc = 0x30a778u;
    // NOP
    // 0x30a77c: 0x0  nop
    ctx->pc = 0x30a77cu;
    // NOP
    ctx->pc = 0x30a780u;
}
