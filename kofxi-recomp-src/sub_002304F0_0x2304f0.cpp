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

// Function: sub_002304F0
// Address: 0x2304f0 - 0x230558
void sub_002304F0_0x2304f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002304F0_0x2304f0");
#endif

    switch (ctx->pc) {
        case 0x230518u: goto label_230518;
        case 0x230530u: goto label_230530;
        case 0x230548u: goto label_230548;
        default: break;
    }

    ctx->pc = 0x2304f0u;

    // 0x2304f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2304f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2304f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2304f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2304f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2304f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2304fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2304fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230500: 0x26040036  addiu       $a0, $s0, 0x36
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x230504: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x230504u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x230508: 0x3042fff1  andi        $v0, $v0, 0xFFF1
    ctx->pc = 0x230508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65521);
    // 0x23050c: 0x34420830  ori         $v0, $v0, 0x830
    ctx->pc = 0x23050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2096);
    // 0x230510: 0xc08b6f0  jal         func_22DBC0
    ctx->pc = 0x230510u;
    SET_GPR_U32(ctx, 31, 0x230518u);
    ctx->pc = 0x230514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230510u;
    // 0x230514: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x230510u, 0x230518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230518u;
label_230518:
    // 0x230518: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x230518u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23051c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x23051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x230520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230520u;
    {
        const bool branch_taken_0x230520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230520u;
        // 0x230524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230520) {
            ctx->pc = 0x230530u;
            goto label_230530;
        }
    }
    ctx->pc = 0x230528u;
    // 0x230528: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x230528u;
    SET_GPR_U32(ctx, 31, 0x230530u);
    ctx->pc = 0x23052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230528u;
    // 0x23052c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x230528u, 0x230530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230530u;
label_230530:
    // 0x230530: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x230530u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x230534: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x230534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x230538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230538u;
    {
        const bool branch_taken_0x230538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230538u;
        // 0x23053c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230538) {
            ctx->pc = 0x230548u;
            goto label_230548;
        }
    }
    ctx->pc = 0x230540u;
    // 0x230540: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x230540u;
    SET_GPR_U32(ctx, 31, 0x230548u);
    ctx->pc = 0x230544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230540u;
    // 0x230544: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x230540u, 0x230548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230548u;
label_230548:
    // 0x230548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23054c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23054cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230550: 0x3e00008  jr          $ra
    ctx->pc = 0x230550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230550u;
        // 0x230554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230558u;
}
