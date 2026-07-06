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

// Function: sub_00197230
// Address: 0x197230 - 0x197290
void sub_00197230_0x197230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197230_0x197230");
#endif

    switch (ctx->pc) {
        case 0x19723cu: goto label_19723c;
        case 0x197248u: goto label_197248;
        default: break;
    }

    ctx->pc = 0x197230u;

    // 0x197230: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197238: 0x24a5cf50  addiu       $a1, $a1, -0x30B0
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954832));
label_19723c:
    // 0x19723c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197240: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x197240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197244: 0x0  nop
    ctx->pc = 0x197244u;
    // NOP
label_197248:
    // 0x197248: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x197248u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19724c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x19724cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x197250: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x197254: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x197254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x197258: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x197258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x19725c: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x19725cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x197260: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x197260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x197264: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x197264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x197268: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x197268u;
    {
        const bool branch_taken_0x197268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197268u;
        // 0x19726c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197268) {
            ctx->pc = 0x197248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197248;
        }
    }
    ctx->pc = 0x197270u;
    // 0x197270: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x197270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197274: 0x28e3000c  slti        $v1, $a3, 0xC
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x197278: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x197278u;
    {
        const bool branch_taken_0x197278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197278) {
            ctx->pc = 0x19723Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19723c;
        }
    }
    ctx->pc = 0x197280u;
    // 0x197280: 0x3e00008  jr          $ra
    ctx->pc = 0x197280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197288u;
    // 0x197288: 0x0  nop
    ctx->pc = 0x197288u;
    // NOP
    // 0x19728c: 0x0  nop
    ctx->pc = 0x19728cu;
    // NOP
}
