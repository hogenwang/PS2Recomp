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

// Function: sub_0010D228
// Address: 0x10d228 - 0x10d2a8
void sub_0010D228_0x10d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D228_0x10d228");
#endif

    switch (ctx->pc) {
        case 0x10d268u: goto label_10d268;
        case 0x10d280u: goto label_10d280;
        default: break;
    }

    ctx->pc = 0x10d228u;

    // 0x10d228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d22c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10d230: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d234: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x10d234u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10d238: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d23c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10d23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d240: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d248: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10D248u;
    {
        const bool branch_taken_0x10d248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D248u;
        // 0x10d24c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d248) {
            ctx->pc = 0x10D288u;
            goto label_10d288;
        }
    }
    ctx->pc = 0x10D250u;
    // 0x10d250: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x10d250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x10d254: 0x8e028690  lw          $v0, -0x7970($s0)
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936208)));
    // 0x10d258: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D258u;
    {
        const bool branch_taken_0x10d258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D258u;
        // 0x10d25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d258) {
            ctx->pc = 0x10D278u;
            goto label_10d278;
        }
    }
    ctx->pc = 0x10D260u;
    // 0x10d260: 0xc043980  jal         func_10E600
    ctx->pc = 0x10D260u;
    SET_GPR_U32(ctx, 31, 0x10D268u);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x10D260u, 0x10D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D268u;
label_10d268:
    // 0x10d268: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D268u;
    {
        const bool branch_taken_0x10d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D268u;
        // 0x10d26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d268) {
            ctx->pc = 0x10D288u;
            goto label_10d288;
        }
    }
    ctx->pc = 0x10D270u;
    // 0x10d270: 0xae028690  sw          $v0, -0x7970($s0)
    ctx->pc = 0x10d270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936208), GPR_U32(ctx, 2));
    // 0x10d274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d278:
    // 0x10d278: 0xc0438ee  jal         func_10E3B8
    ctx->pc = 0x10D278u;
    SET_GPR_U32(ctx, 31, 0x10D280u);
    ctx->pc = 0x10D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D278u;
    // 0x10d27c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3B8u, 0x10D278u, 0x10D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D280u;
label_10d280:
    // 0x10d280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D280u;
    {
        const bool branch_taken_0x10d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D280u;
        // 0x10d284: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d280) {
            ctx->pc = 0x10D290u;
            goto label_10d290;
        }
    }
    ctx->pc = 0x10D288u;
label_10d288:
    // 0x10d288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d28c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10d290:
    // 0x10d290: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d294: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d29c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D29Cu;
        // 0x10d2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2A4u;
    // 0x10d2a4: 0x0  nop
    ctx->pc = 0x10d2a4u;
    // NOP
    if (ctx->pc == 0x10d2a4u) { ctx->pc = 0x10d2a8u; }
}
