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

// Function: sub_0029E220
// Address: 0x29e220 - 0x29e288
void sub_0029E220_0x29e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E220_0x29e220");
#endif

    switch (ctx->pc) {
        case 0x29e250u: goto label_29e250;
        default: break;
    }

    ctx->pc = 0x29e220u;

    // 0x29e220: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29e220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29e224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e228: 0x61703  sra         $v0, $a2, 28
    ctx->pc = 0x29e228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 28));
    // 0x29e22c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e230: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E230u;
    {
        const bool branch_taken_0x29e230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E230u;
        // 0x29e234: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e230) {
            ctx->pc = 0x29E248u;
            goto label_29e248;
        }
    }
    ctx->pc = 0x29E238u;
    // 0x29e238: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x29e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x29e23c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29E23Cu;
    {
        const bool branch_taken_0x29e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E23Cu;
        // 0x29e240: 0x824023  subu        $t0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e23c) {
            ctx->pc = 0x29E24Cu;
            goto label_29e24c;
        }
    }
    ctx->pc = 0x29E244u;
    // 0x29e244: 0x0  nop
    ctx->pc = 0x29e244u;
    // NOP
label_29e248:
    // 0x29e248: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29e24c:
    // 0x29e24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e250:
    // 0x29e250: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29e254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29e258: 0x461807  srav        $v1, $a2, $v0
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x29e25c: 0x28a40007  slti        $a0, $a1, 0x7
    ctx->pc = 0x29e25cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x29e260: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x29e264: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x29e268: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29E268u;
    {
        const bool branch_taken_0x29e268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E268u;
        // 0x29e26c: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e268) {
            ctx->pc = 0x29E250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e250;
        }
    }
    ctx->pc = 0x29E270u;
    // 0x29e270: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x29e274: 0x81f00  sll         $v1, $t0, 28
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 28));
    // 0x29e278: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29e27c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x29e280: 0x3e00008  jr          $ra
    ctx->pc = 0x29E280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E280u;
        // 0x29e284: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E288u;
}
