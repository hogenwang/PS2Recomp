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

// Function: sub_002CB240
// Address: 0x2cb240 - 0x2cb288
void sub_002CB240_0x2cb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB240_0x2cb240");
#endif

    switch (ctx->pc) {
        case 0x2cb258u: goto label_2cb258;
        default: break;
    }

    ctx->pc = 0x2cb240u;

    // 0x2cb240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb248: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb24c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cb24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cb250: 0xc0b2c2a  jal         func_2CB0A8
    ctx->pc = 0x2CB250u;
    SET_GPR_U32(ctx, 31, 0x2CB258u);
    ctx->pc = 0x2CB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB250u;
    // 0x2cb254: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB0A8u, 0x2CB250u, 0x2CB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB258u;
label_2cb258:
    // 0x2cb258: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB258u;
    {
        const bool branch_taken_0x2cb258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb258) {
            ctx->pc = 0x2CB25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB258u;
            // 0x2cb25c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB260u;
    // 0x2cb260: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2cb260u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb264: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2cb264u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb268: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2cb268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2cb26c: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x2cb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2cb270: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2cb270u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2cb274: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb278:
    // 0x2cb278: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cb278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb27c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB27Cu;
        // 0x2cb280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB284u;
    // 0x2cb284: 0x0  nop
    ctx->pc = 0x2cb284u;
    // NOP
}
