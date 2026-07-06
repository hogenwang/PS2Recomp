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

// Function: sub_00173260
// Address: 0x173260 - 0x1732c0
void sub_00173260_0x173260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173260_0x173260");
#endif

    switch (ctx->pc) {
        case 0x17327cu: goto label_17327c;
        default: break;
    }

    ctx->pc = 0x173260u;

    // 0x173260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17326c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173274: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x173274u;
    SET_GPR_U32(ctx, 31, 0x17327Cu);
    ctx->pc = 0x173278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173274u;
    // 0x173278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x173274u, 0x17327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17327Cu;
label_17327c:
    // 0x17327c: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x17327cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x173280: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x173284: 0x912823  subu        $a1, $a0, $s1
    ctx->pc = 0x173284u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x173288: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x17328c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17328cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x173290: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x173290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x173294: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x173294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173298: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17329c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x17329cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1732a0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1732a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1732a4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1732a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1732a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1732a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1732ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1732acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1732b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1732b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1732b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1732B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1732B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B4u;
        // 0x1732b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1732BCu;
    // 0x1732bc: 0x0  nop
    ctx->pc = 0x1732bcu;
    // NOP
}
