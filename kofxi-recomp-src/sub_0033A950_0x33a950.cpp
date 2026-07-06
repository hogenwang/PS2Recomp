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

// Function: sub_0033A950
// Address: 0x33a950 - 0x33a9b0
void sub_0033A950_0x33a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A950_0x33a950");
#endif

    switch (ctx->pc) {
        case 0x33a960u: goto label_33a960;
        case 0x33a968u: goto label_33a968;
        default: break;
    }

    ctx->pc = 0x33a950u;

    // 0x33a950: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33a950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x33a954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a958: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x33a958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x33a95c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x33a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_33a960:
    // 0x33a960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a964: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33a964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33a968:
    // 0x33a968: 0x84820154  lh          $v0, 0x154($a0)
    ctx->pc = 0x33a968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x33a96c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A96Cu;
    {
        const bool branch_taken_0x33a96c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33a96c) {
            ctx->pc = 0x33A980u;
            goto label_33a980;
        }
    }
    ctx->pc = 0x33A974u;
    // 0x33a974: 0xa4830154  sh          $v1, 0x154($a0)
    ctx->pc = 0x33a974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 340), (uint16_t)GPR_U32(ctx, 3));
    // 0x33a978: 0xa4830156  sh          $v1, 0x156($a0)
    ctx->pc = 0x33a978u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 342), (uint16_t)GPR_U32(ctx, 3));
    // 0x33a97c: 0x0  nop
    ctx->pc = 0x33a97cu;
    // NOP
label_33a980:
    // 0x33a980: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33a984: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x33a984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33a988: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33A988u;
    {
        const bool branch_taken_0x33a988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A988u;
        // 0x33a98c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a988) {
            ctx->pc = 0x33A968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a968;
        }
    }
    ctx->pc = 0x33A990u;
    // 0x33a990: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33a990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33a994: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x33a994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33a998: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A998u;
    {
        const bool branch_taken_0x33a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A998u;
        // 0x33a99c: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a998) {
            ctx->pc = 0x33A960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33a960;
        }
    }
    ctx->pc = 0x33A9A0u;
    // 0x33a9a0: 0x80ceb04  j           func_33AC10
    ctx->pc = 0x33A9A0u;
    ctx->pc = 0x33AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC10u, 0x33A9A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A9A8u;
    // 0x33a9a8: 0x0  nop
    ctx->pc = 0x33a9a8u;
    // NOP
    // 0x33a9ac: 0x0  nop
    ctx->pc = 0x33a9acu;
    // NOP
    if (ctx->pc == 0x33a9acu) { ctx->pc = 0x33a9b0u; }
}
